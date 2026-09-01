# Práctica 1: Fundamentos de C++ y Qt Creator

## Introducción

En la Práctica 1, los estudiantes comenzarán a utilizar el entorno de desarrollo **Qt Creator** y consolidarán los fundamentos del lenguaje **C++**. A lo largo de esta sesión, aprenderán a crear proyectos de consola, manejar distintos tipos de datos y estructuras de control y poner en práctica técnicas básicas de depuración para garantizar el correcto funcionamiento de sus programas.

Estos ejercicios buscarán reforzar tanto la comprensión de la sintaxis del lenguaje como el desarrollo de habilidades algorítmicas, sentando las bases necesarias para abordar con éxito las siguientes prácticas de laboratorio.

> [!IMPORTANT]
> **Librería permitida:** Todos los ejercicios deben desarrollarse utilizando únicamente la librería estándar **`<iostream>`**, salvo que el instructor indique explícitamente el uso de alguna otra librería (por ejemplo, `<cstdlib>` para `rand()`).

> [!NOTE]
> **Sobre las tildes:** La palabra "división" aparece sin tilde en los ejemplos de salida porque la terminal tradicional no las soporta correctamente. De ahora en adelante, todos los ejemplos de salida contendrán el mismo "error" tipográfico.

---

## 1. Objetivos

- Avanzar en el manejo del IDE **Qt Creator**, que se empleará para desarrollar las prácticas de laboratorio en C++.
- Mejorar las habilidades de depuración mediante el uso del asistente de depuración del IDE Qt Creator.
- Conocer la estructura básica de un programa en C++.
- Manipular distintos tipos de datos.
- Afianzar el uso de las estructuras de control.
- Desarrollar habilidades programáticas y algorítmicas.

---

## 2. Generar Proyectos de Consola

Utilizando el IDE Qt Creator, el instructor mostrará el proceso para crear un proyecto C++ de consola. También se llevará a cabo un ejercicio simple de depuración en el IDE.

---

## 3. Ejercicios (Nivel Básico)

Los siguientes ejercicios están diseñados para una exploración inicial de la sintaxis y la estructura básica de un programa en C++.

### Ejercicio 1
```text
Escriba un programa que pida dos números A y B e imprima en pantalla el residuo de la división A/B.

Por ejemplo, si se ingresan 8 y 3 se debe imprimir:
El residuo de la division 8/3 es: 2
```

### Ejercicio 2
```text
Escriba un programa que pida un número N e imprima en pantalla si es par o impar.

Por ejemplo, si se ingresa 5 se debe imprimir:
El numero 5 es impar
```

### Ejercicio 3
```text
Escriba un programa que pida dos números A y B e imprima en pantalla el mayor entre ellos.

Por ejemplo, si se ingresan 7 y 3 se debe imprimir:
El mayor es 7
```

### Ejercicio 4
```text
Escriba un programa que pida dos números A y B e imprima en pantalla el menor.

Por ejemplo, si se ingresan 7 y 3 se debe imprimir:
El menor es 3
```

### Ejercicio 5
```text
Escriba un programa que pida dos números A y B e imprima en pantalla la división A/B con redondeo.

Por ejemplo, si se ingresan 8 y 3, se debe imprimir:
8/3=3

Si se ingresan 7 y 3 se debe imprimir:
7/3=2
```

### Ejercicio 6
```text
Escriba un programa que pida dos números A y B e imprima en pantalla la potencia A^B, sin hacer uso de librerías matemáticas.

Por ejemplo, si se ingresan 5 y 3 se debe imprimir:
5^3=125
```

### Ejercicio 7
```text
Escriba un programa que pida un número N e imprima en pantalla la suma de todos los números entre 0 y N, incluyendo N.

Por ejemplo, si se ingresa 5 (1 + 2 + 3 + 4 + 5 = 15), se debe imprimir:
La sumatoria desde 0 hasta 5 es: 15
```

### Ejercicio 8
```text
Escriba un programa que pida un número N e imprima en pantalla el resultado de su factorial.

Por ejemplo, si se ingresa 5 (5! = 1 · 2 · 3 · 4 · 5 = 120), se debe imprimir:
5! = 120
```

### Ejercicio 9
```text
Escriba un programa que pida un número N e imprima en pantalla el perímetro y el área de un círculo con radio N. Use 3.1416 como aproximación del número π.

Por ejemplo, si se ingresa 1 se debe imprimir:
Perimetro: 6.28352
Area: 3.1416
```

### Ejercicio 10
```text
Escriba un programa que pida un número N e imprima en pantalla todos los múltiplos de dicho número entre 1 y 100.

Por ejemplo, si se ingresa 33 se debe imprimir:
Múltiplos de "33" menores que 100: 33 66 99
```

### Ejercicio 11
```text
Escriba un programa que pida un número N e imprima en pantalla su tabla de multiplicar hasta 10×N.

Por ejemplo, si se ingresa 7 se debe imprimir:
1x7 = 7
2x7 = 14
3x7 = 21
...
9x7 = 63
10x7 = 70
```

### Ejercicio 12
```text
Escriba un programa que pida un número N e imprima todas las potencias desde N^1 hasta N^5.

Por ejemplo, si se ingresa 3 se debe imprimir:
3^1=3
3^2=9
3^3=27
3^4=81
3^5=243
```

### Ejercicio 13
```text
Escriba un programa que pida un número N e imprima todos los divisores de N.

Por ejemplo, si se ingresa 4 se debe imprimir:
Los divisores de 4 son: 1 2 4
```

### Ejercicio 14
```text
Escriba un programa que imprima dos columnas paralelas, una con los números del 1 al 50 y otra con los números del 50 al 1.

Por ejemplo, las primeras líneas a imprimir serían:
1 50
2 49
3 48

Nota: No usar la solución trivial de imprimir ambas columnas usando múltiples cout <<.
```

### Ejercicio 15
```text
Escriba un programa que pida al usuario que ingrese números. Una vez se ingrese el número cero, se debe imprimir en pantalla la suma de todos los números ingresados.

Por ejemplo, si se ingresa 1, 2, 3, 0 se debe imprimir:
El resultado de la sumatoria es: 6
```

### Ejercicio 16
```text
Escriba un programa que pida al usuario que ingrese números. Una vez se ingrese el número cero, se debe imprimir en pantalla el promedio de los números ingresados (sin incluir el cero).

Por ejemplo, si se ingresan 1, 2, 3, 0 se debe imprimir:
El promedio es: 2
```

### Ejercicio 17
```text
Escriba un programa que pida al usuario que ingrese números. Una vez se ingrese el número cero, se debe imprimir en pantalla el mayor de todos los números ingresados.

Por ejemplo, si se ingresan 1, 2, 3, 0 se debe imprimir:
El número mayor fue: 3
```

### Ejercicio 18
```text
Escriba un programa que pida un número N e imprima si es o no un cuadrado perfecto.

Por ejemplo, si se ingresa 9, se debe imprimir:
9 es un cuadrado perfecto.

Y si se ingresa 8, se debe imprimir:
8 NO es un cuadrado perfecto.
```

### Ejercicio 19
```text
Escriba un programa que pida un número N e imprima si es o no un número primo.

Por ejemplo, si se ingresa 7 se debe imprimir:
7 es un número primo.

Y si se ingresa 8 se debe imprimir:
8 NO es un número primo.
```

### Ejercicio 20
```text
Escriba un programa que pida un número N e imprima si es o no un palíndromo (se lee igual de derecha a izquierda y de izquierda a derecha).

Por ejemplo, si se ingresa 121, se debe imprimir:
121 es un número palíndromo.

Y si se ingresa 123 se debe imprimir:
123 NO es un número palíndromo.
```

### Ejercicio 21
```text
Escriba un programa que pida un carácter C; si es una letra, la debe convertir de mayúscula a minúscula (debe hacer lo mismo en el sentido contrario) e imprimirla.

Por ejemplo, si se ingresa B, se debe imprimir:
Letra convertida: b

Y si se ingresa k se debe imprimir:
Letra convertida: K
```

### Ejercicio 22
```text
Escriba un programa que pida una cantidad entera de segundos y la imprima en formato horas:minutos:segundos.

Por ejemplo, si se ingresa 7777 se debe imprimir:
2h:9m:37s
```

### Ejercicio 23
```text
Escriba un programa que pida dos números A y B e imprima en pantalla el mínimo común múltiplo entre los dos.

Por ejemplo, si se ingresan 4 y 6, se debe imprimir:
El MCM de 4 y 6 es: 12
```

### Ejercicio 24
```text
Escriba un programa que pida un número entero e imprima un cuadrado de dicho tamaño; los bordes del cuadrado deben estar hechos con el carácter '+' y el interior vacío.

Por ejemplo, si se ingresa 4 se debe imprimir:
++++
+  +
+  +
++++
```

### Ejercicio 25
```text
Escriba un programa que pida un número N e imprima en pantalla la cantidad de dígitos de N.

Por ejemplo, si se ingresa 1234, se debe imprimir:
1234 tiene 4 dígitos.
```

### Ejercicio 26
```text
Escriba un programa que pida tres números e imprima el tipo de triángulo (isósceles, equilátero, escaleno) que se formaría si sus lados tienen la longitud definida por los números ingresados. Tenga en cuenta el caso en que los números no forman un triángulo.

Por ejemplo, si se ingresan 3, 3 y 5, se debe imprimir:
Se forma un triángulo isósceles.

Si se ingresan 3, 3 y 6, se debe imprimir:
Las longitudes ingresadas no forman un triángulo.
```

### Ejercicio 27
```text
Escriba un programa que actúe como una calculadora con operaciones de suma, resta, multiplicación y división; el usuario debe ingresar los operandos y la operación a realizar.

Por ejemplo, si se ingresan 3, + y 5 se debe imprimir:
3+5=8
```

### Ejercicio 28

**Fórmula matemática:**
$$
\pi = 4 \left( 1 - \frac{1}{3} + \frac{1}{5} - \frac{1}{7} + \frac{1}{9} - \cdots \right)
$$

```text
Escriba un programa que encuentre el valor aproximado de π con base en la siguiente suma infinita:

π = 4 * (1 - 1/3 + 1/5 - 1/7 + 1/9 - ...)

El usuario debe ingresar el número de elementos usados en la aproximación.

Por ejemplo, si se ingresa 3, π = 4(1 - 1/3 + 1/5) = 3.46667, por lo que debe imprimirse:
pi es aproximadamente: 3.46667
```

### Ejercicio 29
```text
Escriba un programa que adivine un número A (entre 0 y 100) seleccionado por el usuario (el número NO se ingresa al programa). El programa imprimirá en pantalla un número B y el usuario usará los símbolos >, < e = para indicarle al programa si B es mayor, menor o igual que A, respectivamente. El proceso se repite hasta acertar.
```

### Ejercicio 30
```text
Escriba un programa que genere un número aleatorio A (entre 0 y 100) y pida al usuario que lo adivine; el programa le dirá si B es mayor o menor que A hasta que acierte, y luego mostrará el número de intentos.

Nota: use la función rand() de la librería <cstdlib> de C++.
```

---

## 4. Problemas (Nivel Avanzado)

> [!WARNING]
> Los siguientes problemas presentan un nivel de dificultad más alto y están pensados como un reto adicional para profundizar en el lenguaje C++. Requieren un mayor dominio de la lógica de programación y pueden implicar estructuras más complejas. Se recomienda intentar resolverlos una vez que se haya completado la parte básica.

### Problema 1
```text
Escriba un programa que identifique si un carácter ingresado es una vocal, una consonante o ninguna de las dos e imprima un mensaje según el caso.

Por ejemplo, si ingresa @, debe imprimir:
@ no es una letra

Si ingresa a, debe imprimir:
a es una vocal

Y si ingresa C, debe imprimir:
C es una consonante
```

### Problema 2
```text
Escriba un programa que determine la combinación mínima de billetes y monedas para una cantidad dada. Los billetes disponibles son: $50.000, $20.000, $10.000, $5.000, $2.000, $1.000; las monedas: 500, 200, 100, 50. Si no es posible distribuir la cantidad exacta entre las denominaciones disponibles, mostrar el faltante.

Por ejemplo, para 47810:
50000 : 0
20000 : 2
10000 : 0
5000 : 1
2000 : 1
1000 : 0
500 : 1
200 : 1
100 : 1
50 : 0
Faltante: 10
```

### Problema 3
```text
Escriba un programa que reciba un mes y un día e indique si la fecha es válida. Para 29/2, indicar: "es válida en años bisiestos". La salida del programa debe ser la siguiente:

14 es un mes inválido.
31/4 es una fecha inválida.
27/4 es una fecha válida.
29/2 es válido en bisiesto.
```

### Problema 4
```text
Escriba un programa que sume dos tiempos en formato HHMM, donde el primer entero representa una hora (p.ej., 1245 = 12:45) y el segundo entero representa una duración (2570 = 25 horas y 70 minutos). El programa debe imprimir la hora final, que es el resultado de sumar al primer entero la duración representada por el segundo. El primer entero debe ser una hora válida y debe ser verificada por el programa.

Nota: para los valores escogidos en el texto (1245 y 2570) el programa debe imprimir:
La hora resultante es 1455

Nota 2: si la hora ingresada es inválida, se debe imprimir:
1560 es un tiempo inválido.
```

### Problema 5
```text
Escriba un programa que reciba un número impar e imprima el patrón mostrado a continuación.

Si se ingresa 7 se debe imprimir:
*
***
*****
*******
*****
***
*
```

### Problema 6

**Fórmula matemática:**
$$
e = \frac{1}{0!} + \frac{1}{1!} + \frac{1}{2!} + \frac{1}{3!} + \cdots
$$

```text
Escriba un programa que aproxime el número e según la serie infinita:

e = 1/0! + 1/1! + 1/2! + 1/3! + ...

El usuario debe ingresar el número de términos.

Para 3 términos el programa debe imprimir:
e es aproximadamente: 2.5
```

### Problema 7
```text
Escriba un programa que pida al usuario que ingrese un número N. Sume los pares de la serie de Fibonacci menores a N e imprima el resultado en consola.

Por ejemplo, si ingresa 10, debe imprimir:
El resultado de la suma es: 10
```

### Problema 8
```text
Escriba un programa que solicite al usuario tres números a, b y c. Después de esto, sume todos los múltiplos de a (ma1, ma2 ... , man) y b (mb1, mb2 ... , mbn) menores que c, sin duplicar aquellos que sean comunes entre ambos.

Por ejemplo, para los valores a = 6, b = 12, c = 30, debe imprimir:
6+12+18+24 = 60
```

### Problema 9
```text
Escriba un programa que reciba un número N y luego sume los dígitos de N elevados a sí mismos e imprima el resultado en pantalla.

Por ejemplo, para el número 1223 (1^1 + 2^2 + 2^2 + 3^3 = 36), debe imprimir:
El resultado de la suma es: 36
```

### Problema 10
```text
Escriba un programa que reciba un número N e imprima el enésimo número primo.

Por ejemplo, si el usuario ingresa 4, se debe imprimir:
El primo número 4 es: 7
```

### Problema 11
```text
Escriba un programa que reciba un número N y calcule el MCM de los números enteros entre 1 y N.

Por ejemplo, para N = 4, el programa debe imprimir:
El mínimo comun múltiplo es: 12
```

### Problema 12
```text
Escriba un programa que reciba un número N y calcule el mayor factor primo de N.

Para N = 33 el programa debe imprimir:
El mayor factor primo de 33 es: 11
```

### Problema 13
```text
Escriba un programa que reciba un número N y sume todos los primos menores que N.

Por ejemplo, para N = 10 el programa debe imprimir:
El resultado de la suma es: 17
```

### Problema 14
```text
Escriba un programa que encuentre e imprima el número palíndromo más grande producto de dos números de 3 dígitos.
```

### Problema 15
```text
Escriba un programa que reciba un número N impar y genere una matriz que sigue una espiral (como se muestra en el diagrama original). Después de generada la matriz, sume las diagonales e imprima el resultado.

Por ejemplo, para N = 5 se debe imprimir:
El resultado de la suma de las diagonales es: 101
```

### Problema 16

**Definición matemática de la sucesión de Collatz:**
$$
C_0 = n, \qquad
C_{k+1} = 
\begin{cases} 
\frac{C_k}{2} & \text{si } C_k \text{ es par} \\[6pt]
3C_k + 1 & \text{si } C_k \text{ es impar}
\end{cases}
$$

**Ejemplo del recorrido para N = 10:**
$$
\begin{aligned}
C_0 &= 10 \\
C_1 &= \frac{10}{2} = 5 \\
C_2 &= 3 \cdot 5 + 1 = 16 \\
C_3 &= \frac{16}{2} = 8 \\
C_4 &= \frac{8}{2} = 4 \\
C_5 &= \frac{4}{2} = 2 \\
C_6 &= \frac{2}{2} = 1
\end{aligned}
$$

```text
Sea n ∈ N. Definimos la sucesión de Collatz C(n) como:
C0 = n,
C(k+1) = Ck/2 si Ck es par,
C(k+1) = 3*Ck + 1 si Ck es impar.

Por ejemplo, para N = 10:
C0 = 10
C1 = 10/2 = 5
C2 = 3*5 + 1 = 16
C3 = 16/2 = 8
C4 = 8/2 = 4
C5 = 4/2 = 2
C6 = 2/2 = 1

Escriba un programa que reciba un valor j y calcule las series de Collatz para todas las semillas N < j. Encuentre la semilla que genera la serie de Collatz más larga y cuántos términos m tiene. Imprima dicha serie de Collatz, la semilla y la cantidad de términos.
```

### Problema 17
```text
Escriba un programa que pida al usuario un número k y encuentre e imprima el primer número triangular con al menos k divisores. El enésimo número triangular es n(n + 1)/2.

Por ejemplo para k = 6 el programa debe imprimir:
El número es: 28, que tiene 6 divisores.
```


