#include <iostream>
#include <windows.h>
#include <conio.h>
#include <Windows.h>
#include <string>
#include <stdlib.h>

using namespace std;

//Variables For The User
string playerName;
string playerGender;
string playerHe_She;
string playerHim_Her;
string playerHis_Hers;
int playerArmor;
int playerHP = 100;
double playerLvl = 0;

int inputNum;

int mainMenu();

void WaitKey()
{
    cout << " " << endl;
    while (_kbhit()) _getch();
    _getch();
    while (_kbhit()) _getch();
};

void errorMessage(){
    cout << "+--------------------------------------------+" << endl << endl;
    cout << "  !!Invalid Command. Try Again!!  \n" << endl;
    cout << "+--------------------------------------------+" << endl;
};

void inputNumCout(){
    cout << "> ";
    cin >> inputNum;
};

void play(){}

void settings(){
    cout << "+-------------------------------+ \n" << endl;
    cout << "   Settings    " << endl << endl;
    cout << "+-------------------------------+ \n" << endl;
    cout << "+------------------------------------------------------+ \n" << endl;
    cout << "   [1] > View Player Info \n";
    cout << "   [2] > Change Player Info \n";
    cout << endl << "   [0] > Back \n";
    cout << endl << "+------------------------------------------------------+ \n" << endl;
    inputNumCout();

    if(inputNum == 1){
        cout << "+-----------------------------------------------------------------+ \n" << endl;
        cout << "   Your name is " << playerName << endl;
        cout << "   Your Gender is " << playerGender << endl;
        cout << "   Characters will refer you to as " << playerHe_She << ", " << playerHim_Her << ", and " << playerHis_Hers << endl << endl;
        cout << "   [0] > Back \n" << endl;
        cout << "+-----------------------------------------------------------------+ \n" << endl;
        inputNumCout();

        if (inputNum == 0){
            system("CLS");
            settings();
        }else{
            while(inputNum != 0){
                errorMessage();
                inputNumCout();
                if (inputNum == 0){
                    break;
                    system("CLS");
                    settings();
                }
            }
        }
    }else if(inputNum == 2){
        cout << endl << "+-------------------------------------------+" << endl << endl;
        cout << "   What would you like to change? \n" << endl;
        cout << "   [1] > Name \n";
        cout << "   [2] > Gender \n" << endl;
        cout << "+-------------------------------------------+" << endl;
        inputNumCout();

        if (inputNum == 1){
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
        }else if(inputNum == 2){
            cout << "+--------------------------------------------------+ \n" << endl;
            cout << "  What Gender would you like to change to? \n" << endl;
            cout << "  [1] Boy \n";
            cout << "  [2] Girl \n" << endl;
            cout << "+--------------------------------------------------+" << endl;
            inputNumCout();

            if (inputNum == 1){
                playerGender = "Boy";
                playerHe_She = "He";
                playerHim_Her = "Him";
                playerHis_Hers = "His";

                cout << "Your gender is now a "<< playerGender << "." << endl;
                cout << "We will now revert you back to settings, Press any key to continue..." << endl;
                WaitKey();
                system("CLS");
                settings();
            }else if (inputNum == 2){
                playerGender = "Girl";
                playerHe_She = "She";
                playerHim_Her = "Her";
                playerHis_Hers = "Hers";

                cout << "Your gender is now a "<< playerGender << "." << endl;
                cout << "We will now revert you back to settings, Press any key to continue..." << endl;
                WaitKey();
                system("CLS");
                settings();
            }else{
                while(inputNum != 1 || inputNum != 2){
                    errorMessage();
                    inputNumCout();

                    if (inputNum == 1){
                        playerGender = "Boy";
                        playerHe_She = "He";
                        playerHim_Her = "Him";
                        playerHis_Hers = "His";

                        cout << "Your gender is now a "<< playerGender << "." << endl;
                        cout << "We will now revert you back to settings, Press any key to continue..." << endl;
                        break;
                        WaitKey();
                        system("CLS");
                        settings();
                    }else if (inputNum == 2){
                        playerGender = "Girl";
                        playerHe_She = "She";
                        playerHim_Her = "Her";
                        playerHis_Hers = "Hers";

                        cout << "Your gender is now a "<< playerGender << "." << endl;
                        cout << "We will now revert you back to settings, Press any key to continue..." << endl;
                        break;
                        WaitKey();
                        system("CLS");
                        settings();
                    }
                }
            }
        }else{
            while(inputNum != 1 || inputNum != 2){
                errorMessage();
                inputNumCout();

                if (inputNum == 1){
                    playerGender = "Boy";
                    playerHe_She = "He";
                    playerHim_Her = "Him";
                    playerHis_Hers = "His";

                    cout << "Your gender is now a "<< playerGender << "." << endl;
                    cout << "We will now revert you back to settings, Press any key to continue..." << endl;
                    WaitKey();
                    break;
                    system("CLS");
                    settings();
                }else if (inputNum == 2){
                    playerGender = "Girl";
                    playerHe_She = "She";
                    playerHim_Her = "Her";
                    playerHis_Hers = "Hers";

                    cout << "Your gender is now a "<< playerGender << "." << endl;
                    cout << "We will now revert you back to settings, Press any key to continue..." << endl;
                    WaitKey();
                    break;
                    system("CLS");
                    settings();
                }else{
                    while(inputNum != 1 || inputNum != 2){
                        errorMessage();
                        inputNumCout();
                        if (inputNum == 1){
                            playerGender = "Boy";
                            playerHe_She = "He";
                            playerHim_Her = "Him";
                            playerHis_Hers = "His";

                            cout << "Your gender is now a "<< playerGender << "." << endl;
                            cout << "We will now revert you back to settings, Press any key to continue..." << endl;
                            break;
                            WaitKey();
                            system("CLS");
                            settings();
                        }else if (inputNum == 2){
                            playerGender = "Girl";
                            playerHe_She = "She";
                            playerHim_Her = "Her";
                            playerHis_Hers = "Hers";

                            cout << "Your gender is now a "<< playerGender << "." << endl;
                            cout << "We will now revert you back to settings, Press any key to continue..." << endl;
                            break;
                            WaitKey();
                            system("CLS");
                            settings();
                        }
                    }
                }
            }
        }

    }else if(inputNum == 0){
        system("CLS");
        mainMenu();
    }else{
        while(inputNum != 0){
            errorMessage();
            inputNumCout();

            if(inputNum == 1){
                break;
                cout << "+-----------------------------------------------------------------+ \n" << endl;
                cout << "   Your name is " << playerName << endl;
                cout << "   Your Gender is " << playerGender << endl;
                cout << "   Characters will refer you to as " << playerHe_She << ", " << playerHim_Her << ", and " << playerHis_Hers << endl << endl;
                cout << "   [0] > Back \n" << endl;
                cout << "+-----------------------------------------------------------------+ \n" << endl;
                inputNumCout();

                if (inputNum == 0){
                    break;
                    system("CLS");
                    settings();
                }else{
                    while(inputNum != 0){
                        errorMessage();
                        inputNumCout();
                        if (inputNum == 0){
                            break;
                            system("CLS");
                            settings();
                        }
                    }
                }
            }else if(inputNum == 2){
                break;
                cout << endl << "+-------------------------------------------+" << endl << endl;
                cout << "   What would you like to change? \n" << endl;
                cout << "   [1] > Name \n";
                cout << "   [2] > Gender \n" << endl;
                cout << "+-------------------------------------------+" << endl;
                inputNumCout();

                if (inputNum == 1){
                    break;
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
                }else if(inputNum == 2){
                    break;
                    cout << "+--------------------------------------------------+ \n" << endl;
                    cout << "  What Gender would you like to change to? \n" << endl;
                    cout << "  [1] Boy \n";
                    cout << "  [2] Girl \n" << endl;
                    cout << "+--------------------------------------------------+" << endl;
                    inputNumCout();

                    if (inputNum == 1){
                        break;
                        playerGender = "Boy";
                        playerHe_She = "He";
                        playerHim_Her = "Him";
                        playerHis_Hers = "His";

                        cout << "Your gender is now a "<< playerGender << "." << endl;
                        cout << "We will now revert you back to settings, Press any key to continue..." << endl;
                        WaitKey();
                        system("CLS");
                        settings();
                    }else if (inputNum == 2){
                        break;
                        playerGender = "Girl";
                        playerHe_She = "She";
                        playerHim_Her = "Her";
                        playerHis_Hers = "Hers";

                        cout << "Your gender is now a "<< playerGender << "." << endl;
                        cout << "We will now revert you back to settings, Press any key to continue..." << endl;
                        WaitKey();
                        system("CLS");
                        settings();
                    }else{
                        while(inputNum != 1 || inputNum != 2){
                            errorMessage();
                            inputNumCout();

                            if (inputNum == 1){
                                break;
                                playerGender = "Boy";
                                playerHe_She = "He";
                                playerHim_Her = "Him";
                                playerHis_Hers = "His";

                                cout << "Your gender is now a "<< playerGender << "." << endl;
                                cout << "We will now revert you back to settings, Press any key to continue..." << endl;

                                WaitKey();
                                system("CLS");
                                settings();
                            }else if (inputNum == 2){
                                break;
                                playerGender = "Girl";
                                playerHe_She = "She";
                                playerHim_Her = "Her";
                                playerHis_Hers = "Hers";

                                cout << "Your gender is now a "<< playerGender << "." << endl;
                                cout << "We will now revert you back to settings, Press any key to continue..." << endl;
                                WaitKey();
                                system("CLS");
                                settings();
                            }
                        }
                    }
                }else{
                    while(inputNum != 1 || inputNum != 2){
                        errorMessage();
                        inputNumCout();

                        if (inputNum == 1){
                            playerGender = "Boy";
                            playerHe_She = "He";
                            playerHim_Her = "Him";
                            playerHis_Hers = "His";

                            cout << "Your gender is now a "<< playerGender << "." << endl;
                            cout << "We will now revert you back to settings, Press any key to continue..." << endl;
                            WaitKey();
                            break;
                            system("CLS");
                            settings();
                        }else if (inputNum == 2){
                            playerGender = "Girl";
                            playerHe_She = "She";
                            playerHim_Her = "Her";
                            playerHis_Hers = "Hers";

                            cout << "Your gender is now a "<< playerGender << "." << endl;
                            cout << "We will now revert you back to settings, Press any key to continue..." << endl;
                            WaitKey();
                            break;
                            system("CLS");
                            settings();
                        }else{
                            while(inputNum != 1 || inputNum != 2){
                                errorMessage();
                                inputNumCout();
                                if (inputNum == 1){
                                    playerGender = "Boy";
                                    playerHe_She = "He";
                                    playerHim_Her = "Him";
                                    playerHis_Hers = "His";

                                    cout << "Your gender is now a "<< playerGender << "." << endl;
                                    cout << "We will now revert you back to settings, Press any key to continue..." << endl;
                                    break;
                                    WaitKey();
                                    system("CLS");
                                    settings();
                                }else if (inputNum == 2){
                                    playerGender = "Girl";
                                    playerHe_She = "She";
                                    playerHim_Her = "Her";
                                    playerHis_Hers = "Hers";

                                    cout << "Your gender is now a "<< playerGender << "." << endl;
                                    cout << "We will now revert you back to settings, Press any key to continue..." << endl;
                                    break;
                                    WaitKey();
                                    system("CLS");
                                    settings();
                                }
                            }
                        }
                    }
                }

            }else if(inputNum == 0){
                system("CLS");
                mainMenu();
            }
        }
    }
}

void quit() {
    cout << "+-----------------------------------------+" << endl << endl;
    cout << "  Are you sure you want to quit? \n" << endl;
    cout << "  [1] Yes [2] No" << endl << endl;
    cout << "+-----------------------------------------+" << endl;
    inputNumCout();
    if(inputNum == 1){
        cout << "This Program will now close. Press any key to continue..." << endl;
        WaitKey();
        exit(0);
    }else if(inputNum == 2){
        system("CLS");
        mainMenu();
    }else {
        while (inputNum != 1 || inputNum != 2 || inputNum != 3) {
            system("CLS");
            errorMessage();
            cout << "+-----------------------------------------+" << endl << endl;
            cout << "  Are you sure you want to quit? \n" << endl;
            cout << "  [1] Yes [2] No" << endl << endl;
            cout << "+-----------------------------------------+" << endl;
            inputNumCout();
            if(inputNum == 1){
                cout << "This Program will now close. Press any key to continue..." << endl;
                WaitKey();
                exit(0);
            }else if(inputNum == 2){
                cout << "This program will now revert to the main menu \n";
                cout << endl <<"Press any key to continue... \n";
                WaitKey();
                system("CLS");
                mainMenu();
                break;
            }
        }
    }
}
mainMenu(){
    //Welcome Message.
    cout << "+---------------------------+" << endl;
    cout << endl << "   |Welcome To Textia RPG|" << endl << endl;
    cout << "+---------------------------+ \n" << endl;
    cout << " > Enter in the number of the option to execute that option. \n";
    // Menu Options.
    cout << endl << "+------------------------------------------------+" << endl << endl;
    cout << "  [1] > PLAY" << endl << endl;
    cout << "  [2] > SETTINGS" << endl << endl;
    cout << "  [3] > QUIT" << endl << endl;
    cout << "+------------------------------------------------+" << endl << endl;
    cout << "> ";
    cin >> inputNum;

    if (inputNum == 1) {
        play();
    }
    else if (inputNum == 2) {
        settings();
    }
    else if (inputNum == 3) {
        quit();
    }
    else {
        while (inputNum != 1 || inputNum != 2 || inputNum != 3) {
            errorMessage();
            cin >> inputNum;

            if (inputNum == 1) {
                play();
                break;
            }
            else if (inputNum == 2) {
                settings();
                break;
            }
            else if (inputNum == 3) {
                quit();
                break;
            }
        }
    }
};

void infoSection() {

    cout << "+----------------------------------------------+" << endl;
    cout << endl << "  Hello fellow player, please enter your name." << endl << endl;
    cout << "+----------------------------------------------+" << endl;
    cout << " > ";
    getline(cin, playerName);
    cout << "+----------------------------------------------------------------------------+" << endl;
    cout << endl << "  Hello " << playerName << ", what is your gender? (Note: If you enter a letter the program will crash)" << endl << endl;
    cout << endl << " [0] Boy" << endl;
    cout << endl << " [1] Girl" << endl << endl;
    cout << "+----------------------------------------------------------------------------+" << endl;
    cout << " > ";
    cin >> inputNum;
    //Determine if its a boy or girl and gender reference.
    if (inputNum == 0) {
        playerGender = "Boy";
        playerHe_She = "He";
        playerHim_Her = "Him";
        playerHis_Hers = "His";

        cout << "+-----------------------------------------------------------+" << endl;
        cout << endl << "  We will now clear the console to open the game menu. Please enter any key" << endl << endl;
        cout << "+-----------------------------------------------------------+" << endl;
        WaitKey();
        system("CLS");
    }
    else if (inputNum == 1) {
        playerGender = "Girl";
        playerHe_She = "She";
        playerHim_Her = "Her";
        playerHis_Hers = "Hers";

        cout << "+-----------------------------------------------------------+" << endl;
        cout << endl << "  We will now clear the console to open the game menu. Please enter any key" << endl << endl;
        cout << "+-----------------------------------------------------------+" << endl;
        WaitKey();
        system("CLS");

    }
    else {
        while (inputNum != 0 || inputNum != 1) {
            errorMessage();
            cin >> inputNum;

            if (inputNum == 0) {
                playerGender = "Boy";
                playerHe_She = "He";
                playerHim_Her = "Him";
                playerHis_Hers = "His";

                cout << "+-----------------------------------------------------------+" << endl;
                cout << endl << "  We will now clear the console to open the game menu. Please enter any key" << endl << endl;
                cout << "+-----------------------------------------------------------+" << endl;
                WaitKey();
                system("CLS");
                break;
            }
            else if (inputNum == 1) {
                playerGender = "Girl";
                playerHe_She = "She";
                playerHim_Her = "Her";
                playerHis_Hers = "Hers";

                cout << "+-----------------------------------------------------------+" << endl;
                cout << endl << "  We will now clear the console to open the game menu. Please enter any key" << endl << endl;
                cout << "+-----------------------------------------------------------+" << endl;
                WaitKey();
                inputNum = 0;
                system("CLS");
                break;
            }
        }
    }

};

int main()
{
    infoSection();
    mainMenu();
};


