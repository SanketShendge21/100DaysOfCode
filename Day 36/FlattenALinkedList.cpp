void solve(vector<int>&ans, Node* head){
    while(head){
        ans.push_back(head -> data);
        head = head -> child;
    }
}
Node *flattenLinkedList(Node *head)
{
   vector<int>ans;
   while(head){
       ans.push_back(head -> data);
       if(head -> child){
           solve(ans, head -> child);
       }
       head = head -> next;
   }
   sort(ans.begin(),ans.end());
   Node* dummy;
   Node* node = new Node(ans[0]);
   dummy = node;
   for(int i = 1; i < ans.size(); i++){
       Node* temp = new Node(ans[i]);
       node -> child = temp;
       node = temp;
   }
   return dummy;
}
