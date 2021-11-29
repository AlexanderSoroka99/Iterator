#ifndef MENU_H
#define MENU_H

#include "iterator.h"

class Menu {
public:
       virtual Iterator *creatorIterator() = 0;
};

#endif // MENU_H
