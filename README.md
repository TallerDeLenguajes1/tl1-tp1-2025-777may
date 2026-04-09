#.gitignore
    Es un archivo oculto que permite a git identificar los archivos que no debe rastrear, es decir, excluir de repositorios. 
##Su uso:
  Si bien actualmente se puede evitar el rastreo de archivos git por medio de:
  -Lineas de comando
  -Configuración de la variable "core.excludesFile"
  -La carpeta local $GIT_DIR/info/exclude
  -La creacion de un archivo .gitignore
  ###¿Porqué usar .gitignore?
    Porque su uso permite que los patrones de archivos que se encuentren en su interior sean ignorados por git en cada repositorio que posea la copia de ese archivo .gitignore, permitiendo que otros usuarios al copiar el repositorio (con su .gitignore incluido) también agreguen en su git los patrones a ignorar
##Cuando ponerlo:
  Lo ideal es crear el archivo .gitignore al inicio del proyecto ya que una vez creado y agregado a la tabla de trabajo, un archivo aunque incluya un patron para ser ignorado seguirá siendo rastreado. En caso de desear detener el rastreo de un archivo hay que usar "git rm --cached" y proceder a agregarlo o agregar el patron que desea ignorar al archivo .gitignore
##Su configuracion:
  Los # al inicio de línea permiten comentar el código, un "!" permite revertir la exclusión del archivo por parte de otros comandos - siempre y cuando no se encuentre dentro de una carpeta ignorada -, / sirve para separar directorios, un * solo coincide con / y ? con cualquier cosa que no sea un / 
 



##############Modelando el texto
 usa # para titulos, _texto_ cursiva y *texto* negrita, - lista continua * y tab para listas dentro de listas, 1. , 2.  para listas numeradas, [texto] (url)  para links,  ``` arriba y debajo del texto para hacer un cuadro 

 link de interes https://gist.github.com/Villanuevand/6386899f70346d4580c723232524d35a