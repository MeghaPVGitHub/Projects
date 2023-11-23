#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() 
{
    srand(static_cast<unsigned int>(time(nullptr)));
    int secretNumber = rand()%100+1;
    int playerNumber;
        
    for(int i=0; i<5;i++)
    {
        cout<<"Guess the number from 1 to 100"<<endl;
        cin>>playerNumber;
        cout<<playerNumber;
        if(playerNumber==secretNumber)
        {
            cout<<"Well done"<<endl;
            break;
        }
        else
        {
            cout<<"Wrong Answer, try again!"<<endl;
            if(playerNumber>secretNumber )
            {
                cout<<"You have guessed a higher value"<<endl;
               
                
            }
            else
            {
                cout<<"You have guess a lower value"<<endl;
               
            }
        }
    }
    