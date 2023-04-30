int maxDistance(int arr[], int n) 
    { 
        // Complete the functio
    
        int a = INT_MIN, b = INT_MAX, c = INT_MIN, d = INT_MAX;
        for(int i=0; i<n; i++)
        {
            a = max(a, arr[i]-i);
            b = min(b, arr[i]-i);
            c = max(c, arr[i]+i);
            d = min(d, arr[i]+i);
        }

        return max(a-b, c-d);

    }
