#include <stdio.h>
#include <string.h>
#include "list.h"

int main(void)
{

    //setup
	li *s = NULL;

	struct item n; 
    const char *priority[3] = {"high", "mid", "low"}; //poor method for diff a high mid or low value
	int time = 0;
	int day[DIM], month[DIM], year[DIM];
	char c[200][DIM], desc[200][DIM];
	
	new_list(s); //create a newList setupping all par to 0 or NULL
	
	printf("insert a number: ");
    scanf("%d", &n.intero); //pre-condition
    //the begin value haves impact on all functions
    
    input_str(c, desc, n); //for taking in input strings
    
    s = add_tail(s, n); //for taking in input numbers/elements
    printf("---------------\n");
    
    sorting(s, n); //sorting of the elements
    print_tail(s, priority, n);
    
    printf("---------------\n");
    printf("WARNING:u cant adding a year value below to 1000!\n");
    add_date(day, month, year, n); //take in input 3 values
	
	show_details(s, c, desc, day, month, year, n); //output that prints all details
	printf("---------------\n");
	
	printf("tempo da stimare: ");
	scanf("%d", &time);
	
	s = alter_elements(s, n); //modify the elements value
	printf("---------------\n");
	
	show_week(s, c, day, month, year, n, time); //prints in output the weekly reports
	  
	printf("---------------\n");
	system("echo press any key to back to the main menu && pause >nul");
	
	while (s != NULL) { //dealloc all after worked with allocations
        li *temp = s;
        free(s->vet);
        s = s->next;
        free(temp);
    }
    
    return 0;
}    

