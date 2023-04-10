class Solution{
  public:
  long long int wineSelling(vector<int>& arr, int N){
      long long int sum = 0;
      int i=0,j=0;
      
      while(i<N && j<N)
      {
         if(arr[i]==0 || arr[i]<0)
         {
             i++;
             continue;
         }
         if(arr[i]>0)
         {
             while(arr[j]>=0 && j<N)
             {
                 j++;
             }
            long long int ele1 = arr[i]*1LL;
            long long int ele2 = abs(arr[j])*1LL;
            long long int dist = abs(i-j)*1LL;
            long long int mul1 = ele1*dist;
            long long int mul2 = ele2*dist;
            if(mul1>mul2)
            {
                sum+=mul2;
                arr[i] = ele1-ele2;
                arr[j] = 0;
            }
            else
            {
                sum+=mul1;
                arr[i] = 0;
                arr[j] = ele1-ele2;
            }
         }
      }
      return sum;
      
  }
