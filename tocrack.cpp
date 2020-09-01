#include <iostream>
#include <stdio.h>
#include <string.h>

char mann[120] = "Hello there skid, I really doubt you can crackme. Dont only patch me...matter of fact dont patch me at all. Keygen me";
int main(){
    unsigned short int sum {0};
    char password[20];
    std::cout << "Enter password: ";
    std::cin >> password;
    for(int i {0}; i<strlen(password); i++ ){
        sum += (int)password[i];
    }
    if(sum == 1053){
        std::cout  << "Good job my boi \n";
        return 0;
    }
    else{
        std::cout << "Dummy \n";
    }
    //system("pause");
}