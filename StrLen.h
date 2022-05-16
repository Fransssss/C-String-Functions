//
// Created by XaveF on 5/16/2022.
//

#ifndef C_STRING_FUNCTIONS_STRLEN_H
#define C_STRING_FUNCTIONS_STRLEN_H

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::cin;

void StrLen()
{
    char userIn[20];
    int lenChr = 0;
    cout << endl << "== StrLen Functions ==" << endl;
    cout << "Input a string: ";
    cin >> userIn;
    cout << endl;
    lenChr = strlen(userIn);
    cout << "The length of [ " << userIn << " ] is [ " << lenChr << " ]" <<  endl;
}

#endif //C_STRING_FUNCTIONS_STRLEN_H
