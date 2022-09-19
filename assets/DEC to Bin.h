#pragma once
#include <iostream>
#include <conio.h>
#include <Windows.h>
#include "assets/Menu.h"


using namespace std;


long long gross_DECToBIN = 0;
char char_DECToBIN;
int convertion_DECToBIN;


void convertToBinary(long long n)
{
    if (n / 2 != 0) {
        convertToBinary(n / 2);
    }
    printf("%d", n % 2);

}




int DECToBIN()
{
    if (VK_ESCAPE)
    {
        
        menu();
        
    }

    while (true)
    {
       


        cout << "Decimal: " << gross_DECToBIN << endl;
        cout << "=======================" << endl;
        cout << "Binary: ";


        convertToBinary(gross_DECToBIN);
        char_DECToBIN = _getch();
        system("cls");


        convertion_DECToBIN = char_DECToBIN;

        switch (convertion_DECToBIN)
        {
        case '0':
            gross_DECToBIN = (gross_DECToBIN * 10);
            break;
        case '1':
            gross_DECToBIN = (gross_DECToBIN * 10) + 1;
            break;
        case '2':
            gross_DECToBIN = (gross_DECToBIN * 10) + 2;
            break;
        case '3':
            gross_DECToBIN = (gross_DECToBIN * 10) + 3;
            break;
        case '4':
            gross_DECToBIN = (gross_DECToBIN * 10) + 4;
            break;
        case '5':
            gross_DECToBIN = (gross_DECToBIN * 10) + 5;
            break;
        case '6':
            gross_DECToBIN = (gross_DECToBIN * 10) + 6;
            break;
        case '7':
            gross_DECToBIN = (gross_DECToBIN * 10) + 7;
            break;
        case '8':
            gross_DECToBIN = (gross_DECToBIN * 10) + 8;
            break;
        case '9':
            gross_DECToBIN = (gross_DECToBIN * 10) + 9;
            break;
        default:
            gross_DECToBIN = 0;
            break;
        }





    }



    return 0;
}
