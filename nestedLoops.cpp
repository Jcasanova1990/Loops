#include <iostream>
using namespace std;

int main () {
    //for nested
    for (int row = 0; row < 10; row++) { //outter loop
        for (int col = 0; col < 50; col++) { //inner loop
            cout << "#";
        } 
    } cout << "" << endl;

    // while nested
 int i = 1; // Outer loop control variable
    
    while (i <= 5) { // Outer loop
        int j = 1; // Inner loop control variable
        
        while (j <= i) { // Inner loop
            cout << j << " ";
            j++;
        }
        
        cout << endl; // Move to the next line after inner loop
        
        i++; // Increment outer loop variable
    }



    return 0;
}