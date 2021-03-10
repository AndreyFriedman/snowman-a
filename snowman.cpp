// perfect
#include "snowman.hpp"

#include <iostream>
#include <stdexcept>
#include <string>
#include <cstring>
using namespace std;
namespace ariel{
    string snowman(int num){

    const char * hats [4] = {"\n _===_","  ___\n .....","   _ \n  /_\\","  ___ \n (_*_)"};
    const char * noses [4] = {",",".","_"," "};
    const char * eyes [4] = {".","o","O","-"};
    const char * leftArms [4] = {"<","\\","/"," "};
    const char * rightArms [4] = {">","/","\\"," "};
    const char * torsos [4] = {"( : )","(] [)","(> <)","(   )"};
    const char * bases [4] = {"( : )","(\" \")","(___)","(   )"};

    if(num > 44444444 || num < 11111111){
        throw invalid_argument("Invalid Code");
    }

    string man = "";
    int base = num%10;
    int torso = num%100 / 10;
    int righthand = num%1000 / 100;
    int lefthand = num%10000 / 1000;
    int righteye = num%100000 / 10000;
    int lefteye = num%1000000 / 100000;
    int nose = num%10000000 / 1000000;
    int hat = num%100000000 / 10000000;

    if(base>4||torso>4||righthand>4||lefthand>4||righteye>4||lefteye>4||nose>4||hat>4){
        throw invalid_argument("Invalid Code");
    }
    man = man + hats[hat-1] + "\n";

    if(lefthand == 1 || lefthand == 3 || lefthand == 4){man = man + " ";}
    else{man = man + leftArms[lefthand-1];}
    
    man = man + "(" + eyes[lefteye-1] + noses[nose-1] + eyes[righteye-1] + ")";

    if(righthand == 1 || righthand == 3 || righthand == 4){man = man + " \n";}
    else{man = man + rightArms[righthand-1] + "\n";}
    
    if(lefthand == 2 || lefthand == 4){man = man + " ";}
    else{man = man + leftArms[lefthand-1];}
    
    man = man + torsos[torso-1];

    if(righthand == 2 || righthand == 4){man = man + " ";}
    else{man = man + rightArms[righthand-1];}

    man = man + "\n " + bases[base-1];
    
    return man;
    }
}
