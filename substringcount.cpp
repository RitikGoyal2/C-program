
// #include <bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;

void subString(string s, int n)
{
  int count=0;
    for (int i = 0; i < n; i++)
    {
        for (int len = 1; len <= n - i; len++)
        {
            count++;
            // cout << s.substr(i, len) << endl;
        }
    }
    cout<<"No of Substring in this : "<<count;
}
 
int main()
{
  
    string s = "AXBC";
    subString(s, s.length());
    return 0;
}