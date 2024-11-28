#include <stdio.h>

int main(){

    int budget, price, avaiable; 
    scanf("%d%d%d", &budget, &price, &avaiable); 

    if(price <= budget && avaiable > 0){
        printf("YES");
    }
    else printf("NO");

    return 0;
}