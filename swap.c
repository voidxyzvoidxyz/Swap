#include<stdio.h>
 void main(){
   int x=10;
   int y=5;

printf("values before swapping");
printf("X:%d\n Y:%d\n"x,y);

int temp=x;
x=y;
y=temp;

printf("values after swapping");
printf("X:%d\n Y:%d\n"x,y);
}