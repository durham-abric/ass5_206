#include <stdio.h>
#include "list.h"

//Main Method
int main(){
    int newVal = 1;

    //Initialize empty list
    newList();

    //executes at least once
    while(newVal > 0){
        printf("Enter new node value (int):");
        scanf("%d", &newVal);
        //validate NEW input before adding
        if(newVal > 0) {
            addNode(newVal);
        }
    }

    //Display list to user
    printf("Completed adding values to the linked list!\n");
    printf("List value: ");
    prettyPrint();
}