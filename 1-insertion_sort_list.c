#include "sort.h"


void insertion_sort_list(listint_t **list)
{
    listint_t *tmp = NULL, *aux = NULL;

    if (list == NULL || (*list)->next == NULL)
    {
        return;
    }
    aux = *list;
    tmp = malloc(sizeof(listint_t));
    if (tmp == NULL)
    {
        return;
    }
    while (aux->next != NULL)
    {
        if (aux->n > aux->next->n)
        {
            tmp->next = aux->next;
            tmp->prev = aux->prev;
            aux->next = aux->next->next;
            aux->prev = tmp->next;
            tmp->next->next = aux;
            tmp->next->prev = tmp->prev;
            *list = tmp->next;
            printf("search value %d\n", tmp->next->n);
            print_list(*list);

        }
    aux = aux->next;

    }

   printf("this is first node %d\n", aux->prev->n);
}
