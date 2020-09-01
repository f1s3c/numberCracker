#include <iostream>
#include <string.h>

int main(){
    unsigned short int sum {0};
    char passTry[20];
    int z{0};
    int y{0};

    int possibleCombo[52];  // total ascii lower and uppercase letters
    int start1 = 65;
    int start2 = 97;
    for(int i{0}; i<51; i++) {
        if(i <= 25) {
            possibleCombo[i] = start1;  // asigning values from 65 to 90
            start1++;
        }
        else {
            possibleCombo[i] = start2;  // asigning values from 97 to 123
            start2++;
        } 
    }

    while(1) {
        passTry[z] = possibleCombo[y];  // asigning 65 to each passTry index
        std::cout << "pass: " << passTry << std::endl;  // until we reach 1053
        
        sum = 0;        // resetting sum to 0 since we go through it every iteration of Z
        for(int i{0}; i<z+1; i++ )
            sum += passTry[i];

        if(sum < 1053)
            if(z > 20) // passTry has 20 chars so we stay under 20
                z = 0; // if we go over we gotta reset to 0 and start incrementing
            else
                z++;    // the first index
        else if (sum == 1053) {                 // self explanatory
            std::cout << "\n ******** FOUND PASSWORD! ********\n" << std::endl;
            std:: cout << "------->  " << passTry << "\n" << std::endl;
            break;
        }
        else {
            passTry[z] = 0; // if we go over 1053 we undo the step and set the
            z = 0;          // index to 0 and the passTry counter to 0
            y++;            // Y is the ascii value counter (65,66,67 etc.)
                            // hence why we increase passTry from the beginning
        }
    }
}