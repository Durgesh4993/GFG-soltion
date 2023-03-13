class Solution{

	public:
	int findSwapValues(int A[], int n, int B[], int m)
	{
        sort(A, A+n);
        sort(B, B+m);
        int sum1=0, sum2=0;
        for(int i=0;i<n;i++)
            sum1+=A[i];
        for(int j=0;j<m;j++)
            sum2+=B[j];
            
        int i=0, j=0;
        while(i<n && j<m){
            int curr_sum1=sum1-A[i]+B[j],  curr_sum2=sum2-B[j]+A[i];
            if(curr_sum1==curr_sum2){
                return true;
            }
            else if(A[i]>=B[j] && curr_sum1>curr_sum2){
                i++;
            }
            else if(A[i]>=B[j] && curr_sum1<curr_sum2){
                j++;
            }
            else if(A[i]<=B[j] && curr_sum1>curr_sum2){
                i++;
            }
            else{
                j++;
            }
        }
        return -1;
	}
 

};
