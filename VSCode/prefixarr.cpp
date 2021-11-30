#include <iostream>
using namespace std;

int main(){
     int arr[]= {5,1,5,3,1,5,2,6};
     int n=8;
     int prefix[8];
    prefix[0]= arr[0];
    for(int i=0 ;i<n ;i++)prefix[i]= prefix[i-1]+arr[i];

   int q;
   cin>>q;
   while(q-->0){
       int l,r;
       cin>>l>>r;
       cout<<prefix[r]-prefix[l-1]<<"\n";
   }

     for(int i=0 ;i<n ;i++)cout<<prefix[i]<<",";
    




    return 0;
}