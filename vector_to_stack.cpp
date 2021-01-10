#include<iostream>
#include<stack>
#include<vector>
#include "vector2stack.h"
#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int>v;
stack<int>s;
cout<<"press -1 to stop:"<<endl;
int val;
while(1)
{
cin>>val;
if(val!=-1)
{
v.push_back(val);
}
else
{
break;
}
}
create_stack(v,s);
while(!s.empty())
{
cout<<s.top()<<endl;
s.pop();
}
}
