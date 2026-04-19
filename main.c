#include <stdio.h>
#include <stdlib.h> // Para system("clear")
#include "stack.h"

// --- INTERFAZ DE USUARIO (WHILE LOOP) ---

int main() {
    Stack pila;
    pila.top = -1; //inicializar la pila en 0
    for(int i = 0; i < MAX; i++) pila.items[i] = 0;

    int opcion = 0;
    int valor;

    while (opcion != 4) {
        // system("clear")
        show_stack(pila);
        printf("\n1. PUSH (Ingresar numero)");
        printf("\n2. POP  (Sacar numero)");
        printf("\n3. SUM  (Sumar numeros)");
        printf("\n4. EXIT");
        printf("\n\nSeleccione una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                printf("Numero a ingresar: ");
                scanf("%d", &valor);
                push(&pila, valor);
                break;
            case 2:
                valor = pop(&pila);
                break;
            case 3:
                sumar(&pila);
                break;
            case 4:
                printf("Saliendo del sistema...\n");
                break;
            default:
                printf("Opcion invalida.\n");
        }
    }

    return 0;
}