#include <stdio.h>
#include "stack.h"

// --- FUNCIONES DE GESTIÓN DE PILA ---


void stack_init(Stack *ps) {
    ps->top = -1;
    for(int i = 0; i < MAX; i++) ps->items[i] = 0;
}

void push(Stack *ps, int x) {
    if (ps->top < MAX - 1) {
        ps->top++;
        ps->items[ps->top] = x;
    } else {
        printf("\n[Error]: Stack Overflow (Pila llena).\n");
    }
}

int pop(Stack *ps) {
    if (ps->top == -1) {
        printf("\n[Error]: Stack Underflow (Pila vacia).\n");
        return 0; // si no hay elementos en la pila, dá error
    }
    int aux = ps->items[ps->top];
    ps->items[ps->top] = 0; // limpiamos la vista del show_stack
    ps->top--;
    return aux;
}

void show_stack(Stack s) {
    printf("\n======= STACK DUMP =======\n"); //volcado de pila (simil al dump en DOS)
    for (int i = MAX - 1; i >= 0; i--) {
        printf(" [%02d]: %-5d", i, s.items[i]);
        if (i == s.top) printf(" <--- SP"); //posición del stack pointer
        printf("\n");
    }
    printf("==========================\n");
}

// --- Operaciones ---

void sumar(Stack *ps) {
    if (ps->top < 1) {
        printf("\n[Error]: Se requieren al menos dos valores para sumar.\n");
    } else {
        int val1 = pop(ps);
        int val2 = pop(ps);
        int resultado = val1 + val2;
        push(ps, resultado);
        printf("\n[OK] Suma realizada.\n");
    }
}