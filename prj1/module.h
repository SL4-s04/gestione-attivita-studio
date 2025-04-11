#include <stdio.h>
#include <stdlib.h>
#include "item.h"

#define SIZE 10

//ADT
typedef struct Db {
    
int num;
char cvet[SIZE];
int vet[SIZE];

} db;

db week_report();
db reg_activity();

//recursion
item recursion(item n) {

    if(n == 0) return n;
    return n += recursion(n - 1); //recursion(2) = 3; recursion(3) = 6; recursion(4) = 10;

}


db reg_activity(char cvet[]) {

for (int i = 0; i < recursion(2); i++)
{
    scanf("%s", &cvet[i]);
}

}


db week_report(char cvet[]) {

    for (int i = 0; i < recursion(2); i++)
    {
        printf("%s", cvet[i]);
    }
}

