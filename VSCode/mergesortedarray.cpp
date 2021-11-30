#include <bits/stdc++.h>
using namespace std;

vector <int> merge_array(vector <int>v1, vector<int> v2){

int n = v1.size();
    int m = v2.size();
    vector<int> v;
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (v1[i] < v2[j])
        {
            v.push_back(v1[i]);
            i++;
        }
        else
        {
            v.push_back(v2[j]);
            j++;
        }
    }
    while (i < n)
    {
        v.push_back(v1[i]);
        i++;
    }
    while (j < m)
    {
        v.push_back(v2[j]);
        j++;
    }

    return v;
}
int main()
{
    vector<int> v1 = {
        2,
        3,
        4,
        8,
        9,
    };
    vector<int> v2 = {6, 7, 9, 67, 68, 90, 564, 100};

    vector<int> ans= merge_array(v1,v2);
    for(int i=0 ;i<ans.size() ;i++ )cout<<ans[i]<<" ";

    return 0;
}