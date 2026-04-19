#ifndef STACK_H
#define STACK_H

#define MAX 10

typedef struct {
    int top;
    int items[MAX];
} Stack;

// declaro las funciones
void stack_init(Stack *ps);
void push(Stack *ps, int x);
int pop(Stack *ps);
void show_stack(Stack s);
void sumar(Stack *ps);

#endif