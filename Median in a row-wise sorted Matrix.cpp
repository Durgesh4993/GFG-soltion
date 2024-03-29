class Solution {
    int median(int matrix[][], int R, int C) {

        // code here

        int low = 1;
        
        

        int high = (int)1e9;

        while(low <= high){

            int mid = (low + high) /2;

            int count = 0;

            for(int i = 0; i<R; i++){

                count += findSmaller(matrix[i] , mid);

            }

            if(count <= (R*C)/2)  low = mid + 1;

            else high = mid - 1;

        }

        return low;

    }

    public int findSmaller(int row[] , int mid){

        int low = 0;

        int high = row.length - 1;

        while(low <= high){

            int md = (low + high) / 2;

            if(row[md] <= mid){

                low = md + 1;

            }else{

                high = md -1;

            }

        }

        return low;

    }

}
