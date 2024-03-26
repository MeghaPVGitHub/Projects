#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int h[n];
        int count=0;
        for(int i=0;i<n;i++)
        {
            cin>>h[i];
            if(h[i]>k)
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
}
    