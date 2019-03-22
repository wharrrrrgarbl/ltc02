#include <stdio.h>
int beer(int i){
    printf("%d bottles of beer on the wall, %d bottles of beer.\nTake one down, pass it around, %d bottles of beer on the wall...\n",i,i,i-1);
    i = i - 1;
    if ( i == 2) {
        printf("%d bottles of beer on the wall, %d bottles of beer.\nTake one down, pass it around, %d bottle of beer on the wall...\n",i,i,i-1);
        printf("%d bottle of beer on the wall, %d bottle of beer.\nTake one down, pass it around, no more bottles of beer on the wall...\n",i-1,i-1);
        printf("No more bottles of beer on the wall, no more bottles of beer.\nWe've taken them down and passed them around; now we're drunk and passed out!");
        return 0;
    }
    else beer(i);
}
int main(void){
    int i = 99;
    beer(i);
}
