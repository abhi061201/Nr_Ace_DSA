#include <iostream>
#include <bits\stdc++.h>
using namespace std;

void Bubblesort(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {

        for (int j = 0; j < n-i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
            
        }
    }
}

int main()
{
    int n = 10;
    int arr[] = {2, 1, 6, 7, 8, 4, 5, 9, 0, 6};
    Bubblesort(arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << ",";

    return 0;
}
