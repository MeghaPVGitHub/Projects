/*
9. CHEF AND DOLLS
Chef is fan of pairs and he likes all things that come in pairs. He even has a doll collection in 
which the dolls come in pairs. One day while going through his collection he found that there 
are odd number of dolls. Someone had stolen a doll!!!
Help chef find which type of doll is missing.
Input format
The first line contains an integer T, the number of test cases.
The first line of each test case contains an integer N, the number of dolls.
The next N lines are the types of dolls that are left.
Output format
For each test case, display the type of doll that doesn't have a pair, in a new line.
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans^=a[i];
        }
        cout<<ans<<endl;
    }
}
