#include <stdio.h>
#include "list.h"

int main(){
    int *newVal;
    printf("Enter new node value (int):");
    scanf("%d", newVal);
    newList();

    while(*newVal > 0){
        addNode(*newVal);
        printf("Enter new node value (int):");
        scanf("%d", newVal);
    }

    printf("Completed adding values to the linked list!");
    printf("List values:\n");
    prettyPrint();
}