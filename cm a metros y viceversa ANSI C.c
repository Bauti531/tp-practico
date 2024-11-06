/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
// Código del alumno Iván Bautista Pereira
// Link de git personal: https://github.com/Bauti531/tp-practico
// Link del git grupal (lider: Gabriel Alan Quiroz): https://github.com/matecebado357/Trabajo-de-Laboratorio-de-Programacion
float metrosACentimetros(float metros) {
    return metros * 100;
}

float centimetrosAMetros(float centimetros) {
    return centimetros / 100;
}

int main() {
    float metros, centimetros;
    
    printf("Ingrese los metros a convertir: ");
    scanf("%f", &metros);
    printf("%.2f metros son %.2f centimetros.\n", metros, metrosACentimetros(metros));
    
    printf("Ingrese los centimetros a convertir: ");
    scanf("%f", &centimetros);
    printf("%.2f centimetros son %.2f metros.\n", centimetros, centimetrosAMetros(centimetros));
    
    return 0;
}
