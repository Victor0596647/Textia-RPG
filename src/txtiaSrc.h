#ifndef TXTIASRC_H
#define TXTIASRC_H
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <string>
#include <stdlib.h>

using namespace std;

class txtiaSrc
{
    public:
        txtiaSrc();
        int mainMenu();
        int play();
        int changeOpt();
        void WaitKey();
        void inputNumCout();
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
        double playerLvl = 0;
        //Input
        int inputNum;
};

#endif // TXTIASRC_H
