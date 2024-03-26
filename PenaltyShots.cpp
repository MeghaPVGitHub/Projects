/*
It's the soccer match finals in Chefland and as always it has reached the penalty shotouts. Each 
team is given 55 shots to make and the team scoring a goal on the maximum number of shots 
wins the game. If both the teams' scores are equal, then the game is considered a draw and we 
would have 22 champions.
Given ten integers A1,A2,…,A10, where the odd indexed integers ( A1, A3, A5, A7, A9) represent 
the outcome of the shots made by team 1 and even indexed integers ( A2, A4, A6, A8, A10) 
represent the outcome of the shots made by team 2 (here Ai, = 1 indicates that it's a goal and 
Ai= 0 indicates a miss), determine the winner or find if the game ends in a draw.
Input Format
 The first line of input contains a single integer T denoting the number of test cases. The 
description of T test cases follows.
 The first and only line of each test case contains ten space-separated integers A1, A2,…, A10.
Output Format
For each test case, print a single line containing one integer – 0 if the game ends in a draw or 1 if the first 
team wins or 2 if the second team win
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int arr[11];
        int sum1=0,sum2=0;
        int i;
        for(i=0;i<10;i++)
        {
            cin>>arr[i];
        }
        for(i=1;i<10;i=i+2)
        {
            sum1=sum1+arr[i];
        }
        for(i=2;i<=10;i=i+2)
        {
            sum2=sum2+arr[i];
        }
        if(sum1>sum2)
        {
            cout<<1<<endl;
        }
        else if(sum2>sum1)
        {
            cout<<2<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
        
    }
}
    
