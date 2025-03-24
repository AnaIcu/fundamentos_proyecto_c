#include <stdio.h>

void convertir(int opcion, float cantidad) {
    float resultado;
    
    switch(opcion) {
        case 1:
            // Convertir de Quetzales a otras monedas
            printf("Seleccione la moneda de destino:\n1. Dólares (USD)\n2. Euros (EUR)\n");
            int destino;
            scanf("%d", &destino);
            if (destino == 1) {
                // Supongamos que 1 GTQ = 0.13 USD
                resultado = cantidad * 0.13;
                printf("%.2f Quetzales son %.2f Dólares (USD)\n", cantidad, resultado);
            } else if (destino == 2) {
                // Supongamos que 1 GTQ = 0.11 EUR
                resultado = cantidad * 0.11;
                printf("%.2f Quetzales son %.2f Euros (EUR)\n", cantidad, resultado);
            } else {
                printf("Opción no válida.\n");
            }
            break;
        
        case 2:
            // Convertir de Dólares a otras monedas
            printf("Seleccione la moneda de destino:\n1. Quetzales (GTQ)\n2. Euros (EUR)\n");
            scanf("%d", &destino);
            if (destino == 1) {
                // Supongamos que 1 USD = 7.5 GTQ
                resultado = cantidad * 7.5;
                printf("%.2f Dólares son %.2f Quetzales (GTQ)\n", cantidad, resultado);
            } else if (destino == 2) {
                // Supongamos que 1 USD = 0.92 EUR
                resultado = cantidad * 0.92;
                printf("%.2f Dólares son %.2f Euros (EUR)\n", cantidad, resultado);
            } else {
                printf("Opción no válida.\n");
            }
            break;
        
        case 3:
            // Convertir de Euros a otras monedas
            printf("Seleccione la moneda de destino:\n1. Quetzales (GTQ)\n2. Dólares (USD)\n");
            scanf("%d", &destino);
            if (destino == 1) {
                // Supongamos que 1 EUR = 9.1 GTQ
                resultado = cantidad * 9.1;
                printf("%.2f Euros son %.2f Quetzales (GTQ)\n", cantidad, resultado);
            } else if (destino == 2) {
                // Supongamos que 1 EUR = 1.09 USD
                resultado = cantidad * 1.09;
                printf("%.2f Euros son %.2f Dólares (USD)\n", cantidad, resultado);
            } else {
                printf("Opción no válida.\n");
            }
            break;
        
        default:
            printf("Opción no válida.\n");
            break;
    }
}

int main() {
    int opcion;
    float cantidad;

    printf("Conversor de Monedas\n");
    printf("Seleccione la moneda de origen:\n");
    printf("1. Quetzales (GTQ)\n2. Dólares (USD)\n3. Euros (EUR)\n");
    scanf("%d", &opcion);

    printf("Ingrese la cantidad a convertir: ");
    scanf("%f", &cantidad);

    convertir(opcion, cantidad);

    return 0;
}
