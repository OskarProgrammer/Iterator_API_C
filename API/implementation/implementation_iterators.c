#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "../iterators.h"

struct ACCOUNT *element;

struct ACCOUNT *getFirst(){
    return element;
}

struct ACCOUNT *getNext(struct ACCOUNT *iter)
{
    return iter->next;
}

struct ITERATOR *createIterator()
{
    struct ITERATOR *iter = malloc(sizeof(struct ITERATOR));
    iter->element = getFirst();
    return iter;
}

char *getNextName(struct ITERATOR *iter)
{
    if (iter->element != NULL){
        strcpy(iter->buffer, iter->element->name);
        iter->element = getNext(iter->element);
        return iter->buffer;
    }else{
        return NULL;
    }
}

void *destroyIterator(struct ITERATOR *iter)
{
    free(iter);
    iter = NULL;

    return iter;
}