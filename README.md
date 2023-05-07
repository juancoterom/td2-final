			Trabajo Práctico Final - Técnicas Digitales II
			

				====== EJERCICIOS ======

Los siguientes ejercicios a desarrollar en los prácticos de laboratorio constituyen la 
columna vertebral del proyecto:

1. Escribir una estructura switch-case en código ensamblador del ARM. Este ejercicio será 
presentado como una aplicación mixta formada por:

	* Una función escrita en ensamblador que recibirá 3 parámetros, dos operadores y 
	un tercer parámetro con la operación a aplicar a estos, las operaciones pueden ser 
	aritméticas, lógicas, etc. con un mínimo de 4 posibles.

	* Una función main() escrita en C que hará uso de esta función, al menos con 4 
	ejemplos que utilicen las 4 operaciones mínimas de la función.

2. Escribir en código ensablador del ARM la siguiente función escrita en C.

   	void retardo (unsigned long int a)
   	{
   		while (a) a--;
   	}

Para este ejercicio, se implementará una aplicación mixta, con un main() escrito 
en C que imprima en pantalla progresivamente un mensaje, entre cada mensaje se 
realizará un retardo utilizando la función escrita en ensablador.

3. Implementar el control de acceso al sistema mediante password. Se debe mostrar un mensaje: 
"Ingrese su password de 5 dígitos:", mostrar por cada dígito entrado un * y comparar con una 
clave ya cargada en memoria. Si la clave es correcta imprimir un mensaje de "Bienvenido al 
Sistema" y si no, se imprimir un mensaje de "Password no válida". Después de 3 intentos 
fallidos el programa aborta.

4. Se dispone de la placa Raspberry 3 modelo B con puertos de salida y de entrada (GPIO). 
Se desea implementar un bucle que finalice con una tecla apretada y que saque por las 
salidas lo que está presente en las entradas.

5. Con la misma placa del ejercicio anterior implementar una secuencia de luces denominada 
"Auto fantástico" y finalizar con una tecla apretada. (Usar algoritmo).

6. Implementar mediante el uso de una tabla de datos en lugar de algoritmo la secuencia de 
luces denominada "La carrera".

7. Con un hardware adicional a la placa Raspberry conectar un conversor analógico/digital 
con 8 canales analógicos de manera que se puedan leer cada uno de ellos mediante una rutina 
que deberá escribir.

8. Comunicar la placa Raspberry 3 con una PC a través de RS-232. La comunicación implica 
programar los parámetros de comunicación: baud rate, bits de datos, bit de paridad y bits 
de parada. Implementar rutinas de transmisión y de recepción usando las señales de handshake: 
DTR, RTS, DSR y CTS.

				====== TRABAJO FINAL ======

Este proyecto consiste en integrar dichos ejercicios de la siguiente manera:

1. Realice un programa a fin de que el usuario pueda seleccionar desde un menú, una de 
ocho secuencias de luces posibles. Cuatro de ellas serán comunes para todos los proyectos 
y son: "El auto fantástico", "El choque", "La apilada" y "La carrera". Las otras cuatros 
serán propias de cada grupo y se deberán implementar dos de ellas con algoritmo y las dos 
restantes por medio de la técnica de tablas de datos.

2. Implemente el control de acceso a este menú mediante password.

3. Cada vez que el usuario seleccione una secuencia el programa deberá cambiar la pantalla 
para indicar cual secuencia está ejecutándose y como hacer para salir de la misma. Al optar 
por abandonar la actual, el programa deberá regresar al menú principal inmediatamente sin 
completar la secuencia que se está desarrollando y apagando todas las luces.

4. Permita la posibilidad de controlar la velocidad de cada secuencia. Presionando la flecha 
hacia arriba se incrementará la velocidad y presionando la flecha hacia abajo se reducirá. 
Introduzca el sensado de las teclas oprimidas en el lugar apropiado de su programa a fin de 
percibir la reacción del sistema en forma inmediata, independiente de la velocidad actual. 
La velocidad ajustada en cada secuencia deberá conservarse entre llamadas a diferentes 
secuencias.

5. El valor inicial correspondiente a la velocidad de las secuencias deberá ingresarse 
mediante la lectura del estado de los potenciómetros que están conectados a las entradas 
analógicas del conversor A/D.

6. Generar una opción en el programa que permita establecer dos modos de trabajo: local y 
remoto. En modo local las secuencias de luces se ejecutarán en los leds que se encuentran 
en el hardware adicionado a la placa Raspberry donde se ejecuta el programa. Existen dos 
opciones para el modo remoto dependiendo de la disponibilidad de hardware de cada grupo, 
hacer una de las dos opciones siguientes:

	* En modo remoto las secuencias se ejecutarán sobre el hardware adicional colocado 
	en otra Raspberry y conectada a la que ejecuta el programa mediante un cable serie 
	RS-232. Se podrá usar el mismo programa para implementar esta opción en las dos 
	Raspberry o realizar uno principal y otro secundario.

	* En modo remoto la selección desde el menú de la secuencia de luces a ejecutarse y 
	control de velocidad se harán desde una PC que se encontrará conectada mediante un 
	cable serie RS-232 a la Raspberry.

7. Como opción genere una sección destinada a establecer las velocidades iniciales de las 
secuencias realizando el ajuste de los potenciómetros.

				====== SECUENCIAS DE LUCES ======

La técnica de tabla de datos consiste en simplemente un bucle de programa que saca por los 
puertos de salida el contenido de una tabla preestablecida con valores que reproducen la 
secuencia deseada.

1. Auto Fantástico: una luz que se desplaza de izquierda a derecha y de derecha a izquierda.

2. El Choque: una luz desde la izquierda y otra desde la derecha comienzan su recorrido en 
forma opuesta y por lo tanto al medio se cruzan y continúan hasta los extremos opuestos. 
En la visualización de la misma parece que las luces chocan y se repelen.

3. La Apilada: Una luz arranca de izquierda a derecha y cuando alcanza el extremo derecho, 
parpadea y se queda encendida en la última posición; a partir de allí una nueva luz comienza 
su recorrido desde la izquierda y se desplaza hacia la derecha hasta llegar a la posición 
anterior a la que está fija, parpadea y también se queda quieta como la anterior. Ahora son 
dos las luces quietas y se repite el mismo proceso para una nueva luz arrancando por la 
izquierda y llegando a la posición anterior a las dos quietas. La secuencia termina cuando 
los ocho lugares han sido ocupados de la forma descripta.

4. La Carrera: Una luz arranca por la izquierda a una determinada velocidad, y cuando va por 
la mitad del recorrido arranca una nueva luz por la izquierda pero al doble de velocidad lo 
que produce que arriben al extremo derecho al mismo tiempo.