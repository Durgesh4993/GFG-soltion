class Solution

{

    void merge(int arr[], int l, int m, int r)

    {

         // Your code here

         int[] tmp = new int[r-l+1];

         int k = 0, p = l, q = m+1;

         for(int i = l; i<=r; i++){

             if(p>m)

                tmp[k++] = arr[q++];

             else if(q>r)

                tmp[k++] = arr[p++];

             else if(arr[p]<arr[q])

                tmp[k++] = arr[p++];

             else tmp[k++] = arr[q++];

         }

         System.arraycopy(tmp,0,arr,l,r-l+1);

    }

    void mergeSort(int arr[], int l, int r)

    {

        //code here

        if(l<r){

            int mid = l+(r-l)/2;

            

            mergeSort(arr,l,mid);

            mergeSort(arr,mid+1,r);

            merge(arr,l,mid,r);

        }

        

    }

 

}
