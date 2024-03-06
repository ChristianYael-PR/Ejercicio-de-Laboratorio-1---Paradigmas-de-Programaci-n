import random
import time

def generar_arreglo(tamano):
    return [random.randint(1, 1000) for _ in range(tamano)]

def imprimir_arreglo(arreglo):
    print(arreglo)

def busqueda_secuencial(arreglo, valor):
    for i in range(len(arreglo)):
        if arreglo[i] == valor:
            return i
    return -1

def ordenar_arreglo(arreglo):
    return sorted(arreglo)

tamano_arreglo = 1000
arreglo = generar_arreglo(tamano_arreglo)

inicio = time.time()
print("Arreglo generado:")
imprimir_arreglo(arreglo)

busqueda_valor = arreglo[0]  # Buscar el primer valor del arreglo
indice = busqueda_secuencial(arreglo, busqueda_valor)
if indice != -1:
    print(f"El valor {busqueda_valor} se encuentra en el índice {indice}.")
else:
    print(f"El valor {busqueda_valor} no se encuentra en el arreglo.")

arreglo_ordenado = ordenar_arreglo(arreglo)
print("Arreglo ordenado:")
imprimir_arreglo(arreglo_ordenado)

fin = time.time()
tiempo_ejecucion = fin - inicio
print(f"Tiempo de ejecución: {tiempo_ejecucion} segundos.")
