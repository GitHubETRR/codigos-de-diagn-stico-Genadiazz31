#include <stdio.h>
#define MAX_CHAR 50

char nombretorneo[MAX_CHAR];
char persona[8][MAX_CHAR];

void ingresarnombre(void);
void partido(char persona[8][MAX_CHAR]);

int main()
{
    printf("Escriba el nombre del torneo: ");
    scanf("%s", nombretorneo);
    
    ingresarnombre();
    partido(persona);
    
    return 0;
}

void ingresarnombre(void){
    int x = 1;
    while(x < 9){
        printf("Ingrese el nombre del jugador %d: ", x);
        scanf("%s", persona[x]);
        x++;
    }    
}

void partido(char persona[8][MAX_CHAR]){
    int y = 1, g = 1;
    int ganador[4];
    int finalista[2]; 
    int campeon;
    
    while(g < 5){
        printf("Siguiente partido %d - %s vs %d - %s\n - Escriba el numero del ganador: ", y, persona[y], y+1, persona[y+1]);
        scanf("%d", &ganador[g]);
        y = y + 2;
        g++;
    }
    printf("\nSiguiente partido %d - %s vs %d - %s\n - Escriba el numero del ganador: ", ganador[1], persona[ganador[1]], ganador[2], persona[ganador[2]]);
    scanf("%d", &finalista[1]);
    printf("\nSiguiente partido %d - %s vs %d - %s\n - Escriba el numero del ganador: ", ganador[3], persona[ganador[3]], ganador[4], persona[ganador[4]]);
    scanf("%d", &finalista[2]);
    
    printf("\nFinal %d - %s vs %d - %s\n - Escriba el numero del ganador: ", finalista[1], persona[finalista[1]], finalista[2], persona[finalista[2]]);
    scanf("%d", &campeon);
    printf("\nGANADOR DEL TORNEO %s - %s", nombretorneo, persona[campeon]);
}