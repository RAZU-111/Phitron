#include <bits/stdc++.h>
using namespace std;

void swap(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}

int p(int arr[], int low, int high) {
  srand(time(NULL));
  int randIndex = low + rand() % (high - low + 1);
  int pivot = arr[randIndex];
  int i = low - 1;

  swap(arr[randIndex], arr[high]);

  for (int j = low; j <= high - 1; j++) {
    if (arr[j] >= pivot) {
      i++;
      swap(arr[i], arr[j]);
    }
  }
  swap(arr[i + 1], arr[high]);
  return (i + 1);
}
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pivot = p(arr, low, high);
        quickSort(arr, low, pivot - 1);
        quickSort(arr, pivot + 1, high);
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    quickSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
