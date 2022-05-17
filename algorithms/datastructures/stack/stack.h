#idndef __STACK__
#define __STACK__

void initStack();

void push(void *object);

void *pop();

void *peek();

int isEmpty();

void isFull();

int size();

#endif