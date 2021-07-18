/*
moving all the negetives to the startin and the positives to the end of the array, no need to sort then
*/

#include "template.h"

void moveNegetives(int arr[], int n)
{
    int j = 0;
    loop(i, n)
    {
        if (arr[i] < 0)
        {
            if (i != j)
            {
                swap(arr[i], arr[j]);
            }

            j++;
        }
    }
}

int main()
{
    int n;
    cout << "enter the number of elements";
    cin >> n;
    int arr[n];
    fillarr(arr, n);
    cout << endl;
    moveNegetives(arr, n);
    printarr(arr, n);
}