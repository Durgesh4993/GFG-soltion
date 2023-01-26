class Solution 
{
    public:
    //Function to find minimum number of pages.
    int findPages(int a[], int n, int m) 

    {

        //code here

        if(m>n) return -1;

     

        int low=a[0];

        int high=0;

        for(int i=0;i<n;i++)

        {

           

            high+=a[i];

        }

        int mid,ans=1e9;

        while(low<=high)

        {

             mid=(low+high)/2;

            int count=1;

            int sum=0;

            

            bool flag=true;

            for(int i=0;i<n;i++)

            {    if(a[i]>mid)

            {

                flag=false;

                break;

            }

               

                if(sum+a[i]>mid)

                {

                    sum=a[i];

                    count++;

                }

                else sum+=a[i];

                

            }

            if(count<=m&&flag) 

            {

                ans=mid;

                high=mid-1;

            }

            else low=mid+1;

            

        }

        if(ans==1e9)

        return -1;

        else return ans;

 

    }
};
