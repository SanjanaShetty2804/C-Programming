  include <stdio.h>
#define TEN 10
int add(int a , int b);
int main(void){
    int x=5, y=TEN;
    int z= add(x,y);
    printf("Sum=%d\n",z); 
}
int add(int a, int b){
    return a+b;
}