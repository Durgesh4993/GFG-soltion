class Solution {
public:
    int lis(int arr[] , int n ) {

        vector<int> temp;
        temp.push_back(arr[0]);

        for (int i = 1 ; i < n ; i++) {
            if (arr[i] > temp.back()) {
                temp.push_back(arr[i]);
            } else {
                int idx = lower_bound(temp.begin() , temp.end() , arr[i]) - temp.begin();
                temp[idx] = arr[i];
            }
        }
        return temp.size();
    }
    int removeStudents(int H[], int N) {
        // code here
        return N - lis(H, N);
    }
};
