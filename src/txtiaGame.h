#ifndef TXTIAGAME_H
#define TXTIAGAME_H
#include <iostream>
#include <string>
#include "txtiaSrc.h"

using namespace std;

class txtiaGame
{
    public:
        void StartUpSave();
        void oldSave();
        void newSave();
        void Chapter_1_1();
    private:
        int playerArmor;
        int playerHP = 100;
        int playerCash = 0;
        double playerLvl = 0;
        string currentChapter;
        string currentPage;
        string protoText;
        const string chap1 = "Chap_1";
        const string chap2 = "Chap_2";
        const string chap3 = "Chap_3";
        const string chap4 = "Chap_4";
        const string chap5 = "Chap_5";
        const string chap6 = "Chap_6";
        const string chap7 = "Chap_7";
        const string chap8 = "Chap_8";
        const string chap9 = "Chap_9";
        const string chap10 = "Chap_10";
};

#endif // TXTIAGAME_H
