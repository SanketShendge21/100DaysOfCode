struct Meeting {
    int start, end, index;
};

bool compareMeetings(const Meeting& a, const Meeting& b) {
    return a.end < b.end;
}

int maximumMeetings(vector<int>& start, vector<int>& end) {
    int n = start.size();
    vector<Meeting> meetings(n);

    for (int i = 0; i < n; ++i) {
        meetings[i].start = start[i];
        meetings[i].end = end[i];
        meetings[i].index = i + 1;
    }

    sort(meetings.begin(), meetings.end(), compareMeetings);

    vector<int> selectedMeetings;
    int lastEndTime = 0;

    for (const Meeting& meeting : meetings) {
        if (meeting.start > lastEndTime) {
            selectedMeetings.push_back(meeting.index);
            lastEndTime = meeting.end;
        }
    }


    return selectedMeetings.size();
}