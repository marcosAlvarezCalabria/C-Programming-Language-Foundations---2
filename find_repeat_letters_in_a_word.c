#include <stdio.h>
int main(void)
{

    char word[51]; // Variable para almacenar la palabra
    int i = 0; // Variable para el índice de la palabra
    int lenght = 0; // Variable para almacenar la longitud de la palabra
    char swap; // Variable para intercambiar letras durante el ordenamiento
    int counter = 0; // Contador de las letras que se repiten
    int j = 0; // Variable para el segundo índice en el ordenamiento
    int count[256] = { 0 }; // Array para contar la frecuencia de cada carácter en la palabra

    scanf("%s", word); // Pedimos la palabra al usuario

    /////////////////////* Hallamos la longitud de la palabra ************////////////////
    while (word[i] != '\0') {
        lenght++;
        i++;
    }

    //* Ordenamos la palabra de menor a mayor (ordenamiento burbuja) **********/     
    while (j < lenght) {
        i = 0;
        while (i < lenght - 1) {
            if (word[i] > word[i + 1]) {
                swap = word[i];
                word[i] = word[i + 1];
                word[i + 1] = swap;
            }
            i++;
        }
        j++;
    }

    ////****** Inicializamos los índices a 0 ***************/
    j = 0;
    i = 0;

    //************ Contamos cuántas letras se repiten */
    while (word[i] != '\0') {
        count[(int)word[i]]++; // Recorremos la palabra y contamos la frecuencia de cada letra
        i++;
    }

    while (j < 256) {
        if (count[j] > 1) { // Si la letra aparece más de una vez, incrementamos el contador
            counter++;
        }
        j++;
    }

    printf("%d\n", counter); // Imprimimos el número de letras que se repiten

    return 0;
}
