//
// Created by XaveF on 5/16/2022.
//

#ifndef C_STRING_FUNCTIONS_STRCHR_H
#define C_STRING_FUNCTIONS_STRCHR_H

#include <iostream>
#include <cstring>

using std::cout;
using std::endl;
using std::cin;
using std::cerr;

void StrChr()
{
    cout << endl << "== StrChr Functions ==" << endl;
    char userIn[20];
    char Chr;           // character to locate
    char* addChr;       // pointer to character's location
    int indChar = 0;   // index/position of the character in string
    cout << "Input a string:";
    cin >> userIn;
    cout << endl;
    cout << "The input is [" << userIn << "]" << endl;
    cout << "Input a character to locate: ";
    cin >> Chr;
    cout << endl;
    addChr = strchr(userIn,Chr);                // pointer to the character
    if(addChr != nullptr)
    {
        for(size_t i = 0; userIn[i] != '\0'; ++i)
        {
            if(userIn[i] == Chr)
            {
                indChar = i;                            // index of the character
            }
        }
        cout << "[ " << Chr << " ] is found at index [ " << indChar << " ] with address [ " << &addChr << " ]" << endl;
    } else
    {
        cout << "[ " << Chr << " ] is not found " << endl;
    }
}

#endif //C_STRING_FUNCTIONS_STRCHR_H
