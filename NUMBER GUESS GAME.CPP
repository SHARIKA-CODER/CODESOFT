#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int B = 10;
    int randomnumber=rand()% B +1;
    string name;
    int userguess;
    int maxattempts=5;
    int attempts=0;
    
    cout<<"PLEASE ENTER YOUR NAME:  " <<endl;
    getline(cin,name);
    cout<<"WELCOME "<<name <<" TO THE NUMBER GUESSING NAME" <<endl;
    
    
    do{
        cout<< "enter your guess in the range from 1 to " <<B ;
        cin>>userguess;
        
        if(userguess < randomnumber)
        {
        cout<<"TOO LOW!TRY AGAIN. "<<endl;
            
        }
         else if(userguess>randomnumber)
         {
        cout<<"TOO HIGH!TRY AGAIN. " <<endl;
         }
        else
        {
        cout<<"CONGRATULATIONS! YOU WON..... ";
        }
        attempts++;
        
    }while( userguess!=randomnumber  && attempts<<maxattempts );
    return 0;
}