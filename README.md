# .gitignore
  Es un una herramienta que permite a _git_ identificar los archivos que no debe rastrear, es decir, excluir de repositorios.
  Esta herramienta es un _archivo oculto_ donde podremos indicar cuáles _patrones_ de archivos o carpetas debe ignorar. 
    Por ejemplo, todos los archivos terminaods en *.exe*
## Su uso:
  Si bien actualmente se puede evitar que _git_ rastree archivos por medio de:
  - Líneas de comando
  - Configuración de la variable *core.excludesFile*
  - La carpeta local *$GIT_DIR/info/exclude*
  - La creacion de un archivo *.gitignore*
  ### ¿Porqué optar por *.gitignore* entre las opciones?
  - Posee una sintáxis simple y clara
  - Es fácilmente modificable
  - Podemos incluir *.gitignore* en los repositorios, así otros también posean una copia _versionada_ de los _patrones_ que deseamos que permanezcan sin rastreo.
  - Trabaja en un patrón de árbol, por lo que al ignorar una carpeta no recorrerá sus directorios y archivos internos.
## ¿Cuándo poner una excepción?:
  Cuando queremos evitar el _versionado_ de archivos temporales e ignorar dependencias y configuraciones locales, para mantener limpio el proyecto.
  Lo ideal es crear el archivo *.gitignore* al inicio del proyecto ya que una vez creado un archivo o directorio será rastreado. 
  En caso de desear detener el rastreo de un archivo habrá que hacerlo de forma manual, usando *git rm --cached _nombre del archivo_* y procediendo a agregar el patron que desea ignorar al archivo *.gitignore*
## Su configuracion:
  El archivo *.gitignore* debe poseer cierto orden y sintaxis. Los comentarios se realizan con *#* al inicio de una línea; las excepsiones de rastreo se realizan con *!* delante del patrón -de ser necesario inmediatamente después de mensionar su directorio contenedor-; para excluir un caractér de su comportamiento especial se usa *\\* ; para separar directorios */* y *\** para cualquier coincidencia excepto */* y *?* para cualquier caractér coincidente excepto */*.
    Por más información puede visitar el [sitio web] (https://git--scm-com.translate.goog/docs/gitignore?_x_tr_sl=en&_x_tr_tl=es&_x_tr_hl=es&_x_tr_pto=tc#_name).
   
 



###### Modelando el texto
 usa # para titulos, _texto_ cursiva y *texto* negrita, - lista continua * y tab para listas dentro de listas, 1. , 2.  para listas numeradas, [texto] (url)  para links,  ``` arriba y debajo del texto para hacer un cuadro 

 link de interes https://gist.github.com/Villanuevand/6386899f70346d4580c723232524d35a