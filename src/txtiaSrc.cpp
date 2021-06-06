#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <string>
#include <stdlib.h>
#include "txtiaSrc.h"

using namespace std;

txtiaSrc::txtiaSrc()
{
    //Title Screen
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, 14);
    cout <<" +-------------------------------------------------------------------------------------------------------------+ " << endl << endl;
    cout <<"    +--------------+  +-----------+    ___        ___    +--------------+    _________            ___  " <<endl;
    cout <<"    |              |  |           |    \\  \\      /  /    |              |   |___   ___|          /   \\  " <<endl;
    cout <<"    +-----|   |----+  |    _______|     \\  \\    /  /     +-----|   |----+      |   |            /  _  \\ " <<endl;
    cout <<"          |   |       |   |_______       \\  \\  /  /            |   |           |   |           /  / \\  \\" <<endl;
    cout <<"          |   |       |           |       \\  \\/  /             |   |           |   |          /  /___\\  \\" <<endl;
    cout <<"          |   |       |    _______|       /  /\\  \\             |   |           |   |         /  _______  \\     " <<endl;
    cout <<"          |   |       |   |_______       /  /  \\  \\            |   |           |   |        /  /       \\  \\" <<endl;
    cout <<"          |   |       |           |     /  /    \\  \\           |   |         __|   |__     /  /         \\  \\ " <<endl;
    cout <<"          |___|       |___________|    /__/      \\__\\          |___|        |_________|   /__/           \\__\\ " <<endl;
    cout << endl << " +-------------------------------------------------------------------------------------------------------------+ " << endl;
    SetConsoleTextAttribute(h, 11);
    cout << " Press Any Key To Continue..." << endl;
    WaitKey();
    system("CLS");

    //Info Section
    cout << "+----------------------------------------------+" << endl;
    cout << endl << "  Hello fellow player, please enter your name." << endl << endl;
    cout << "+----------------------------------------------+" << endl;
    cout << " > ";
    getline(cin, playerName);
    cout << "+----------------------------------------------------------------------------+" << endl;
    cout << endl << "  Hello " << playerName << ", what is your gender? (Note: If you enter a letter the program will crash)" << endl << endl;
    cout << endl << " [1] Boy" << endl;
    cout << endl << " [2] Girl" << endl << endl;
    cout << "+----------------------------------------------------------------------------+" << endl;

    do
    {
        inputNumCout();
        //Determine if its a boy or girl and gender reference.
        if (inputNum == 1)
        {
            playerGender = "Boy";
            playerHe_She = "He";
            playerHim_Her = "Him";
            playerHis_Hers = "His";

            cout << "+-----------------------------------------------------------+" << endl;
            cout << endl << "  We will now clear the console to open the game menu. Please enter any key" << endl << endl;
            cout << "+-----------------------------------------------------------+" << endl;
            WaitKey();
            system("CLS");
            mainMenu();
            break;
        }
        else if (inputNum == 2)
        {
            playerGender = "Girl";
            playerHe_She = "She";
            playerHim_Her = "Her";
            playerHis_Hers = "Hers";

            cout << "+-----------------------------------------------------------+" << endl;
            cout << endl << "  We will now clear the console to open the game menu. Please enter any key" << endl << endl;
            cout << "+-----------------------------------------------------------+" << endl;
            WaitKey();
            system("CLS");
            mainMenu();
            break;
        }
        else
        {
            errorMessage();
        }
    }
    while(true);
}

void txtiaSrc::WaitKey()
{
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h,10);
    cout << "  > " << flush;
    while (_kbhit()) _getch();
    _getch();
    while (_kbhit()) _getch();
    SetConsoleTextAttribute(h, 11);
};

void txtiaSrc::errorMessage()
{
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, 4);
    cout << "+--------------------------------------------+" << endl << endl;
    cout << "  !!Invalid Command. Try Again!!  \n" << endl;
    cout << "+--------------------------------------------+" << endl;
    SetConsoleTextAttribute(h, 11);
};

void txtiaSrc::inputNumCout()
{
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, 10);
    cout << "  > ";
    cin >> inputNum;
    SetConsoleTextAttribute(h, 11);
};

txtiaSrc::play()
{
    cout << "+-------------------------------------------------------------------------------------------------------------------+ \n" << endl;
    cout << "       Hello, Sorry for the inconvience this option won't work since we haven't developed the story." << endl;
    cout << "       We will revert you back. Press a Key. \n" << endl;
    cout << "+-------------------------------------------------------------------------------------------------------------------+" << endl;
    WaitKey();
    system("CLS");
    mainMenu();
}

void txtiaSrc::settings()
{
    cout << "+-------------------------------+ \n" << endl;
    cout << "   Settings    " << endl << endl;
    cout << "+-------------------------------+ \n" << endl;
    cout << "+------------------------------------------------------+ \n" << endl;
    cout << "   [1] > View Player Info \n";
    cout << "   [2] > Change Player Info \n";
    cout << endl << "   [0] > Back \n";
    cout << endl << "+------------------------------------------------------+ \n" << endl;
    do
    {
        inputNumCout();

        if(inputNum == 1)
        {
            cout << "+-----------------------------------------------------------------+ \n" << endl;
            cout << "   Your name is " << playerName << endl;
            cout << "   Your Gender is " << playerGender << endl;
            cout << "   Characters will refer you to as " << playerHe_She << ", " << playerHim_Her << ", and " << playerHis_Hers << endl << endl;
            cout << "   [0] > Back \n" << endl;
            cout << "+-----------------------------------------------------------------+ \n" << endl;

            do
            {
                inputNumCout();

                if (inputNum == 0)
                {
                    system("CLS");
                    settings();
                    break;
                }
                else
                {
                    errorMessage();
                }
            }
            while(true);
        }
        else if(inputNum == 2)
        {
            changeOpt();
            break;
        }
        else if(inputNum == 0)
        {
            system("CLS");
            mainMenu();
            break;
        }
        else
        {
            errorMessage();
        }
    }
    while(true);
}

txtiaSrc::changeOpt()
{
    cout << endl << "+-------------------------------------------+" << endl << endl;
    cout << "   What would you like to change? \n" << endl;
    cout << "   [1] > Name \n";
    cout << "   [2] > Gender \n" << endl;
    cout << "   [0] > Back \n"<< endl;
    cout << "+-------------------------------------------+" << endl;

    do
    {
        inputNumCout();

        if (inputNum == 1)
        {
            cout << "+-------------------------------+" << endl << endl;
            cout << "   Enter in a new name. \n" << endl;
            cout << "+-------------------------------+" << endl << endl;
            cout << "> ";
            cin >> playerName;
            cout << "+---------------------------------------------------------------+" << endl << endl;
            cout << "   Your new name is " << playerName << endl;
            cout << "   Press any key so we can revert you back to the settings. \n" << endl;
            cout << "+---------------------------------------------------------------+" << endl;
            WaitKey();
            system("CLS");
            settings();
            break;
        }
        else if(inputNum == 2)
        {
            cout << "+--------------------------------------------------+ \n" << endl;
            cout << "  What Gender would you like to change to? \n" << endl;
            cout << "  [1] Boy \n";
            cout << "  [2] Girl \n" << endl;
            cout << "  [0] Back \n" << endl;
            cout << "+--------------------------------------------------+" << endl;
            do
            {
                inputNumCout();

                if (inputNum == 1)
                {
                    playerGender = "Boy";
                    playerHe_She = "He";
                    playerHim_Her = "Him";
                    playerHis_Hers = "His";

                    cout << "Your gender is now a "<< playerGender << "." << endl;
                    cout << "We will now revert you back to settings, Press any key to continue..." << endl;
                    WaitKey();
                    system("CLS");
                    settings();
                    break;
                }
                else if (inputNum == 2)
                {
                    playerGender = "Girl";
                    playerHe_She = "She";
                    playerHim_Her = "Her";
                    playerHis_Hers = "Hers";

                    cout << "Your gender is now a "<< playerGender << "." << endl;
                    cout << "We will now revert you back to settings, Press any key to continue..." << endl;
                    WaitKey();
                    system("CLS");
                    mainMenu();
                    break;
                }
                else if(inputNum == 0)
                {
                    system("CLS");
                    mainMenu();
                    break;
                }
                else
                {
                    errorMessage();
                }
            }
            while(true);
            break;
        }
        else if(inputNum == 0)
        {
            system("CLS");
            mainMenu();
            break;
        }
        else
        {
            errorMessage();
        }
    }
    while(true);
}
void txtiaSrc::quit()
{
    cout << "+-----------------------------------------+" << endl << endl;
    cout << "  Are you sure you want to quit? \n" << endl;
    cout << "  [1] Yes [2] No" << endl << endl;
    cout << "+-----------------------------------------+" << endl;

    do
    {
        inputNumCout();
        if(inputNum == 1)
        {
            cout << "This Program will now close. Press any key to continue..." << endl;
            WaitKey();
            exit(0);
        }
        else if(inputNum == 2)
        {
            system("CLS");
            mainMenu();
        }
        else
        {
            errorMessage();
        }
    }
    while(true);
}
txtiaSrc::mainMenu()
{
    //Welcome Message.
    cout << "+---------------------------+" << endl;
    cout << endl << "    Welcome To Textia RPG" << endl << endl;
    cout << "+---------------------------+ \n" << endl;
    cout << " > Enter in the number of the option to execute that option. \n";
    // Menu Options.
    cout << endl << "+------------------------------------------------+" << endl << endl;
    cout << "  [1] > PLAY" << endl << endl;
    cout << "  [2] > SETTINGS" << endl << endl;
    cout << "  [3] > QUIT" << endl << endl;
    cout << "Version : 0.10 \n";
    cout << "+------------------------------------------------+" << endl << endl;

    do
    {
        inputNumCout();

        if (inputNum == 1)
        {
            system("CLS");
            play();
            break;
        }
        else if (inputNum == 2)
        {
            system("CLS");
            settings();
            break;
        }
        else if (inputNum == 3)
        {
            system("CLS");
            quit();
            break;
        }
        else
        {
            errorMessage();
        }
    }
    while(true);
}
