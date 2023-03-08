class Solution{
    public:
    double MedianOfArrays(vector<int>& array1, vector<int>& array2)

    {

        int i=0, m = array1.size(), j=0, n = array2.size();

        vector<int> arr(m+n);

        int k=0, x;

        double ans;

 

        while (i < m && j < n) {

            if (array1[i] < array2[j])

                arr[k++] = array1[i++];

            else

                arr[k++] = array2[j++];

        }

 

        while (i < m)

            arr[k++] = array1[i++];

 

        while (j < n)

            arr[k++] = array2[j++];

 

        x = (m+n)/2;

        if((m+n)%2==0) ans = (double)(arr[x]+arr[x-1])/2;

        else ans = arr[x];

        return ans;

    }
};
