## Objetivo 

Modificar al programa init para imprimir un mensaje de bienvenida.
Modificar al programa sh para ejecutar al programa anterior.

## Herramientas

make
gcc
git


## Conceptos

1) Proceso

+ Es una instancia de un programa.
+ Esta compuesta por 3 partes.
++ Stack: variables y funciones, esta limitado. Crece de arriba hacia abajo.
++ Heap: Area de memoria dinamica = RAM + SWAP
++ Codigo: segmentado, ie es una parte

+ Tiene estados

+ Se crean mediante dos llamadas:
++ fork: clone
++ exec: cambia codigo

+Hay un proceso padre:
++ init

## Que Aprendi

Aprendi sobre como se crean los procesos dentro del OS, como init es el proceso padre y las llamadas a sistema de fork y exec para hacer nuevos procesos

## URL del Commit 
https://github.com/HappyNacho/TC2008/commit/a93241042b800a47db0cf19d11a928e91a9d2aa6 
