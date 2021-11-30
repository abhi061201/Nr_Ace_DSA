#include <iostream>
using namespace std;
void selectionsort(int a[], int n)
{
    int min;
    for (int i = 0; i < n - 1; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[min_index] > a[j])
            {
                min_index = j;
            }
        }
        int temp = a[i];
        a[i] = a[min_index];
        a[min_index] = temp;
    }
}

int main()
{

    int n=10;
  

    int arr[]={11,33,4,5,6,8,9,6,1,0};
   
    selectionsort(arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}