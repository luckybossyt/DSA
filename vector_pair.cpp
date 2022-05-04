#include<iostream>
#include<algorithm>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int,int>>v;
    vector<int> b{2,2,3,4,5,6,7,5,8,912,3,4,566};
    int i ,n;


    cout<<endl<<"enter the value of n"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        v.push_back({b[i],i});
    }

    sort(v.begin(),v.end());
    for(i=0;i<v.size();i++)
    {
       cout<<v[i].first<<"  "<<v[i].second<<endl;
    }
}
