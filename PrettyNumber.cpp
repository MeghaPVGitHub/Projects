/*
7. COUNTING PRETTY NUMBERS
Vasya likes the number 239. Therefore, he considers a number pretty if its last digit is 2, 3 or 9.
Vasya wants to watch the numbers between L and R (both inclusive), so he asked you to 
determine how many pretty numbers are in this range. Can you help him?
Input Format:
 The first line of the input contains a single integer T denoting the number of test cases. 
The description of T test cases follows.
 The first and only line of each test case contains two space-separated integers L and R.
Output Format:
For each test case, print a single line containing one integer — the number of pretty numbers 
between L and R.
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,count=0;
        cin>>x>>y;
        int r1=x%10;
        int r2=y%10;
        int ir1=x-r1+10;
        int ir2=y-r2;
        count += ((ir2-ir1)/10)*3;
        for(int i=r1;i<=9;i++)
        {
            if(i==2||i==3||i==9)
            {
                count++;
            }
        }
        for(int i=r2;i>=1;i--)
        {
            if(i==2||i==3||i==9)
            {
                count++;
            }
        }
        cout<<count<<endl;

    }
}
    