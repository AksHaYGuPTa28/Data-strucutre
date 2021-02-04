//Maximum and Minimum element in an array

#include <bits/stdc++.h>
using namespace std;

void maxmin(int a[], int n)
{
    int max, min;
    if (n == 1)
    {
        a[0] = max;
        a[0] = min;
    }
    else
    {
        if (a[0] > a[1])
        {
            max = a[0];
            min = a[1];
        }
        else
        {
            min = a[0];
            max = a[1];
        }
    }

    for (int i = 2; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    cout << min << endl;
    cout << max;
}

int main()
{
    int n, a[10];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    maxmin(a, n);
    return 0;
}