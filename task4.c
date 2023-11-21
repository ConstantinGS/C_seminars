#include <stdio.h>
#include <limits.h>

int main(void){
    int num1;

    printf("Enter a four-digit number: \n");
    scanf("%d", &num1);
    printf("%d %d %d %d\n", num1/1000, (num1/100)%10, (num1/10)%10, num1%10);
    printf("%.2f\n", ((num1/1000)+(num1/100%10)+(num1/10%10)+(num1%10))/4.0);
    
    return 0;
}

