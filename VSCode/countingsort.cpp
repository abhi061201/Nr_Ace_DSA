#include <bits/stdc++.h>
using namespace std;
int main()
{
int arr[]= {2,4,4,1,2,8,6,4,33,24};
int n= 10;
int maxe= arr[max_element(arr,arr+n)-arr];
int freq[maxe+1]={0};
// make frew array
for(int i=0 ;i<n ;i++)freq[arr[i]]++;

int pref[maxe+1];
pref[0]= freq[0];

// make prefix array
for(int i=1 ;i<maxe+1 ;i++){
    pref[i]= pref[i-1]+freq[i];
}

// make final array
int temp[n];
for(int i=n-1 ;i>=0  ;i--){
   temp[pref[arr[i]]-1]= arr[i];
   pref[arr[i]]--;

}

for(int i=0 ;i<n ;i++)
 cout<<temp[i]<<",";
    return 0;
}