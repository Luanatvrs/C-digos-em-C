#include <stdio.h>

int mat(int b,int e){
    if(e==0) return 1;
    else{
       return (b*mat(b,e-1));
    }
}

int main(void){
    int b, e,res;

    printf("base: ");
    scanf("%i",&b);
    printf("Expoente: ");
    scanf("%i",&e);

    res=mat(b,e);
    printf("%i elevado a %i e' %i.\n", b,e,res);

    return 0;
}
