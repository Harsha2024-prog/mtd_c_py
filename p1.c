//Accept a number from the user and check if it is Even.
#include<stdio.h>

int main(){
    int inutNum = 0;
    puts("Enter a number to check it is Even");
    scanf("%d", &inutNum);
    if(inutNum % 2 == 0)
        printf("%d is Even number", inutNum);
    else
        printf("%d is not Even number", inutNum);
    return 0;   
}