Instituto Politécnico Nacional. <br />
Escuela Superior de Cómputo (ESCOM). <br />
Ingeniería en Sistemas Computacionales. <br />
Academia de Ciencias de la Computación. <br />
Paradigmas de Programación. <br />
1er parcial. <br /> 
Ejercicio de Laboratorio 1. <br />
“2 Lenguajes, arreglos”. <br />
Profesor/a: 
Andrés García Floriano. <br />
Estudiante:
Christian Yael Peña Razo.
(2023630285). <br />
Grupo:
3CV1. <br />
Fecha:
05 de marzo de 2024. <br />
-------------------------
Reporte: Programa en Python y C para generar, imprimir, buscar y ordenar arreglos de números enteros aleatorios. <br />
Diseño y Desarrollo del programa: <br />
	Python: <br />
•	Generar un arreglo de números enteros aleatorios: <br />
	Se utiliza la función random.randint() para generar números enteros aleatorios en un rango específico. <br />
	Se crea una función generar_arreglo(tamano) que recibe el tamaño del arreglo como parámetro y devuelve el arreglo generado. <br />
•	Imprimir el contenido del arreglo: <br /> 
	Se crea una función imprimir_arreglo(arreglo) que recorre el arreglo e imprime cada elemento. <br />
•	Búsqueda secuencial: <br />
	Se crea una función buscar_secuencial(arreglo, valor) que recorre el arreglo y busca un valor específico, devolviendo su índice si lo encuentra o -1 si no. <br />
•	Ordenar el arreglo:<br />
	Se utiliza el método sorted() para ordenar el arreglo de forma ascendente.<br />
	Se crea una función ordenar_arreglo(arreglo) que devuelve el arreglo ordenado.<br />
•	Ejemplificar búsqueda y cálculo de tiempo:<br />
	Se genera un arreglo aleatorio, se imprime, se busca un valor en él, se ordena y se imprime nuevamente.<br />
	Se calcula el tiempo de ejecución de todo el proceso.<br />

	C:<br />
El programa en C sigue un diseño similar al de Python, utilizando funciones para generar, imprimir, buscar y ordenar arreglos de números enteros aleatorios.<br />
•	Se incluyen las bibliotecas stdio.h, stdlib.h y time.h.<br />
•	Se define el tamaño del arreglo como 1000.<br />
•	La función generar_arreglo reserva memoria para un arreglo de tamaño 1000 e inicializa cada elemento con un número aleatorio entre 1 y 1000.<br />
•	La función imprimir_arreglo imprime los elementos del arreglo.<br />
•	La función busqueda_secuencial busca un valor en el arreglo de forma secuencial y devuelve su índice o -1 si no lo encuentra.<br />
•	La función ordenar_arreglo ordena el arreglo utilizando el algoritmo de burbuja.<br />
•	Se genera un arreglo aleatorio, se imprime, se busca un valor en él, se ordena y se imprime nuevamente.<br />

Cómo ejecutar códigos fuente:<br />
Python: <br />
1. Abre el archivo "EL1_Python.py", por ejemplo en Visual Studio Code.<br />
2. Asegúrate de tener instalado Python en tu sistema.<br />
3. Ejecuta el programa haciendo clic en el botón de ejecución en la esquina superior<br />
C++:<br />
1. Abre el archivo "EL1_C++.cpp" en tu entorno de desarrollo C++ (por ejemplo, Dev C++).<br />
2. Compila el programa.<br />
3. Ejecuta el programa resultante.<br />
