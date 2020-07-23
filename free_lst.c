#include "push_swap.h"

void            free_lst(t_lst **stack){
    t_lst       *tmp;
    t_lst       **node;

    node = stack;
    if (*stack == NULL)
        return ;
    while (*node != NULL){
        tmp = (*node)->next;
        free(*node);
        (*node) = tmp;
    }
}