## Objetivo 

Hacer un spike sobre hilos, semáforos y locks. 

## Herramientas
gcc

git


## Conceptos
* Hilos
   * Es un proceso ligero que solo consta de un stack. Y el código y el heap los comparte con el proceso principal.
   * Pueden ejecutar funciones diferentes.

* Semáforos:
   * Es una variable global.
   * Soporta dos operaciones.
    * Incrementar (sem_post) siempre incrementa en uno.
    * Decrementar (sem_wait) si el valor del semáforo es mayor que 0 decremente si es igual a cero se suspende
   * Controlar acceso a recursos.

* Lock.
    * Es una variable global.
    * Soporta dos operaciones.
      * lock (bloqueo) adquirir el lock. Si el lock ya está tomando el hilo/proceso se suspende.
      * unlock (desbloquera) liberar el lock.
    * Secciones críticas.

## Que Aprendi


* Crear y manejar user threads
* Entender e implementar semaforos
* Identificar posibles deadlock
* Crear numeros random con c


## URL del Commit 
https://github.com/HappyNacho/TC2008/commit/84a3aad2104c4875abf1ba99949dbd8618cbdf18 
