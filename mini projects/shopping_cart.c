#include<stdio.h>
#include<math.h>
int main()
{  
    char item[50];
    float price ;
    int quantity; 
    char currency ;
    float total ;
    
    printf("ITEM NAME:", item);
    fgets(item, sizeof(item), stdin);

    printf("PRICE:", price);
    scanf("%f", &price);
     
    printf("QUANTITY:",quantity );
    scanf("%d", &quantity);
    
    printf("CURRENCY:", currency);
    scanf(" %c", &currency);
    
    total = price * quantity;
    printf("%f", total);

    return 0;
}