#ifndef _FUNCTIONS_H
#define _FUNCIIONS_H


typedef struct NodeShort{

    short value;
    struct NodeShort *next;
    struct NodeShort *previous;

}NodeLinkedList;

typedef struct List{

    short size;
    struct NodeShort *begin, *end;

}LinkedList;


void imprimir(void);
void ponteiros(int* valor);

LinkedList* add_linked_list(LinkedList* list, short value);
LinkedList* create_linked_list(short value);

#endif