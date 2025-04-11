#include <stdio.h>
#include <conio.h> //getch()
#include "item.h"
#include "info.h"

int height = 8, width = 1;

struct {
    int x;
    int y;
} axis = {0,0};

void user_gui();
void master_gui();
void user_input(char userinput);

void user_gui() {

system("cls");

infoText('w', 's');

int i,j;
    
for (j = 0; j < height; j++) {
    for (i = 0; i < width; i++) {
    if(i == axis.x && j == axis.y) {
        printf("user:~$ ");
    } else {
        printf(". ");  
    }
  }
  printf("\n");
 }
}

//user input
void user_input(char userinput) {
	
    userinput = getch();
    
    switch (userinput) {
    case 'w': if(axis.y > 0) { axis.y--; } break;
    case 's': if(axis.y < height - 1) { axis.y++; } break;
  
    default:
    	printf("nope");
        break;
    }

}