class Solution{

public:
    //Function to insert heap.
    
    // s will be a max heap having the smaller half.
    // g will be a min heap having the greater half.
    priority_queue<int> s;
    priority_queue<int,vector<int>,greater<int>> g;
    
    //When s is empty, always push in s.
    //Push the smaller number in s. And greater number in g.
    void insertHeap(int &x)
    {
        if(s.empty()==true || x<=s.top()){
            s.push(x);
        }
        else{
            g.push(x);
        }
        balanceHeaps();
    }
    
    //Function to balance heaps.
    //If we have even number of elements, size of s and g should be same.
    //If we have odd number of elements, size of s should be greater by 1.
    //Therefore, size of s must only be equal than that of g or greater by 1.
    //So an imbalance heap means: size of s is less than g or greater by more than 1. 
    void balanceHeaps()
    {
        if(s.size()>g.size()+1){
            g.push(s.top());
            s.pop();
        }
        else if(s.size()<g.size()){
            s.push(g.top());
            g.pop();
        }
    }

    double getMedian()
    {
        
        if (s.size() == g.size()) {
            return (s.top()+g.top())/2.0;
        } else {
            return s.top();
        }
    }

};
