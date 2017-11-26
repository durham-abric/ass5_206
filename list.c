#include <stdlib.h>
#include <stdio.h>
#include "node.h"
#define TRUE 1
#define FALSE 0

//global variable pointing to head of list
struct NODE *head;

//initialize list
void newList(){
 head = NULL;
}

//add new node to list at the head position
int addNode(int value){
 //Allocate memory for the temporary node
 struct NODE *temp = (struct NODE*) malloc(sizeof(struct NODE));

 //No memory allocated
 if(temp==NULL) return -1; //an error has occured

//set pointers to expand list
 temp->data = value;
 temp->next = head;
//reset head value to new node
 head = temp;

 //Validation (double check if head value is correct)
 if(head->data == temp->data)
    return TRUE;
 else 
    return FALSE;
}

void prettyPrint(){
//New pointer to traverse list, leave head intact
 struct NODE *temp = head;
//While in a valid node (containing data)
 while (temp != NULL) {
    //print value of node
    printf( "%d -> ", temp->data);
    //increment node in list
    temp = temp->next;
 }
//occurs when list is empty
 if(head==NULL) 
    printf("No list to be printed!\n");
//occurs when list isn/t empty (last node always points to null)
 else 
    printf("NULL\n");

}