#include <stdio.h>
#include <limits.h>

int main(void){
    int num1, num2, num3, num4, num5;

    printf("Max among five: \n");
    scanf("%d%d%d%d%d", &num1, &num2, &num3, &num4, &num5);
    int max =  num1;
    max = num1 > num2 ? num1 : num2;
    max = max > num3 ? max : num3;
    max = max > num4 ? max : num4;
    max = max > num5 ? max : num5;
    printf("%d\n",  max);

    return 0;
}

