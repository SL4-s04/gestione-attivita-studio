#include <stdio.h>
#include <string.h>
#include "item.h"
#include "info.h"

char infoText(char k1, char k2) {

char infotext[dim] = {k1, k2};

for (item i = 0; i < 6 - 2; i++)
{
    printf("%c: %s\n", infotext[i], "move up");
}


}