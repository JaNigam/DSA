#include <bits/stdc++.h>
#include "template.h"
using namespace std;

void reverse(int arr[], int n)
{
    int j = n - 1;
    int i = 0;
    while (i < j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    cout << "enter the values of array elements";
    fillarr(arr, n);
    reverse(arr, n);
    printarr(arr, n);
}