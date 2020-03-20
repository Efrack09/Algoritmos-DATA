#include <stdio.h>
#include <stdlib.h>

float rest(float a, float b) {return a - b;}
float suma(float a, float b) {return a + b;}
float mult(float a, float b) {return a * b;}
float divi(float a, float b) {return a / b;}

int main(int argc,const char ** argv) {
    float a = atof(argv[1]);
    const char *operator = argv[2];
    float b = atof(argv[3]);
    switch (*operator){
    case 'x':   printf("El resultado de la multiplicacion es: %.2f\n", mult(a++,b++));
        break;
    case '/':   printf("El resultado de la division es: %.2f\n", divi(a++,b++));
        break;
    case '+':   printf("El resultado de la suma es: %.2f\n", suma(a++,b++));
        break;
    case '-':   printf("El resultado de la resta es: %.2f\n", rest(a++,b++));
        break;
    default:    printf("Ingresaste mal los numeros, por favor de corroborarlos\n");
        break;
    }
}
