#include <stdio.h>
void priest(){
    printf("у попа была собака, он её любил\n");
    printf("она съела кусок мяса, он её убил\n");
    printf("в землю закопал\n");
    printf("и надпись написал, что ");
    priest();
}
int main(void){
    priest();
}
