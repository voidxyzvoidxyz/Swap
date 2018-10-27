#include<stdio.h>

void swap(int *x, int *y)
{
int temp=*x;
*x=*y;
*y=temp;}

 void main(){
   int x=10;
   int y=5;

printf("values before swapping");
printf("X:%d\n Y:%d\n"x,y);

swap(&x,&y);

printf("values after swapping");
printf("X:%d\n Y:%d\n"x,y);
}