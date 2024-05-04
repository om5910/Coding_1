#include <iostream>    // sends text to and from the console
using namespace std;    // we hate typing 'std::' all the freaking time.

int main() {
  cout << "Hello World!\n";


  cout << "I am thinking of a number between 1 and 10. Can you guess it?\n";
  // set it up at the top of the code
  int theNumber = 4;
  int playerGuess = 0;    // just good practice to define all variables when created.
  //int num = 0;

  cout << "Your guess: ";
  cin >> playerGuess;
  
  //cout << "\nnum: "; 
 // cin >> num;

  // a single equals is an assignment, a double equals is a comparison.
  // a single equals is "You are...", a double equals is "Are you?"
  while(true)
    {
    
    if (playerGuess == theNumber)
    {
      cout << "\nThere you go !!....\n";  
    }
    else {
      cout << "Nope nope !!!....";
    }
   
    }

  }