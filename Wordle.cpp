/*
2. WORDLE
Chef invented a modified wordle.
There is a hidden word S and a guess word T, both of length 5. 
Chef defines a string M to determine the correctness of the guess word. For the i
th index:
 If the guess at the ith index is correct, the ith character of M is G.
 If the guess at the ith index is wrong, the ith character of M is B.
Given the hidden word S and guess T, determine string M.
Input Format
 First line will contain T, number of test cases. Then the test cases follow.
 Each test case contains of two lines of input.
 First line contains the string S - the hidden word.
 Second line contains the string T - the guess word.
Output Format
For each test case, print the value of string M.
You may print each character of the string in uppercase or lowercase (for example, the 
strings BgBgBBgBgB, BGBGBBGBGB, bgbGBbgbGB and bgbgbbgbgb will all be treated as 
identical).
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string S,T,M;
        M="*****";
        cin>>S>>T;
        for(int i=0;i<5;i++)
        {
            if(S[i]==T[i])
            {
                M[i]='G';
            }
            else
            {
                M[i]='B';
            }
        }
        cout<<M<<endl;        
    }
    
}
    