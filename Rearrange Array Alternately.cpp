class Solution{ 
    // temp: input array
    // n: size of array
    //Function to rearrange  the array elements alternately.
    public static void rearrange(long arr[], int n){
        
        // Your code here
        long a[]=new long[n];
        int i=0, j=n-1, index=0;
        
        while(i<j)
        {
            a[index++]=arr[j--];
            a[index++]=arr[i++];
        }
        
        if(n%2!=0)
            a[index++]=arr[n/2];
            
        index=0;
        for(long item:a)
            arr[index++]=item;
        
    }
    
}
