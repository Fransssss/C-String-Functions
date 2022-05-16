//
// Created by XaveF on 5/16/2022.
//

#ifndef C_STRING_FUNCTIONS_STRCMP_H
#define C_STRING_FUNCTIONS_STRCMP_H

#include <iostream>
#include <cstring>

using std::cout;
using std::endl;
using std::cin;

void StrCmp()
{
    char userInOne[20];
    char userInTwo[20];
    int isSame = 0;
    cout << endl << "== StrCmp Functions ==" << endl;
    cout << "Input 1st string: ";
    cin >> userInOne;
    cout << endl;
    cout << "Input 2nd string: ";
    cin >> userInTwo;
    cout << endl;
    cout << "The strings are:" << endl;
    cout << "1) " << userInOne << '\n' << "2) " << userInTwo << endl;
    isSame = strcmp(userInOne,userInTwo);
    if(isSame == 0)
    {
        cout << "[The two strings are the same]" << endl;
    } else
    {
        cout << "[The two strings are different]" << endl;
    }
}

#endif //C_STRING_FUNCTIONS_STRCMP_H
