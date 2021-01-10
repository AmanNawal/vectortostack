#include<iostream>
#include<stack>
#include<vector>
using namespace std;

create_stack(vector<int>v,stack<int>&s)
{
for(int i=0;i<v.size();i++)
{
s.push(v[i]);
}
}
