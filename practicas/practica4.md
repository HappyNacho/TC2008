## Objetivo 

Hacer un spike sobre IPC: señales, fork/exec, memoria compartida y archivos mapeados a memoria.

## Herramientas
gcc

git


## Conceptos
* IPC

  * Comunicacion entre procesos.


* Señales:

  * Es un IPC, conta de un proceso emisor y receptor. El emisor manda una señal y el receptor deja de hacer lo que esta haciendo y ejecuta el código de la señal.

  * Existen varias señales, pra listarlas puedo usar el comando kill -l
 
* Memoria compartida

  * Se crea un bloque de memoria, el bloque de memoria tiene un key
  * Cualquier proceso con el key se puede conectar al bloque
  * El bloque de memoria persiste hasta que se borre mediante un comando o se reinicie la computadora.
  
* Archivos mapeados a memoria

  * Es un bloque de memroai compartida que esta asociado a un archivo
  * Los cambios se guardan automaticamente

## Que Aprendi


* Como reservarun bloque de memoria para que al ejecutar un programa, este pueda accederlo y guardar varios tipos de datos de manera que persistan aun cuando el proceso termine.


## URL del Commit 


