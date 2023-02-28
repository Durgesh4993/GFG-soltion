class Solution{
public:
    vector<int> optimalArray(int n,vector<int> &a){

    vector<int>p(n,0);

    p[0] = 0;

    for(int i=1;i<n;i++){

        int index = i/2;

        p[i] = p[i-1]+(a[i] - a[i/2]);

    }

    return p;

    }
};
