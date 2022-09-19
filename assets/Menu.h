#pragma once
#include <iostream>
#include <conio.h>
#include <Windows.h>
#include "assets/DEC to Bin.h"

using namespace std;


int UpOrDown = 0;
int null_menu = 0;




void menu()
{
        
        while (true)
        {
            
            

            //up and down keyboard keys detection codes.
            if (GetKeyState(VK_UP) & 0x8000)
            {
                UpOrDown++;
                Sleep(150);
            }
            if (GetKeyState(VK_DOWN) & 0x8000)
            {
                UpOrDown--;
                Sleep(150);
            }

            


            //menu code.
            switch (UpOrDown)
            {
            case 0:
                system("cls");
                cout << "" << endl;
                cout << "" << endl;
                cout << "          ================" << endl;
                cout << "          |    Choice:   |" << endl;
                cout << "          |    1.DEC     |" << endl;
                cout << "          |    2.BIN     |" << endl;
                cout << "          |    3.OCT     |" << endl;
                cout << "          |    4.HEX     |" << endl;
                cout << "          | ESC to close |" << endl;
                cout << "          ================" << endl;

                //add stuff here, repeat for the other ones

                null_menu = _getch();
                break;

            case -1:
            case 4:
                system("cls");
                cout << "" << endl;
                cout << "" << endl;
                cout << "          ================" << endl;
                cout << "          |    Choice:   |" << endl;
                cout << "          |  ->1.DEC<-   |" << endl;
                cout << "          |    2.BIN     |" << endl;
                cout << "          |    3.OCT     |" << endl;
                cout << "          |    4.HEX     |" << endl;
                cout << "          | ESC to close |" << endl;
                cout << "          ================" << endl;


                null_menu = _getch();
                break;
               
            case -2:
            case 3:
                system("cls");
                cout << "" << endl;
                cout << "" << endl;
                cout << "          ================" << endl;
                cout << "          |    Choice:   |" << endl;
                cout << "          |    1.DEC     |" << endl;
                cout << "          |  ->2.BIN<-   |" << endl;
                cout << "          |    3.OCT     |" << endl;
                cout << "          |    4.HEX     |" << endl;
                cout << "          | ESC to close |" << endl;
                cout << "          ================" << endl;


                null_menu = _getch();
                break;
                
            case -3:
            case 2:
                system("cls");
                cout << "" << endl;
                cout << "" << endl;
                cout << "          ================" << endl;
                cout << "          |    Choice:   |" << endl;
                cout << "          |    1.DEC     |" << endl;
                cout << "          |    2.BIN     |" << endl;
                cout << "          |  ->3.OCT<-   |" << endl;
                cout << "          |    4.HEX     |" << endl;
                cout << "          | ESC to close |" << endl;
                cout << "          ================" << endl;


                null_menu = _getch();
                break;
               
            case -4:
            case 1:
                system("cls");
                cout << "" << endl;
                cout << "" << endl;
                cout << "          ================" << endl;
                cout << "          |    Choice:   |" << endl;
                cout << "          |    1.DEC     |" << endl;
                cout << "          |    2.BIN     |" << endl;
                cout << "          |    3.OCT     |" << endl;
                cout << "          |  ->4.HEX<-   |" << endl;
                cout << "          | ESC to close |" << endl;
                cout << "          ================" << endl;


                null_menu = _getch();
                break;
               

            default:
                UpOrDown = 0;
                break;
                
                
                
                
                
                


            }
        }
        
 }








