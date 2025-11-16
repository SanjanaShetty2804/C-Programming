#include <stdio.h>
#include <string.h>

void main(){
    char name[50];
    int no;
    int water;
    int bill;
    printf("Enter the Customer name=");
    scanf("%s", name);
    printf("Enter the Customer number=");
    scanf("%d", no);
    printf("Enter Number of litres consumed=");
    scanf("%d", water);
    if(water<=1000)
    {
        bill=150+(2*(water/100));
    }
    else if(water<=3000 && water>1000)
    {
        bill=150+(3*(water/100));
    }
    else if(water>3000)
    {
        bill=150+(5*(water/100));
    }
    else{
        bil=150;
    }
    
    if(bill>500){
        
    }
    
}