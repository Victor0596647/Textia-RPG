#ifndef TXTIASRC_H
#define TXTIASRC_H
#include <iostream>
#include "txtiaGame.h"
#include <Windows.h>
#include <fstream>
#include <conio.h>
#include <string>
#include <stdlib.h>

using namespace std;

class txtiaSrc
{
    public:
        void startProg();
        void newOrOld();
        void oldPlayer();
        void infoSection();
        void mainMenu();
        void play();
        void changeOpt();
        void WaitKey();
        void inputNumCout();
        void errorMessage();
        void settings();
        void quit();

    private:
        //Variables For The User
        string protoText;
        /*
        string playerGender;
        string playerHe_She;
        string playerHim_Her;
        string playerHis_Hers;
        */
        const bool storyComplet = true;
        //Input
        /*string inputNum;*/
        ofstream newSave;
        ifstream oldSave;

};

#endif // TXTIASRC_H
