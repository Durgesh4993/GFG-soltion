class Solution{
    public:
    int firstElementKTime(int a[], int n, int k)

    {

        vector<int>b(207,0);

        for(int i=0;i<n;i++)

        {

            b[a[i]]++;

            if(b[a[i]]==k)return a[i];

        }

        return -1;

    }
};
