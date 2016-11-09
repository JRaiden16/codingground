//
#include <stdio.h>

int main()
{
    int num[4], i;
    
    for(i=0;i<5;i++)
    {
        printf("Ingrese el numero: \n");
        scanf(" %d", &num[i]);
        
        if(num[i]%2 == 0)
            printf(" %d es divisible entre dos \n", num[i]);
        else
            printf("\a NO divisible entre dos\n");
    }
    printf("Fin del programa \nADIOS!");
    return 0;
}
