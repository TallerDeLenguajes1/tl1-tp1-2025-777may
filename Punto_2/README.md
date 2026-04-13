
## Sobre el código misterioso:  
    Al iniciar el código el valor de dato_secreto es de: 452, luego se llama a la fcion procesar_enigma y dentro de la misma se procede a llamar a la fcion f_invertirNumero, al terminar la misma el valor de dato_secreto pasa a ser 254, luego se llama a f_dividirNumeroEnDos, donde el valor de dato_secreto pasa a 127 y por último se lama a la fcion f_sumaLaPropiaSumaDeLosNumeros y al terminar el valor de dato_secreto es: 137, luego termina la función procesar_enigma y el programa muestra el resultasdo por pantalla y finaliza.

### El código realiza: 
    Divisiones, sumas,  productos y separación de los dígitos de un número.
### Los títulos elegidos para las funciones fueron: 
    f_invertirNumero, f_dividirNumeroEnDos,f_sumaLaPropiaSumaDeLosNumeros.

### Los nuevos nombres que he elegidon son:
        1. f_invertirNumero
        2. f_dividirNumeroEnDos
        3. f_sumaLaPropiaSumaDeLosNumeros

    Porque: 1 recibe una dirección de memoria por parámetro, guarda el número almacenado dentro de esta en una variable X y utiliza un ciclo de iteraciones y una variable auxiliar Y para ir separando sus unidades con la función resto y almacenando el resultado en Y, de modo tal que se obtiene un inverso del número original. 2 recibe una dirección de memoria por parámetro y guarda en la misam el valor que había dentro multiplicado por dos. 3 recibe una dirección de memoria por parámetro,  guarda el número almacenado dentro de esta en una variable X y utiliza un ciclo de iteraciones y una variable auxiliar Y para ir separando sus unidades con la función resto y sumando el resultado en Y, de modo tal que Y se convierte en la suma de los dígitos de X, una vez finalizada las iteraciones suma el resultado de Y con el número X y lo almacena a todo en la dirección de memoria que fue enviada por parámetro.


## Sobre el código sin funcionar:
    Como la consiga solicita compilarlo y corregir los errores que marca el compilador, iré enumerando las compilaciones y sus resultados:
    1. incluya 'stdio.h' o provea uan declaración de 'printf' y de 'scanf' y se esparaba una ',' o un ';' antes de la línea 18 y de la línea 25
        Tras esos resultados se ha incluido la librería stdio.h y se han agregado ';' en las l íneas 17 y 24.
    2. la compilación finalizó correctamente.
        Tras esos resultados procederé a correr el debugger.
### Debugueando el código:
    También procedo a enumerar los resultados de lo obtenido al correr rel debugger:
    1. Al intentar almacenar el dato en la variable valor1 obtenemos el error "segmentation fault", su causa es brindarle un dato que no es una dirección de memoria o puntero a la función scanf.
        Lo he resulto poniendo '&' delante de 'valor1' en la línea 18.
    2. El código aparentemente corre sin problemas, pero el resultado no es el esperado pues la función duplicar_numero no está modificando el número. 
        Esto de sedebe a que no se está enviando la dirección de memoria del número ni un puntero del mismo. Corregí esto modificando el parámetro de la función por un puntero y cambiando las variables en el código.
    3. El código se ejecutó correctamente y el resultado ha sido el correspondiente a las funciones.

