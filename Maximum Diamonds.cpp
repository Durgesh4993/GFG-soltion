class Solution {
  public:
    long long maxDiamonds(int A[], int N, int K) {
        long long ans=0;
        priority_queue<int>pq;
        
        for(int i=0;i<N;i++){
            pq.push(A[i]);
        }
        
        int i=0;
        while(i<K){
            int temp=pq.top();
            pq.pop();
            ans+=temp;
            temp=temp/2;
            pq.push(temp);
            i++;
        }
        return ans;
    }
};
