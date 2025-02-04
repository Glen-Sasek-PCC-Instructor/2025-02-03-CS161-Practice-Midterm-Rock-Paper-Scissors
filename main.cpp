//*****************************************************************************
// Author:
// Assignment:
// Date:
// Description:
// Sources:
//*****************************************************************************

#include <iostream>
#include <cctype>
#include <cstdlib> // for srand and rand
#include <ctime>   // for time

using namespace std;


const bool DEBUG = true;

int main() {

  string name = "";
  char userPlay = '\0';
  char computerPlay = '\0';

  enum {
    TIE = 0,
    USER_WIN = 1,
    COMPUTER_WIN = 2
  };

  int gameStatus = TIE;

  cout << "Welcome to the Rock Paper Scissors Game!" << endl;

  cout << "Enter player name: " << endl;
  getline(cin, name);

  cout << "What is your play " << name << "? ";
  cin >> userPlay;

  userPlay = tolower(userPlay);

  if(DEBUG) {
    cout << "DEBUG -> userPlay: " << userPlay << endl;
  }



  switch (userPlay) {
  case 'r': // Fallthrough
  case 'p': // Fallthrough
  case 's':
    break;
  default:
    cout << "Invalid play." << endl;
    cout << "Run the program again!" << endl;
    return 1;
  }

  srand(time(NULL));

  switch (rand() % 3) {
  case 0:
    computerPlay = 'r';
    break;
  case 1:
    computerPlay = 'p';
    break;
  case 2:
    computerPlay = 's';
    break;
  }

  if (computerPlay == userPlay) {
    gameStatus = TIE;
  }
  else if (computerPlay == 'r') {
    gameStatus = userPlay == 'p' ? USER_WIN : COMPUTER_WIN;
  }
  else if (computerPlay == 'p') {
    gameStatus = userPlay == 's' ? USER_WIN : COMPUTER_WIN;
  }
  else {
    gameStatus = userPlay == 'r' ? USER_WIN : COMPUTER_WIN;
  }

  cout << "Computer plays " << computerPlay << endl;

  switch (gameStatus) {
    case TIE:
      cout << "It's a tie!" << endl;
      break;
    case USER_WIN:
      cout << name << " wins!" << endl;
      break;
    case COMPUTER_WIN:
      cout << "Computer wins!" << endl;
      break;
  }

  cout << "Thank you for playing!" << endl;

  return 0;
}
