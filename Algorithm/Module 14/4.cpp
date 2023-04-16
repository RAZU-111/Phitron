#include <bits/stdc++.h>
using namespace std;

int Cal_Sum(int A[], int N)
{
    if (N <= 0)
        return 0;
    return (Cal_Sum(A, N - 1) + A[N - 1]);
}

int main()
{
    int n;
    int arr[1000];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans;
    cout << Cal_Sum(arr, n) << endl;
}
