#include <conio.h>
#include <stdio.h>
#include <math.h>

int main()
{
    float d,v,t;
    
    printf("Calcular la distancia de un vehículo a velocidad constante en un tiempo t.");
    printf("\n\n Ingrese el valor de la velocidad (km/h): "); scanf("%f",&v);
    printf("\n Ingrese el valor del tiempo (h): "); scanf("%f",&t);
    
    if (v!=0 && t!=0){
    d=v*t;
    printf("\n\n La distancia es: %.2f",d);
    } else
         printf("\n INGRESE VALORES VALIDOS");
    
    getch();
}   
    
