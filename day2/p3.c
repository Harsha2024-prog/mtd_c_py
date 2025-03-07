#include<stdio.h>

int main(){

    int a = 3, b = -1, c = 8;
    b++;
    printf("%d %d %d", a, b, c);

    c=a--;
    printf("%d %d %d", a, b, c);
    c = a-- + --a;
}