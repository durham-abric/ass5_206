//Prevent multiple inclusions
#ifndef NODEH
#define NODEH 
struct NODE { \
    int data; \
    struct NODE *next; \
};
#endif

//Prevent multiple inclusions
#ifndef LISTH
#define LISTH
void newList(); \
int addNode(int value); \
void prettyPrint();
#endif