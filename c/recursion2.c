#include <stdio.h>
int beer(int i){
    printf("%d bottles of beer on the wall, %d bottles of beer.\n",i,i);
    i = i - 1;
    printf("Take one down, pass it around, %d bottles of beer on the wall...\n",i);
    if ( i == 2) {
        return 0;
    }
    else beer(i);
}
int main(void){
    int i = 99;
    beer(i);
    printf("2 bottles of beer on the wall, 2 bottles of beer.\n");
    printf("Take one down, pass it around, 1 bottle of beer on the wall...\n");
    printf("1 bottle of beer on the wall, 1 bottle of beer.\n");
    printf("Take one down, pass it around, no more bottles of beer on the wall...\n");
    printf("No more bottles of beer on the wall, no more bottles of beer.\n");
    printf("We've taken them down and passed them around; now we're drunk and passed out!");
}
