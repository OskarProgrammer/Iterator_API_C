#ifndef ITERATORS
#define ITERATORS

#define MAX_SIZE_NAME 24

struct ACCOUNT
{
    char name[MAX_SIZE_NAME];
    struct ACCOUNT *next;
};

struct ITERATOR
{
    char buffer[MAX_SIZE_NAME];
    struct ACCOUNT *element;
};

//get first element
struct ACCOUNT *getFirst();

//get next element
struct ACCOUNT *getNext(struct ACCOUNT *iter);

// create new iterator
struct ITERATOR *createIterator();

//go to next index
char *getNextName(struct ITERATOR *iter);

//remove iterator
void *destroyIterator(struct ITERATOR *iter);

#endif