#include <stdio.h>

void rodarVar(float* var1, float* var2, float* var3){
    float temp = *var1;
    *var1=*var2;
    *var2=*var3;
    *var3=temp;
}

void main(){
    float var1=123, var2=456, var3=789;
    rodarVar(&var1, &var2, &var3);
    printf("%.2f-%.2f-%.2f", var1, var2, var3);
}