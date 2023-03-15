
class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        unordered_set<Node*> s;
        
        while(head != NULL){
          if(s.find(head) != s.end()){
              return true;
          }
          s.insert(head);
          head = head->next;
        }
        return false;
    }
};
