#ifndef TXTIASRC_H
#define TXTIASRC_H
#include <iostream>
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
        void inputText(string text);
        void errorMessage();
        void settings();
        void quit();


    private:
        //Variables For The User
        string playerName;
        string playerGender;
        string playerHe_She;
        string playerHim_Her;
        string playerHis_Hers;
        int playerArmor;
        int playerHP = 100;
        int playerCash = 0;
        double playerLvl = 0;
        //Input
        int inputNum;
        ofstream newSave;
        ifstream oldSave;

};

#endif // TXTIASRC_H
