#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main ()
{

    // ask the player how many games?
    // store that number
    // create a while loop that runs that many times
    // for( int i = 0; i < numGAmes, i++)
    
    vector<string> fg;
    //int index = 0;
    
    while(true)
        {
            cout << "what do you like to do ?\n You can say ADD to add game SHOW to show the list of the game. \n";
            
            string input;
            getline(cin, input);

            if (input == "ADD")
            {
                

                
                cout << "what game did you like to add ?";
                getline(cin, input);
                fg.push_back(input);        
            }

            else if (input == "SHOW")
            {
                for(int x = 0; x < fg.size(); x += 1 )
                    {
                        // if(fg[x] == "") continue;
                        cout << fg << "\n";       
                    }
                
            }
            else if(input == "quit")
            {
                cout << "thanks for playing!\n";
                 break;
            }
        }








    
    // vector<string> FavGame;

    // int numgame;
    // cout << "Enter the number of game that you like !....\n";
    // cin >> numgame;

    // cout << "Now start enter you game one by one.\n";
    // for (int x = 0; x < numgame; ++x)
    //     {
    //         string game;
    //         cout << "game " << x + 1 << ":- ";
    //         cin >> game;
    //         FavGame.push_back(game);
    //     }
    
    // cout << "Here is the list of your favorait game \n";
    // for (int x = 0; x < FavGame.size(); ++x)
    //     {
    //         cout << x + 1 << ". " << FavGame[x] << endl;
            
    //     }

    
}
