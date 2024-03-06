Instituto Politécnico Nacional.
Escuela Superior de Cómputo (ESCOM).
Ingeniería en Sistemas Computacionales.
Academia de Ciencias de la Computación.
Paradigmas de Programación.
1er parcial.
Ejercicio de Laboratorio 1.
“2 Lenguajes, arreglos”.
Profesor/a:
Andrés García Floriano.
Estudiante:
Christian Yael Peña Razo.
(2023630285).
Grupo:
3CV1.
Fecha:
05 de marzo de 2024.
-------------------------
Reporte: Programa en Python y C para generar, imprimir, buscar y ordenar arreglos de números enteros aleatorios.
Diseño y Desarrollo del programa:
	Python:
•	Generar un arreglo de números enteros aleatorios:
	Se utiliza la función random.randint() para generar números enteros aleatorios en un rango específico.
	Se crea una función generar_arreglo(tamano) que recibe el tamaño del arreglo como parámetro y devuelve el arreglo generado.
•	Imprimir el contenido del arreglo:
	Se crea una función imprimir_arreglo(arreglo) que recorre el arreglo e imprime cada elemento.
•	Búsqueda secuencial:
	Se crea una función buscar_secuencial(arreglo, valor) que recorre el arreglo y busca un valor específico, devolviendo su índice si lo encuentra o -1 si no.
•	Ordenar el arreglo:
	Se utiliza el método sorted() para ordenar el arreglo de forma ascendente.
	Se crea una función ordenar_arreglo(arreglo) que devuelve el arreglo ordenado.
•	Ejemplificar búsqueda y cálculo de tiempo:
	Se genera un arreglo aleatorio, se imprime, se busca un valor en él, se ordena y se imprime nuevamente.
	Se calcula el tiempo de ejecución de todo el proceso.

	C:
El programa en C sigue un diseño similar al de Python, utilizando funciones para generar, imprimir, buscar y ordenar arreglos de números enteros aleatorios.
•	Se incluyen las bibliotecas stdio.h, stdlib.h y time.h.
•	Se define el tamaño del arreglo como 1000.
•	La función generar_arreglo reserva memoria para un arreglo de tamaño 1000 e inicializa cada elemento con un número aleatorio entre 1 y 1000.
•	La función imprimir_arreglo imprime los elementos del arreglo.
•	La función busqueda_secuencial busca un valor en el arreglo de forma secuencial y devuelve su índice o -1 si no lo encuentra.
•	La función ordenar_arreglo ordena el arreglo utilizando el algoritmo de burbuja.
•	Se genera un arreglo aleatorio, se imprime, se busca un valor en él, se ordena y se imprime nuevamente.

Cómo ejecutar códigos fuente:
Python:
1. Abre el archivo "EL1_Python.py", por ejemplo en Visual Studio Code.
2. Asegúrate de tener instalado Python en tu sistema.
3. Ejecuta el programa haciendo clic en el botón de ejecución en la esquina superior
C++:
1. Abre el archivo "EL1_C++.cpp" en tu entorno de desarrollo C++ (por ejemplo, Dev C++).
2. Compila el programa.
3. Ejecuta el programa resultante.
