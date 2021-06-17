#ifndef INVENTORY_H
#define INVENTORY_H
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <string>
#include "txtiaSrc.h"
#include <stdlib.h>

using namespace std;


class inventory
{
    private:

    public:
        void inventorySystem();
        void addItemToInv(string item);

};

#endif // INVENTORY_H
