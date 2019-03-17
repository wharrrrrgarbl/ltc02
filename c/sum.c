#include <stdio.h>
int const a = 96;
int const b = 728;
int c;

int sum(int a,int b){
    return a + b;
}

int main(void){
    c = sum(a,b);
    printf("Sum is %d",c);
}
