#include <iostream>
#include <string>
#include "txtiaGame.h"
#include "txtiaSrc.h"

using namespace std;

txtiaSrc test;

ofstream newGSave;
ifstream oldGSave;

extern string inputNum;

void txtiaGame::StartUpSave()
{
    cout << "+-------------------------------+" << endl;
    cout << endl;
    cout << "   Are you new to the story?" << endl << endl;
    cout << "   [1] Yes [2] No" << endl;
    cout << endl;
    cout << "+-------------------------------+" << endl;

    do {
        test.inputNumCout();
        if (inputNum == "1") {
            system("CLS");
            newSave();
            break;
        } else if (inputNum == "2") {
            system("CLS");
            oldSave();
            break;
        } else {
            test.errorMessage();
        }
    } while(true);
}

void txtiaGame::newSave()
{
    newGSave.open("txtiaGameSave.dat", ofstream::out | ofstream::trunc);
    newGSave << chap1 << " :: " << "1" << endl;
    newGSave.close();
    Chapter_1_1();
}

void txtiaGame::oldSave()
{
    oldGSave.open("txtiaGameSave.dat");
    if(!oldGSave) {
        cout << "+---------------------------------------------------------------------+ \n" << endl;
        cout << "   Error with opening file. The file probably does not exist. \n" << endl;
        cout << "+---------------------------------------------------------------------+" << endl;
        test.WaitKey();
        system("CLS");
        test.mainMenu();
    } else if (oldGSave) {
        while( oldGSave >> currentChapter >> protoText >> currentPage) {
            if(currentChapter == chap1){
                if(currentPage == "1"){
                    Chapter_1_1();
                } else{
                    cout << "+------------------------------------------------------------------------------------------------------------+" << endl;
                    cout << endl << "  File is corrupted! Would you like to start from the beginning of the current saved chapter? \n" << endl;
                    cout << "   [1] Yes " << endl;
                    cout << "   [2] No  " << endl << endl;
                    cout << "+------------------------------------------------------------------------------------------------------------+" << endl;

                    do {
                        test.inputNumCout();

                        if (inputNum == "1") {
                            system("CLS");
                            Chapter_1_1();
                            break;
                        } else if (inputNum == "2") {
                            system("CLS");
                            test.mainMenu();
                            break;
                        } else {
                            test.errorMessage();
                        }
                    } while(true);
                }
            }else{
                cout << "+-------------------------------------------------------------+" << endl;
                cout << endl << "  File is corrupted! Would you like to create a new one? \n" << endl;
                cout << "   [1] Yes  [2] No " << endl;
                cout << endl;
                cout << "+-------------------------------------------------------------+" << endl;

                do {
                    test.inputNumCout();

                    if (inputNum == "1") {
                        system("CLS");
                        newSave();
                        break;
                    } else if (inputNum == "2") {
                        system("CLS");
                        test.mainMenu();
                        break;
                    } else {
                        test.errorMessage();
                    }
                } while(true);
            }
        }
    }
    oldGSave.close();
}

void txtiaGame::Chapter_1_1()
{
    cout << "You wake up and see yourself wound on shore." << endl;
}
