class Solution{
public:
    int maxIndexDiff(int arr[], int n) {
    vector<int> left(n), right(n);
    left[0] = 0;
    for (int i = 1; i < n; i++) {
        left[i] = (arr[i] < arr[left[i - 1]]) ? i : left[i - 1];
    }
    right[n - 1] = n - 1;
    for (int i = n - 2; i >= 0; i--) {
        right[i] = (arr[i] > arr[right[i + 1]]) ? i : right[i + 1];
    }

    int Diff = 0;
    int i = 0, j = 0;
    while (i < n && j < n) {
        if (arr[left[i]] <= arr[right[j]]) {
            Diff = max(Diff, j - i);
            j++;
        } else {
            i++;
        }
    }

    return Diff;
    }

};

