#include<bits/stdc++.h>
using namespace std; 
int main (){

int arr[]= {3,4,56,23,45,12,1,2,34};
sort(arr,arr+9); //here we take starting address as "arr" and ending address as "arr+no.of elements"
for(int i=0 ;i<9 ; i++)cout<<arr[i]<<",";




    return 0;
}