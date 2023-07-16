#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "../API/iterators.h"

int main(void){

    char *element;
    struct ITERATOR *iter = createIterator();
    assert(iter != NULL && "Iter wasnt created");

    while (element = getNextName(iter)){
        ;
    }

    destroyIterator(iter);
    assert(iter == NULL && "Iter wasnt destroyed");

    return EXIT_SUCCESS;
}