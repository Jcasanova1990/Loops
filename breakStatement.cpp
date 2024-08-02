#include <iostream>
using namespace std;

int main() {

  srand(time(NULL)); // start randomizer every time program runs
  while (true) {
    cout << "This is an infinite loop" << endl;
    int randNum = rand() % 100 + 1; // generate random number between 1 and 100
    
    if (randNum > 75) {
      cout << "The loop ends" << endl;
      break; // stop the loop
    } // end if condition
  } // end while loop
  
  cout << "The program ends" << endl;
  
  return 0;

}