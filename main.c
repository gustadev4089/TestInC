#include <stdio.h>
#include <stdlib.h>
#include "functions.h"


int main(void){


    LinkedList *first_node = malloc(sizeof(LinkedList*));

    first_node = create_linked_list((short) 10);

    add_linked_list(first_node, (short) 1);
    add_linked_list(first_node, (short) 2);

    printf("Executado com Sucesso !!! \n");
 

    getchar();
    return 0;
}