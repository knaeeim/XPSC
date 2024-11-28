#include <stdio.h>
#include <math.h>

int main()
{
    int a; 
    scanf("%d", &a); 

    while(a > 0){
        int b = a % 10;
        a = a / 10;
        printf("%d", b);
    }

    return 0;
}
