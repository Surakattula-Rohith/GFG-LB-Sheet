#include <bits/stdc++.h>
using namespace std;

int Maximize(int arr[], int n)
{
    sort(arr, arr + n);
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = (ans + (long)arr[i] * i) % (1000000007);
    }

    return ans;
}