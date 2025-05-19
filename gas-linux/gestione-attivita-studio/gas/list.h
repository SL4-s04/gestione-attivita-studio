#include <stdio.h>
#include <stdlib.h>

#define DIM 300

struct item {
   char *key;
   int intero;
   int intero2;
   struct item *next;	
};

typedef struct list {
	char *key;
	int *vet;
	int integer;
	struct list *next;
} li;

li *new_list(li *s); //create a new void list
li *add_tail(li *s, struct item n); //as keyboard, add elements in queue
void print_tail(li *s, const char *priority[3], struct item n); //print all elements
li *alter_elements(li *s, struct item n); //increase value on any element in queue
li *input_str(char course[][300], char desc[][300], struct item n); //take in input 3 diff strings
li *show_week(li *s, char c[][300], int day[], int month[], int year[], struct item n, int time); //print all progress done during the week
li *add_date(int day[], int month[], int year[], struct item n); //inserting 3 numbers that are: day, month, year by keyboard
li *show_details(li *s, char course[][300], char desc[][300], int day[], int month[], int year[], struct item n); //prints the course, description, date and num of priority
int sorting(li *s, struct item n); //bubblesorting establishing who has high, mid or low priority in desc order


li *new_list(li *s) { //create a new void list
	  //setups all value to 0 or NULL
	  for(int i = 0; i < 4; i++) {
	  	 s = (li*)malloc(sizeof(li)); //dynamic allocation
		 s->integer = 0; 
	  	 s->next = NULL;
	  }
	  return s;
}


li *add_tail(li *s, struct item n) { //as keyboard, add elements in queue
	
	   struct item i;
	   
	   li *new_s = (li*)malloc(sizeof(li)); //double dynamic allocation
	   new_s->vet = (int*)malloc(DIM * sizeof(int));
	   
	   new_s->next = s;
	   
	   printf("insert numbers(max:%d): ", n.intero);
	   for(i.intero = 0; i.intero < n.intero; i.intero++) {
	   scanf("%d", &new_s->vet[i.intero]);     
       } 
       
       return new_s;
}


void print_tail(li *s, const char *priority[3], struct item n) { //print all elements
	   struct item i;
	   while(s != NULL) { //scanning if s is different by NULL value
	   	for(i.intero = 0; i.intero < n.intero; i.intero++) {
	   		printf("%s: %d\n", priority[i.intero], s->vet[i.intero]);
		}
		s = s->next;
    }
}

li *alter_elements(li *s, struct item n) { //increase value on any element in queue
	   
	   struct item i;
	   for(i.intero = 0; i.intero < n.intero; i.intero++) {
	   	   
	   	   s->vet[i.intero] += 1; //increase the value of any element
	   	   printf("%d) %d hrs\n", i.intero, s->vet[i.intero]);
	   }
	   return s; //returning the modified values
}


li *input_str(char course[][300], char desc[][300], struct item n) { //take in input 2 diff strings(course and description)
	   
	   struct item i;
	   
	   for(i.intero = 0; i.intero < n.intero; i.intero++) {
	   	   printf("course name: ");
	   	   scanf("%s", course[i.intero]);
	   	   printf("add a description: ");
	   	   scanf("%s", desc[i.intero]);
	   }
	   return NULL; //debugging only purpose
}


li *show_week(li *s, char c[][300], int day[], int month[], int year[], struct item n, int time) { //print all progress done during the week
	
	   struct item i;
	   int endDay[4];
	   
	   for(i.intero = 0; i.intero < n.intero; i.intero++) {
	   	
	   	  int temp = day[i.intero];
	   	  endDay[i.intero] = temp + 7;
	   	  
	   	  printf("[%d/%d/%d] - [%d/%d/%d]:\n", day[i.intero], month[i.intero], year[i.intero], endDay[i.intero], month[i.intero], year[i.intero]);
	   	  
	   	  if(s->vet[i.intero] > time) { //if the elements is > time estimated, prints a msg "has finished task in retard"
	   	  	    printf("%s has finished task in retard(%dhrs)\n", c[i.intero], s->vet[i.intero]);
		  } else if(s->vet[i.intero] == time) { //if the elements is = time estimated, prints a msg "has finished task"
		  	    printf("%s has finished task(%dhrs)\n", c[i.intero], s->vet[i.intero]);
		  } else if(s->vet[i.intero] < time) { //if the elements is < time estimated, prints a msg "in running..."
		  	    printf("%s in running...\n", c[i.intero]);
		  }
	   }
	   return NULL; //debugging only purpose
}

li *add_date(int day[], int month[], int year[], struct item n) { //inserting 3 numbers that are: day, month, year by keyboard
	   
	   struct item i;
	    
	   for(i.intero = 0; i.intero < n.intero; i.intero++) {
	   	   printf("choose a date[d/m/y]: ");
	   	   
	   	    scanf("%d %d %d", &day[i.intero], &month[i.intero], &year[i.intero]);
	   	   
	   	   if(year[i.intero] < 1000) { //year value is below to 1000 then interrupt cycle
	   	   	   printf("the year mustnt have a value below than 1000\n");
	   	   	   break;
			  }	  
	   }	   
	return NULL; //debugging only purpose
}

li *show_details(li *s, char course[][300], char desc[][300], int day[], int month[], int year[], struct item n) { //prints the course, description, date and num of priority
	
	struct item i;

	  for(i.intero = 0; i.intero < n.intero; i.intero++) {
	  	  printf("%d) %s : %s [%d/%d/%d]\n", s->vet[i.intero], course[i.intero], desc[i.intero], day[i.intero], month[i.intero], year[i.intero]);
	  }
	return NULL; //debugging only purpose
}

/*bubble sorting is a method/technique for sorting a array unordered*/

int sorting(li *s, struct item n) { //bubblesorting establishing who has high, mid or low priority in desc order
	for(int i = 0; i < n.intero; i++) { //example: 10 - 0 || 10 - 1
		for(int j = 0; j < n.intero - i - 1; j++) {
			if(s->vet[j + 1] > s->vet[j]) {
				int temp = s->vet[j];
				s->vet[j] = s->vet[j + 1];
				s->vet[j + 1] = temp;
			}
	    }
    }	
    return 0; //debugging only purpose
}



