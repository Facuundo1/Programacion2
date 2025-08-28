#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define max 6
#define maxDias 30

void cargaDatos (float asistencias[max], char nombres[max][maxDias]) {
    for (int i = 0; i < max; i++) {
        printf ("ingrese nombre del estudiante\n");
        scanf ("%30s", nombres[i]);
        for (int j = 0; j < maxDias; j++) {
            printf ("ingrese 1 si se presento o 0 si falto a la clase\n");
            scanf ("%f", &asistencias[j]);
            if (asistencias[j] != 1 && asistencias[j] != 0) {
                printf ("ERROR: ingrese 1 si fue a la clase o 0 si falto\n");
            }
        }
    }
}

void mostrarTotal (float asistencias[max][maxDias], char nombres[max][maxDias]) {
    int total;
    for (int i = 0; i < max; i++) {
        for (int j = 0; j < maxDias; j++) {
            total += asistencias[i][j];
        }
        printf ("el total de cada alumno es-\n", nombres[i], total);
        total = 0;
    }
}

void mostrarMas (float asistencias[max][maxDias], char nombres[max][maxDias]) {
    int mayor = 0;
    for (int i = 0; i < max; i++) {
        for (int j = 0; j < maxDias; j++) {
            if (asistencias[i][j] < mayor) {
                printf ("el estudiante que mas asistio es:\n", nombres);
            }
        }
    }
}