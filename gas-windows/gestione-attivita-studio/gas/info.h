#include <stdio.h>
#include <string.h>

void infoText();


void info_text();
void print_banner();

void info_text() { //option text generator
	
    const char *k[3] = {"w", "s", "space"}; //commands text
    const char *a[3] = {"move up", "move down", "select"}; //functionality text
    
    for(int i = 0; i < 3; i++) { //generate strings with vectors xd
        printf("%s:%s\n", k[i], a[i]);
    }
    printf("\n"); //newline
    
}


void print_banner() { //print a banner
     int n = 6;
     printf("-------------------------------------\n");
	 for(int i = 0; i < n; i++) {
	 	if(i == 3) {
	 		printf("Gestione Attivita Studio v2.0.7");
		 }
		printf("#");
	 }	
	printf("\n");
	printf("-------------------------------------\n");
}
