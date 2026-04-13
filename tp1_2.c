#include <stdio.h>
float CuadradoDeX(float num){
    return num * num;
}
void ModifCuadradoDeX(float *num){
    *num = CuadradoDeX(*num);
}
void Mostrar(float *num){
    printf("\n  El numero %10.3f  está  en  la  dirección  %10p", *num, num);
} 
void Invertir(float *a,float *b){
    float aux = *a;
    *a = *b;
    *b = aux;
}
void Orden(float *a,float *b){
    if (*a > *b)
    {
        Invertir(a,b);
    }
}

int main(){
    float numero1 = 12.5;
    float numero2 = 37.108;
    float numero3 = 42.463;
    float numero4 = 42.462;

    Mostrar(&numero1);
    ModifCuadradoDeX(&numero1);
    printf(" \n Aplicamos la funcion Cuadrado y ahora: ");
    Mostrar(&numero1);

    printf(" \n ");
    Mostrar(&numero1);
    Mostrar(&numero2);
    Invertir(&numero1, &numero2);
    printf(" \n Los hemos ivertido y ahora:");
    Mostrar(&numero1);
    Mostrar(&numero2);
    printf(" \n");
    
    Mostrar(&numero3);
    Mostrar(&numero4);
    Orden(&numero3,&numero4);
    printf(" \n Los hemos ordenado de menor a mayor y ahora: ");
    Mostrar(&numero3);
    Mostrar(&numero4);
    printf(" \n");
    
    Orden(&numero3,&numero4);
    printf(" \n Si los volvemos a ordenar: ");
    Mostrar(&numero3);
    Mostrar(&numero4);
    printf(" \n\n");

    return 0;
}
