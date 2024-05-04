#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    vector<string> Fav_Game;
    
    // ask the player how many games?
    int numgame;
    cout << "How many Game Do you want to Add ?";
    

    // store that number
    cin >> numgame;
    //cout << numgame;
    
    // create a while loop that runs that many times
    int num = 0;
    
    while(num > numgame)
        
        cout << "Enter the name of the game: ";
    // for( int i = 0; i < numGAmes, i++)
    
        for( int i = 0; i < numgame; i++)
            {
             string game;
                cout << "Enter Game " << i + 1 << ":\n"; 
                cin >> game;
                Fav_Game.push_back(game);
            }
        cout << "Here is the list of the game that you like\n";
    
        for (int x = 0; x < Fav_Game.size(); x += 1)
        {
            cout << x + 1 << " : " << Fav_Game[x] << "\n";
            
        } 

    return 0;
        
}
     
