#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <string>
#include <sstream>
#include <stdlib.h>
#include "txtiaSrc.h"
#include "inventory.h"

string inv[21];
extern string playerName;

void inventory::inventorySystem()
{
    int x = 0;
    //inventory list
    inv[0] = " ";
    inv[1] = " ";
    inv[2] = " ";
    inv[3] = " ";
    inv[4] = " ";
    inv[5] = " ";
    inv[6] = " ";
    inv[7] = " ";
    inv[8] = " ";
    inv[9] = " ";
    inv[10] = " ";
    inv[11] = " ";
    inv[12] = " ";
    inv[13] = " ";
    inv[14] = " ";
    inv[15] = " ";

    //Shows the inventory
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h,7);
    cout << "+---------------------------------------------------+ \n" << endl;
    cout << "        " << playerName << "'s Inventory list" << endl << endl;
    cout << "+-------------------------------------------------------------------+ \n" << endl;
    for(int i = 1; i < 16; x < 5){
        SetConsoleTextAttribute(h,10);
        cout << "   [" << i++ << "] " << flush;
        SetConsoleTextAttribute(h,9);
        cout << inv[x++] << endl;
        SetConsoleTextAttribute(h,10);
    }
    SetConsoleTextAttribute(h,7);
    cout << endl << "+-------------------------------------------------------------------+ \n" << endl;
    SetConsoleTextAttribute(h,11);
}

void inventory::addItemToInv(string item){
    //if statements to determine whether inventory slot is empty so it can store the current item
    if(inv[0] == " "){
        inv[0] = item;
    }else if(inv[1] == " "){
        inv[1] = item;
    }else if(inv[2] == " "){
        inv[2] = item;
    }else if(inv[3] == " "){
        inv[3] = item;
    }else if(inv[4] == " "){
        inv[4] = item;
    }else if(inv[5] == " "){
        inv[5] = item;
    }else if(inv[6] == " "){
        inv[6] = item;
    }else if(inv[7] == " "){
        inv[7] = item;
    }else if(inv[8] == " "){
        inv[8] = item;
    }else if(inv[9] == " "){
        inv[9] = item;
    }else if(inv[10] == " "){
        inv[10] = item;
    }else if(inv[11] == " "){
        inv[11] = item;
    }else if(inv[12] == " "){
        inv[12] = item;
    }else if(inv[13] == " "){
        inv[13] = item;
    }else if(inv[14] == " "){
        inv[14] = item;
    }else if(inv[15] == " "){
        inv[15] = item;
    }else {
        cout << "Your Inventory is Full of capacity. Please select to remove an item to store it in." << endl;
    }
}
