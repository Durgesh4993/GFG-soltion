class Solution{

  public:
	int minDifference(int arr[], int n)  { 

     

     int range = 0;

        int diff= INT_MAX;

 

        for(int i=0; i<n; i++){

            range += arr[i];

        }

 

        bool t[n+1][range+1];

 

        for(int i=0; i<n+1; i++){

            

            for(int j=0; j<range+1; j++){

 

                if(i==0){

                    t[i][j]=false;

                }

                if(j==0){

                    t[i][j]=true;

                }

            }

        }

 

        for(int i=1; i<n+1; i++){

 

            for(int j=1; j<range+1; j++){

                if(arr[i-1]<=j){

                    t[i][j] = t[i-1][j] || t[i-1][j-arr[i-1]];

                }

                else{

                    t[i][j]=t[i-1][j];

                }

            }

        }

 

        for(int i=range/2; i>=0; i--){

            if(t[n][i]==true){

                diff = min(diff,range-2*i);

                break;

            }

        }

        return diff;

 

 } 
};
