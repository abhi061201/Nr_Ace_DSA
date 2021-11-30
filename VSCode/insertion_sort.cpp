#include <iostream>
using namespace std;

void insertion_sort(int arr[], int n)
{

    for (int i = 1; i < n; i++)
    {
        int j = i-1;
        int temp= arr[i];
        while (j >= 0 && arr[j] > temp)
        {
           arr[j+1]=arr[j];
        j--;
        for (int i = 0; i < n; i++)
        cout << arr[i] << ",";
        cout<<"\n";

        }
        arr[j+1]= temp;
    }
}
int main()
{
    int n = 10;
    int arr[] = {1,2,3,4,5,6,7,8,9,0};
    insertion_sort(arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << ",";

    return 0;
}
/*   
time coplexity using array in insertion sort is 

O(n^2);  as in worst case inner loop will run fully
in best case it will be O(n) as outer loop will be run definitely
space complexity= O(1) as no ectra space used exept some identifiers



*/