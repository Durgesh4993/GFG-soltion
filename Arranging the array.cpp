class Solution
{
    public:
        void Rearrange(int arr[], int n)
        {
            vector<int> neg;
            vector<int> pos;
            for(int i=0;i<n;i++){
                if(arr[i]<0) neg.push_back(arr[i]);
                else pos.push_back(arr[i]);
            }
            for(int i=0;i<neg.size();i++){
                arr[i]=neg[i];
            }
             for(int i=neg.size();i<neg.size()+pos.size();i++){
                arr[i]=pos[i-neg.size()];
            }           
        }
};

