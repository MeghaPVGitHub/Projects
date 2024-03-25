/*
6. Rectangle
You are given four integers a, b, c and d. Determine if there's a rectangle such that the lengths 
of its sides are a, b, c and d (in any order).
Input Format
 The first line of the input contains a single integer T denoting the number of test cases. 
The description of T test cases follows.
 The first and only line of each test case contains four space-separated integers a, b, c 
and d.
Output Format
For each test case, print a single line containing one string "YES" or "NO
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a==b && c==d)
        cout<<"YES"<<endl;
        else if(a==c && b==d)
        cout<<"YES"<<endl;
        else if(a==d && b==c)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;      
    }
}
    
