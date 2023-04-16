class Solution {
  public:
    long long solve(int N, vector<int> &A, vector<int> &B) {
       vector<int>even1,odd1,even2,odd2;
       for(int i=0;i<N;i++) {
           if(A[i]%2==0) even1.push_back(A[i]);
           else odd1.push_back(A[i]);
           if(B[i]%2==0) even2.push_back(B[i]);
           else odd2.push_back(B[i]);
         }
       if(even1.size()!=even2.size())
       return -1;
       sort(even1.begin(),even1.end());
       sort(odd1.begin(),odd1.end());
       sort(even2.begin(),even2.end());
       sort(odd2.begin(),odd2.end());
       long long diff=0,podiff=0;
       for(int i=0;i<even1.size();i++){
           diff+=even1[i]-even2[i];
           podiff+=abs(even1[i]-even2[i]);
        }
        for(int i=0;i<odd1.size();i++){
           diff+=odd1[i]-odd2[i];
           podiff+=abs(odd1[i]-odd2[i]);
        }
       if(diff!=0)
       return -1;
       else return podiff/4;
    }
};
