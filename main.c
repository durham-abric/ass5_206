#include <stdio.h>
#include "list.c"

int main(){
    int newVal;
    printf("Enter new node value (int):");
    scanf("%[^\n]d", newval);
    newList();
    while(newVal > 0){
        addNode(newVal);
        printf("Enter new node value (int):");
        scanf("%[^\n]d", newval);
    }

    printf("Completed adding values to the linked list!");
    printf("List values:\n");
    prettyPrint();
}