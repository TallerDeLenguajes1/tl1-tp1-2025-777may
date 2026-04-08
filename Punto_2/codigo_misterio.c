#include <stdio.h>

void f_invertirNumero(int *p) {
    int temp = *p; //copia del dato_secreto
    int rev = 0; //var auxiliar
    while (temp > 0) { //procesa c/u del n° usando la var rev para almacenar el nuevo n°
        rev = (rev * 10) + (temp % 10);
        temp = temp / 10;
    }
    *p = rev; //modifica el dato almacenado en el puntero p (254)
}

void f_dividirNumeroEnDos(int *p) {
    *p = *p / 2; //divide en 2 el valor almacenado en el puntero p (127)
}

void f_sumaLaPropiaSumaDeLosNumeros(int *p) {
    int temp = *p; //copia el valor almacenado en el puntero p (127)
    int suma = 0; //var auxiliar
    while (temp > 0) { //suma los n°'s que componen a la variable temp (1+2+7=10)
        suma = suma + (temp % 10);
        temp = temp / 10;
    }
    *p = *p + suma; //al valor almacenado en el puntero p le suma la suma de sus n°'s
}

void procesar_enigma(int *valor_referencia) {
    f_invertirNumero(valor_referencia);
    f_dividirNumeroEnDos(valor_referencia);
    f_sumaLaPropiaSumaDeLosNumeros(valor_referencia);
}

int main() {
    int dato_secreto = 452;
    
    printf("Iniciando depuracion con el valor: %d\n", dato_secreto);
    
    // Instrucción para el alumno: 
    // Pon un breakpoint aquí (F9) y usa F11 (Step Into) para entrar a cada función.
    procesar_enigma(&dato_secreto);
    
    printf("Resultado final del enigma: %d\n", dato_secreto);
    
    return 0;
}