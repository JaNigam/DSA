#include <bits/stdc++.h>
#include "template.h"
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    cout << "enter the values of array elements";
    loop(i, n)
    {
        cin >> arr[i];
    }

    loop(j, n)
    {
        cout << arr[j];
    }
}