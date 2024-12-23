#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

void imprimir(void){
    printf("Olá mundo !!!");
}

void ponteiros(int *valor){
    printf("Functions ponteiros address --> %p \n",valor);
}

LinkedList* create_linked_list(short value){
    NodeLinkedList *new = malloc(sizeof(NodeLinkedList*));
    new->value = value;
    new->previous = NULL;
    new->next = NULL;

    LinkedList *list = malloc(sizeof(LinkedList*));
    list->begin = new;
    list->end = new;
    list->size = (short) 1;

    return list;
}


LinkedList* add_linked_list(LinkedList *list, short value){
    NodeLinkedList *aux = malloc(sizeof(NodeLinkedList*));
    
    printf("Address Memorie --> %p \n", aux);

    aux->value = value;
    aux->next = NULL;
    list->end->next = aux;
    list->end = aux;

    return list;
}

