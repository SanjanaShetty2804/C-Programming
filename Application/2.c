#include <stdio.h>
void main(){
    int i;
    printf("Enter the number:");
    scanf("%d", &i);
    if(i<10)
    {
        printf("\nthe entered number %d is less than 10\n",i);
    }
    else{
        printf("\n the enered number %d is greater than 10\n",i);
    }
}
