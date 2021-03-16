#include <iostream>
#include <stdlib.h>
using namespace std;
#include "snowman.hpp"

int main(){
    int rnum = rand() % 4 + 1;//create for the snowman a valid number  
    for(int i = 0; i < 7; i++){  
        rnum *= 10;
        rnum += rand() % 4 + 1;
    }
    cout << ariel::snowman(rnum) << endl;
    return 0;
}