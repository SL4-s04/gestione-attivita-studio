#include <stdio.h>
#include <stdlib.h>
#include "item.h"
#include "item.c"
#include "module.h"

dab *addList(dab *db, int n) {
	
	dab *tail = NULL;
	dab *head = db;
	for(int i = 0; i < n; i++) {
		tail = (dab*)malloc(sizeof(dab));
		tail->val = i;
		tail->next = head;
		head = tail;
	}
}
	
void printList(dab *db) {
	
	while(db != NULL) {
	 	 printf("%d", db->val);
	 	 db = db->next;
    }	
}
	