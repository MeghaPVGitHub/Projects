/*
1. RCB AND PLAYOFFS
Team RCB has earned X points in the games it has played so far in this year's IPL. To qualify 
for the playoffs they must earn at least a total of Y points. They currently have Z games left, in 
each game they earn 2 2 points for a win, 1 point for a draw, and no points for a loss.
Is it possible for RCB to qualify for the playoffs this year?
Input Format:
 First line will contain T, number of testcases. Then the testcases follow.
 Each testcase contains of a single line of input, three integers X, Y, Z.
Output Format:
For each test case, output in one line YES if it is possible for RCB to qualify for the playoffs, 
or NO if it is not possible to do so.
Output is case insensitive, which means that "yes", "Yes", "YEs", "no", "nO" - all such strings 
will be acceptable.
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x, y, z;
        cin>>x>>y>>z;
        if((x+z*2)>=y||(x+z*1)>=y)
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }
    }
}