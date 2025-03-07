#include<stdio.h>
#include<math.h>

int main(){
    int inputNum = 0;
    puts("Check if a number if it is a perfect square :");
    scanf("%d", &inputNum);
    int root = floor(sqrt(inputNum));
    if (root * root == inputNum)
        printf("it is a perfect square");
    else
        printf("it is not a perfect square");

        return 0;

}