#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main(){
    int newVal;
    newList();

    while(newVal > 0){
        printf("Enter new node value (int):");
        scanf("%d", &newVal);
        if(newVal > 0) {
            addNode(newVal);
        }
    }

    printf("Completed adding values to the linked list!\n");
    printf("List value: ");
    prettyPrint();
}