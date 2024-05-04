#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

// int multy(int num,int time_mul)
// {
    
//     return(num * time_mul);
// }

// int NumberOfPlayer(int num)
// {
//     int number;
//     cout << "Enter the number of Player you want in game :- ";
//     cin >> number;    
//     return (number);
// }

string names(string Players_Name = "")
{
    if(Players_Name == "") {
        // string names;
        cout << "Enter Your Player Name :- ";
        cin >> Players_Name;    
    }

    if(Players_Name.size() > 15) {
        cout << "Name is too long.\n";
        return "shorty";
    }
    
    return (Players_Name);
}

string Assets (string item)
{
    string asset;
    cout << "What you want to assing " << "Player_1" << ".\n";
    cin >> asset;
    return (asset);
    
}


int main() 
{
    cout << "Welcome to the Jumaji..!\n";

    char ans;
    cout << "Are You Ready..? (y/n)\n";
    cin >> ans;

    if (ans == 'y')
    {
        cout << "Let Play..!\n";
        
        int numberofplayer;
        int counter = 0;
        
        cout << "Enter the number of Player you want in game :-" ;
        cin >> numberofplayer;    

        vector<string> playerNames;
        
        while(counter++ < numberofplayer)
        {
            // string name;
            // cout << "Enter Your Player Name :-";
            // cin >> name;

            playerNames.push_back(names());
        }
        
        cout << "Players Names in the Game:\n";
        for (int x = 0; x < playerNames.size(); ++x) {
            cout << "Player_" << x + 1 << ": " << playerNames[x] << "\n";
        
        }
        string playerSelection;
        cout <<"Which player you want to be ?(Write That player name)\n";
        cin >> playerSelection;

        cout << "You are now "<< playerSelection << ".\n";

        cout << "Now Lets beging...! \n";
        cout << "The game wants you to choose number between 1-10 \n";
        
        int playerInput;
        cin >> playerInput;
        

        cout << "Your choice is " << playerInput 
        

        
    
        
    }
    
    
    // int T_no;
    // cout << "Enter the number that you want to multiply that number of time\n";
    // cin >> T_no;

    // int no;
    // cout << "Entre the number that you want to multyply with "<< T_no <<" times\n";
    // cin >> no;


    // cout << "here is you number " << multy(T_no,no) << ".\n";
    
}    

   

