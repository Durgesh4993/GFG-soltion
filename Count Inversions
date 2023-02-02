class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long int merge(long long int a[], int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;
    long long int *L = new long long int[n1];
    long long int *R = new long long int[n2];
    int i, j, k;
    long long int count = 0;

    for (i = 0; i < n1; i++)
        L[i] = a[l + i];
    for (j = 0; j < n2; j++)
        R[j] = a[m + 1 + j];

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            a[k] = L[i];
            i++;
        } else {
            a[k] = R[j];
            j++;
            count += (n1 - i);
        }
        k++;
    }

    while (i < n1) {
        a[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        a[k] = R[j];
        j++;
        k++;
    }
    delete [] L;
    delete [] R;
    return count;
}

long long int mergeSort(long long int a[], int l, int r) {
    long long int count = 0;
    if (l < r) {
        int m = l + (r - l) / 2;
        count = mergeSort(a, l, m);
        count += mergeSort(a, m + 1, r);
        count += merge(a, l, m, r);
    }
    return count;
}

long long int inversionCount(long long int a[], int n) {
    return mergeSort(a, 0, n - 1);
}

};
