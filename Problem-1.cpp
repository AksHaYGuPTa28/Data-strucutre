//Reverse the array

#include <bits/stdc++.h>
using namespace std;


void revarray(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main()
{
    int arr[10], n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    revarray(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<endl;
    }
    return 0;
}
