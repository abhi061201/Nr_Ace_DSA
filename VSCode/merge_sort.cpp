#include <bits/stdc++.h >
using namespace std;


void merge(vector<int>& v ,int l,int mid,int h){

vector<int >v1;
vector<int >v2;
for(int i=l ;i<=mid ;i++)v1.push_back(v[i]);
for(int i=mid+1 ;i<=h ;i++)v2.push_back(v[i]);

int n = v1.size();
    int m = v2.size();

    int i = 0, j = 0;int k=l;
    while (i < n && j < m)
    {
        if (v1[i] < v2[j])
        {
           v[k]= v1[i];
            i++;
            k++;
        }
        else
        {
           v[k]= v2[j];
            j++;
            k++;
        }
    }
    while (i < n)
    {
          v[k]= v1[i];
        i++;
        k++;
    }
    while (j < m)
    {
        v[k]= v2[j];
        j++;
        k++;
    }

}


void merge_sort(vector<int> &v, int l, int h)
{

    if (l >= h)
        return;
        else{
    int mid = (l + h) / 2;
    merge_sort(v,l,mid);
    merge_sort(v,mid+1,h);
    merge(v,l,mid,h);
        }
}

// vector <int> merge_array(vector <int>v1, vector<int> v2){


//     return v;
// }

int main()
{
   vector<int> v={2,6,54,2,6,9,5,3,1,23,45,67};
   merge_sort(v,0,v.size()-1);
   for(int i=0 ;i<v.size() ;i++)cout<<v[i]<<",";
    return 0;
}