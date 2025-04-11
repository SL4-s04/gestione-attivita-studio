#include <stdio.h>
#include <stdlib.h>
#include "item.h"
#include "info.h"

//ADT
typedef struct db {

item val;
char cvet[dim];
struct db *next;

} dab;


dab *addList(dab *db, int n);
void printList(dab *db);
dab *reg_activity(char c[]);
	

void printList(dab *db) {
	
	while(db != NULL) {
	 	 printf("%d\n", db->val);
	 	 db = db->next;
    }	
}

dab *addList(dab *db, int n) {
	
	dab *tail = NULL;
	dab *head = db;
	for(int i = 0; i < n; i++) {
		tail = (dab*)malloc(sizeof(dab));
		tail->val = i;
		tail->next = head;
		head = tail;
	}
	printList(head);
}

dab *reg_activity(char c[]) {
		scanf("%s", c);
}

	