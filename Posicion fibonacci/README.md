### **10727. Posicion Fibonacci**

**Link del problema:** [Posicion fibonacci](https://omegaup.com/arena/problem/Posicion-Fibonacci/) 

**Dificultad:** facil-medio

**Tipo de problema:** input-output

**Solucion:** Primero que nada hay que buscar la forma de hacer un arreglo de fibonacci de acuerdo al limite del problema, lo que hice fue hacer un while que haga la misma funcion para recolectar los numeros de fibonacci mientras no se llegue al limite maximo del problema, despues de eso hay que realizar la `busqueda binaria` en el arreglo que realizamos, despues hay que tener en cuenta de que las posiciones que quiere el problema empieza en 1, por ello a la posicion encontrada hay que sumarle `1` y obviamente en el caso de no encontrar el numero en la en la serie de fibonacci pues hay que imprimir `-1` como indica el problema en este tipo de caso.