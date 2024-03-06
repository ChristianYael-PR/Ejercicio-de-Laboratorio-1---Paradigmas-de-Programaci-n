#include <iostream>
#include <cstdlib>
#include <ctime>

#define TAMANO_ARREGLO 1000

int* generar_arreglo() {
    int* arreglo = new int[TAMANO_ARREGLO];
    for (int i = 0; i < TAMANO_ARREGLO; i++) {
        arreglo[i] = rand() % 1000 + 1; // N�meros entre 1 y 1000
    }
    return arreglo;
}

void imprimir_arreglo(int* arreglo) {
    for (int i = 0; i < TAMANO_ARREGLO; i++) {
        std::cout << arreglo[i] << " ";
    }
    std::cout << std::endl;
}

int busqueda_secuencial(int* arreglo, int valor) {
    for (int i = 0; i < TAMANO_ARREGLO; i++) {
        if (arreglo[i] == valor) {
            return i; // Se encontr� el valor, �ndice
        }
    }
    return -1; // No se encontr� el valor
}

void ordenar_arreglo(int* arreglo) {
    for (int i = 0; i < TAMANO_ARREGLO - 1; i++) {
        for (int j = 0; j < TAMANO_ARREGLO - i - 1; j++) {
            if (arreglo[j] > arreglo[j + 1]) {
                // Intercambiar elementos
                int temp = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = temp;
            }
        }
    }
}

int main() {
    srand(time(NULL)); // Inicializaci�n para n�meros aleatorios
    clock_t inicio, fin;
    double tiempo_ejecucion;

    inicio = clock(); // Inicio de medici�n de tiempo

    // Generar arreglo aleatorio
    int* arreglo = generar_arreglo();

    std::cout << "Arreglo generado:" << std::endl;
    imprimir_arreglo(arreglo);

    // Buscar el primer valor del arreglo
    int busqueda_valor = arreglo[0];
    int indice = busqueda_secuencial(arreglo, busqueda_valor);
    if (indice != -1) {
        std::cout << "El valor " << busqueda_valor << " se encuentra en el �ndice " << indice << "." << std::endl;
    } else {
        std::cout << "El valor " << busqueda_valor << " no se encuentra en el arreglo." << std::endl;
    }

    // Ordenar el arreglo
    ordenar_arreglo(arreglo);
    std::cout << "Arreglo ordenado:" << std::endl;
    imprimir_arreglo(arreglo);

    fin = clock(); // Finalizar medici�n de tiempo
    tiempo_ejecucion = ((double)(fin - inicio)) / CLOCKS_PER_SEC; // Calcular tiempo de ejecuci�n
    std::cout << "Tiempo de ejecuci�n: " << tiempo_ejecucion << " segundos." << std::endl;

    // Liberar memoria
    delete[] arreglo;

    return 0;
}

