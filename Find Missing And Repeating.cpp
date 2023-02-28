class Solution{
public:
    long long *findTwoElement(int *arr, int n1) {

        long long ele,sum=0,total,final,n=n1;

        sort(arr,arr+n);

        for(int i=0;i<n-1;i++)

        {

            if(arr[i]==arr[i+1])

            {

                ele=arr[i];break;

            }

        }

       for(int i=0;i<n;i++)

       {

           if(arr[i]!=ele) sum=sum+arr[i];

       }

       sum=sum+ele;

       total=(n*(n+1))/2;

       final=total-sum;

      long long *ans=new long long[2];

       ans[0]=ele;ans[1]=final;

       return ans;

    }
};
