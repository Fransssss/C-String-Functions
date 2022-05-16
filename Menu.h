//
// Created by XaveF on 5/16/2022.
//

#ifndef C_STRING_FUNCTIONS_MENU_H
#define C_STRING_FUNCTIONS_MENU_H

#include <iostream>
#include "StrChr.h"
#include "StrLen.h"
#include "StrCmp.h"
#include "Exit.h"

using std::cout;
using std::endl;
using std::cin;
using std::cerr;

void Menu()
{
    char choice;
    cout << endl << "=== Menu Program | C-String Functions === " << endl;
    cout << "1) StrChr Function " << endl;
    cout << "2) StrLen Function " << endl;
    cout << "3) StrCmp Function " << endl;
    cout << "E) Exit" << endl;
    cout << "Choice: ";
    cin >> choice;

    while(choice != 'E')
    {
        if(choice == '1')
        {
            StrChr();
        } else if ( choice == '2')
        {
            StrLen();
        } else if (choice == '3')
        {
            StrCmp();
        } else
        {
            cerr << "[Invalid Input]" << endl;
        }

        cout << endl << "=== Menu Program | C-String Functions === " << endl;
        cout << "1) StrChr Function " << endl;
        cout << "2) StrLen Function " << endl;
        cout << "3) StrCmp Function " << endl;
        cout << "E) Exit" << endl;
        cout << "Choice: ";
        cin >> choice;
    }

    if(choice == 'E')
    {
        Exit();
    }
}


#endif //C_STRING_FUNCTIONS_MENU_H
