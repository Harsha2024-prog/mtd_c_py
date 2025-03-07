#include<stdio.h>
#include<math.h>

int main() {
    int num = 0;
    printf("enter a number : ");
    scanf("%d", &num);

    for (int i = 1; i <= 10 ; i++){
       
        printf("%d x %2d = %3d\n ",num, i, num * i);
    }
    return 0;
}
