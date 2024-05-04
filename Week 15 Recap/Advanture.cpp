#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int RollDie(int sides = 12) 
{
    return rand() % sides + 1;
}

string askYesNo(string question)
{
    string response;
    cout << question << " (yes/no): \n";
    cin >> response;
    return response;
}

int main() 
{
    srand(time(0));
    
    int health = 10;
    int gold = 0;
    int turns = 0;
    
    do {
            string response = askYesNo("Would you like to go adventuring?\n");
            if (response == "yes") 
            {
                int orcAttack = RollDie();
                int playerBlock = RollDie();

                cout << "You encounter an orc!\n";
                cout << "The orc attacks with a " << orcAttack << "...!\n";
                cout << "You attempt to block with a " << playerBlock << "...!\n";

                if (playerBlock >= orcAttack)
                {
                    cout << "You successfully block the attack!\n";
                    health--;
                    gold += RollDie(10);
                    cout << "You lose 1 health point and find " << gold << " gold.\n";
                    cout << "You manage to escape!\n";
                } 
                else
                {
                    cout << "You fail to block the attack...!\n";
                    health -= orcAttack;
                    cout << "You lose " << orcAttack << " health points.\n";
                    cout << "You manage to escape, but find no gold.\n";
                }

                turns++;
                
            } 
            else 
            {
                break; 
            }
        }
        
        while (health > 0);

        if (health > 0)
        {
            cout << "You survived for " << turns << " turns.\n";
            cout << "You found " << gold << " gold.\n";
            if (health < 5) 
            {
                cout << "Your health is low. You should consider visiting a doctor.\n";
            }
        } 
        else
        {
            cout << "Unfortunately, you are dead.\n";
            cout << "Your body holds " << gold << " gold.\n";
        }

        return 0;
    }

