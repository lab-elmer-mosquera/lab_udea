## Practica 2 Informatica 2

Facultad de Ingenierıa

Universidad de Antioquia

## Introduccion

Esta practica tiene como proposito fortalecer la comprension de conceptos fundamentales del lenguaje C/C++, incluyendo el manejo de punteros, arreglos, funciones y representacion en memoria. Ademas, se introduce el uso basico de Arduino y la plataforma Tinkercad como herramientas de simulacion y programacion para proyectos electronicos sencillos. Las actividades propuestas incluyen ejercicios introductorios, problemas de aplicacion y desafıos que requieren un pensamiento l ogico mas avanzado.

## 1 Objetivos

- Familiarizarse con la notacion binaria y hexadecimal para representar numeros enteros.

- Introducir el concepto de direccion de memoria, arreglos y punteros en C/C++.

- Definir e implementar funciones propias.

- Crear y utilizar librerıas.

- Introducir el uso de Arduino y Tinkercad.


## 3 Problemas

Los siguientes problemas estan pensados para ser desarrollados utilizando arreglos y su relacion directa con punteros. Varios de los problemas deben ser realizados en Tinkercad; por favor, lea atentamente cada enunciado.

1. Desarrolle un programa que permita determinar la mınima combinacion de billetes y monedas para una cantidad de dinero determinada. Los billetes en circulacion son de \$50.000, \$20.000, \$10.000, \$5.000, \$2.000 y \$1.000, y las monedas son de \$500, \$200, \$100 y \$50. Si por medio de los billetes y monedas disponibles no se puede lograr la cantidad deseada, el sistema debera decir lo que resta para lograrla. Use arreglos y ciclos para realizar el programa.

Por ejemplo, si se ingresa 47810, el programa debe imprimir:

50000:0

20000:2

10000:0

5000:1

2000:1

1000:0

500:1

200:1

100:1

50:0

Faltante: 10

Realice una version en Arduino de este programa (en un Arduino fısico o Tinkercad); la cantidad de dinero debe ser ingresada con la ayuda del monitor serial.

2. Elabore un programa que genere un arreglo de 200 letras mayusculas aleatorias, lo muestre en consola y luego imprima cuantas veces se repite cada letra en el arreglo.

Por ejemplo, frente al arreglo de 10 elementos: ABARSECAAB, el programa debe imprimir:

## ABARSECAAB

- A: 4

- B: 2

- C: 1

- E: 1

- S: 1


*(a) Montaje del LCD 16 × 2.*

*(b) Circuito para utilizar LCD en Tinkercad.*

*Figura 2: Ejemplo de conexion de LCD 16 × 2 con Arduino Uno.*

- 3. Esciba un programa que compare 2 cadenas de caracteres y retorne verdadero si son iguales y falso en caso contrario. Utilice arreglos de char. Tenga en cuenta la longitud del arreglo y el caracter que indica la finalizacion de una cadena de caracteres.

- 4. Escriba un programa que reciba una cadena de caracteres numericos (arreglo de char), la convierta a un numero entero y retorne dicho numero.

- Por ejemplo, si recibe la cadena ”123”, debe retornar un int con valor 123.

- 5. Haga una funcion que reciba un numero entero (int) y lo convierta a cadena de caracteres. Use parametros por referencia para retornar la cadena. Escriba un programa de prueba que utilice dicha funcion.

- Por ejemplo, si el programa recibe un int con valor 123, la cadena que se retorne debe ser ”123”.

- 6. Escriba un programa que reciba una cadena de caracteres y cambie las letras minusculas por mayusculas; los demas caracteres no deben ser alterados.

- Por ejemplo, se recibe Man-zana; debe mostrar MAN-ZANA. La salida del programa debe ser:

Original: Man-zana. En mayusculas: MAN-ZANA.


Realice una version en Arduino de este programa (en un Arduino fısico o Tinkercad). Use el monitor serial de Arduino o Tinkercad para ingresar los valores necesarios e imprima el resultado utilizando el LCD.

- 7. Escriba un programa que reciba una cadena de caracteres y elimine los caracteres repetidos. Por ejemplo, si se recibe ”bananas”, debe mostrar ”bans”. La salida del programa debe ser:

Original: bananas. Sin repetidos: bans.

- 8. Escriba un programa que reciba una cadena de caracteres y separe los numeros del resto de carac- teres, generando una cadena que no tiene numeros y otra con los numeros que habıa en la cadena original.

Por ejemplo, si se recibe abc54rst, el programa debe imprimir las cadenas: abcrst y 54. La salida del programa debe ser:

Original: abc54rst.

Texto: abcrst. Numero: 54.

- 9. Escribir un programa que reciba un numero n y una cadena de caracteres numericos; el programa debe separar la cadena de caracteres en grupos de n cifras, sumarlos e imprimir el resultado. En caso de no poder dividirse exactamente en grupos de n cifras, se debe rellenar con ceros a la izquierda del primer numero.

Por ejemplo, si N = 3 y se lee el arreglo 87512395, la suma serıa 087+512+395=994. La salida del programa debe ser:

Original: 87512395.

Suma: 994.

- 10. Escribir un programa que permita convertir un numero del sistema romano al sistema arabigo usado actualmente. A continuacion se encuentran los caracteres usados en el sistema romano y su equivalente arabigo:

- M: 1000

- D: 500

- C: 100

- L: 50

- X: 10

- V: 5

- I: 1

Los numeros romanos se forman usando estos caracteres con base en 3 reglas:

- (a) Si un caracter esta seguido por uno de igual o menor valor, su valor se suma al total.

- (b) Si un caracter esta seguido por uno de mayor valor, su valor se resta del total.

- (c) No puede haber mas de 3 caracteres repetidos seguidos.

Por ejemplo, los numeros romanos y sus equivalentes: CC=200, CD=400, DC=600, DCLXVI=666, CLXXIV=174. La salida del programa debe ser:

El n umero ingresado fue: DCLXVI Que corresponde a: 666.


Realice una version en Arduino de este programa (en un Arduino fısico o Tinkercad). Use el monitor serial de Arduino o Tinkercad para ingresar los valores necesarios e imprımalos usando el

LCD.

- 11. Escriba un programa que permita manejar las reservas de asientos en una sala de cine. Los asientos de la sala de cine estan organizados en 15 filas con 20 asientos cada una. El programa debe mostrar una representacion de la sala que indique que asientos estan disponibles y cuales se encuentran reservados. Ademas, debe permitir realizar reservas o cancelaciones al ingresar a la fila (letras A-O) y el numero del asiento (numeros 1-20). Un ejemplo de visualizacion de una seccion de la sala es el siguiente:

1 2 3 4 5 6 7 8 9 ... 
A + - - - - - - - - B - - - - - - - - - C - - - - - - - - + D - - - - - - - - - E - - - - - - - - - F - - - - - - - - - G - - - - - - - - - H - - - - - - - - - . .

.

Donde ”+” representa los asientos reservados y ”-” representa los asientos disponibles.

- 12. Un cuadrado magico es una matriz de numeros enteros no repetidos, en la que la suma de los numeros en cada columna, cada fila y cada diagonal principal tiene el mismo resultado. Escriba un programa que permita al usuario ingresar una matriz cuadrada, imprima la matriz y verifique si la matriz es un cuadrado magico. Un ejemplo de cuadrado magico es el siguiente:

- 13. Se tiene una fotografıa digitalizada de una porcion de la galaxia NGC 1300 que esta ubicada a 61.000.000 de a˜nos luz del planeta Tierra. La representacion digital de la imagen esta constituida por una matriz de numeros enteros, en la cual cada uno representa la cantidad de luz en ese punto de la imagen.

Se puede determinar si el elemento ai,j de la matriz representa una estrella si se cumple que:

Elabore y pruebe una funcion que reciba un puntero a la matriz de enteros como argumento y que retorne el numero de estrellas encontradas en la imagen. Ignore las estrellas que puedan existir en

los bordes de la matriz.

- 14. Elabore un programa que llene una matriz 5 × 5 con los numeros del 1 al 25 y la imprima, luego imprima la matriz rotada 90, 180 y 270 grados. Por ejemplo, las matrices original y rotada 90 grados:


- 15. Elabore un programa que permita hallar la interseccion entre un par de rectangulos. Represente los rectangulos como arreglos de 4 datos de la siguiente manera:

- (a) Los primeros 2 datos corresponden a las coordenadas de la esquina superior izquierda del rectangulo (x,y).

- (b) Los siguientes 2 datos representan el ancho y la altura del rectangulo.

Esto se representa en la Figura 3a. Tenga en cuenta que los valores en el eje vertical aumentan hacia abajo y en el eje horizontal aumentan hacia la derecha. [URL 🔗](#page-0)

*(a) Rectangulo y coordenadas.*

- (b) Interseccion entre rectangulos.

*Figura 3: Representacion grafica del ejercicio 15.*


El programa debe recibir 2 arreglos que representen los rectangulos A y B. Por referencia, debe retornar un rectangulo C (con la misma estructura descrita anteriormente) que corresponda a la interseccion entre A y B.

Por ejemplo, si se ingresan los rectangulos A y B representados por los arreglos {0, 0, 8, 4} y {5, 2, 6, 7}, el rectangulo C debe ser el arreglo {5, 0, 3, 4}, como se puede ver en la Figura 3b. [URL 🔗](#page-0)

- 16. En una malla de 2 × 2, realizando unicamente movimientos hacia la derecha y hacia abajo, hay 6 posibles caminos para llegar de la esquina superior izquierda a la inferior derecha, como se observa en la Figura 4. [URL 🔗](#page-0)

*Figura 4: Caminos posibles en una malla 2 × 2.*

Escriba un programa que reciba un numero N y calcule el numero de caminos posibles en una cuadrıcula de N ×N. La salida del programa debe ser:

Para una malla de 2x2 puntos hay 6 caminos.

- 17. Dos numeros a y b (con a ̸= b) son amigables si la suma de los divisores de a (excluyendose a sı mismo) es igual a b, y al sumar los divisores de b el resultado es a. Ej.: los divisores de 220 son 1, 2, 4, 5, 10, 11, 20, 22, 44, 55 y 110; y suman 284. Los divisores de 284 son 1, 2, 4, 71 y 142 y suman 220. Entonces, 220 y 284 son amigables. Escriba un programa que reciba un numero y halle la suma de todos los numeros amigables menores al numero ingresado. La salida del programa cuando se ingresa el numero 300 debe ser:

El resultado de la suma es: 504.

Realice una version en Arduino de este programa (en un Arduino fısico o Tinkercad). Los datos deben ser ingresados con la ayuda del serial. Use el monitor serial de Tinkercad para ingresar los valores necesarios e imprima usando el LCD.

- 18. Las permutaciones lexicograficas son permutaciones ordenadas numericamente o alfabeticamente. Por ejemplo, las permutaciones lexicograficas de 0, 1 y 2 son: 012, 021, 102, 120, 201, 210. Escriba un programa que reciba un numero n y halle la enesima permutacion lexicografica de los numeros entre 0 y 9. Por ejemplo, para N = 100000, la permutacion lexicografica es 2783915460. La salida del programa debe ser:


La permutacion n umero 1000000 es: 2783915460.

- 19. Problema de bonificacion Realice un programa con un Arduino fısico para simular ciertos botones del teclado del computador. Cuando se presione un pulsador fısico, se debe escribir en pantalla alguna letra. Ponga al menos 4 pulsadores para las letras ’W’, ’A’, ’S’ y ’D’.

Nota: Considere el uso de la librerıa Keyboard.h de Arduino.
