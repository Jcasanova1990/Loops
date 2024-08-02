#include <iostream>
#include "CTurtle.hpp"
#include "CImg.h"
using namespace cturtle;
using namespace std;

int main () {
    
    TurtleScreen screen(400, 300);
    Turtle jeff(screen);
    jeff.forward(100);
    screen.exitOnClick();

    return 0;
}