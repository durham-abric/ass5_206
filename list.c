#include <stdlib.h>
#include <stdio.h>
#include "node.h"
#define TRUE 1
#define FALSE 0

struct NODE *head;

void newList(){
 head = NULL;
}

int addNode(int value){
 struct NODE *temp = (struct NODE*) malloc(sizeof(struct NODE));
 if(temp==NULL) return -1; //an error has occured
 temp->data = value;
 temp->next = head;
 head = temp;
 if(head->data == temp->data)
    return TRUE;
 else 
    return FALSE;
}

void prettyPrint(){
 struct NODE *temp = head;
 while (temp != NULL) {
    printf( "%d -> ", temp->data);
    temp = temp->next;
 }
 if(head==NULL) 
    printf("No list to be printed!");
 else 
    printf("NULL\n");

}