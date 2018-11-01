#include <iostream>
// Library needed to get a random seed
#include <time.h>
using namespace std;
int main() {
    // Gets a random seed for our rand() function
    // ONLY RUN ONCE
    srand( time(NULL) );
    int money,bet, balance;
    balance = 500;
    cout <<"WELCOME TO GAMBLE"<<endl;
    
   
    while (balance>0)
    {
        cout << "MONEY FOR GAMBLE IS "<< balance <<endl;
        int random = rand() % 2;
        cout << random;
        
        cout <<"Choose number 1 or 0:"<<endl;
        cin >>money;
        if (money != 0 && money !=1){
            cout <<"CASHING OUT"<<endl;
            break;
        }

        cout <<"ENTER AMOUNT YOU WANT TO BET: "<<endl;
        cin >>bet;

        balance = balance - bet;
        
     
     
        if (money==random)
        {
            cout <<"YOU WON"<<endl;
            balance=bet*2+balance;
        }

        else
        {
            cout <<"YOU LOOSE"<<endl;

        }

    }
    cout <<"SORRY YOU QUIT"<<endl;
    

    return 0;
}
