class Solution {
  public:
    int totalTime(int n, vector<int> &arr, vector<int> &time) {
        int total_time=0;
        unordered_set<int>us;
        
        for(int i=0;i<n;i++){
            if(us.find(arr[i])!=us.end()){
                total_time+=time[arr[i]-1];
            }
            else{
                us.insert(arr[i]);
                total_time++;
            }
        }
        return total_time-1;
    }

};
