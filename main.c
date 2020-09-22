#include <stdio.h>

void Caracteres(int n, char arreglo[]);

void CapturarNumeros() {
    int n[5];
    int s=0, p;
    printf("\nCapturar Numeros\n");
    for (size_t i = 1; i < 6; i++)
    {
        printf("ingresa el numero %i: ",i);
        scanf("%i", &n[i]);

        s = s+n[i];
        p = s/5; 
    }
    printf("\nLa suma total es: %i\n", s);
    printf("El promedio es: %i\n\n", p);
    
}


int main(){

    char arreglo[] = "AEIOU";
    int n;
    char op;
    do
    {
       
        printf("...Menu principal...\n");
        printf("1.- Capturar numeros\n");
        printf("2.- Mostrar caracteres\n");
        printf("3.- Guardar personajes\n");
        printf("4.- Salir\n");
        printf("Ingresa una opcion \n");
        scanf("%c", &op);

        switch (op)
        {
        case '1':
            CapturarNumeros();
            break;
        case '2':
            Caracteres(n, arreglo);
            break;

        case '3':

            break;
        
        default:
            break;
        }

        fflush(stdin);
    } while (op != '4');

    return 0;

}

void Caracteres(int n, char arreglo[]) {
    printf("\nMostrar caracteres\n");
    printf("Ingresa cuantas veces quieres que se repita el arreglo: ");
    scanf("%i", &n);
    printf("\n");
    for (size_t i = 1; i <= n; i++)
    {
        printf("%i.- %s", i, arreglo);
        printf("\n");
    }
    
}