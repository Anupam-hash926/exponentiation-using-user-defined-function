#include <stdio.h>

int power(int a ,int b);


int main()
{
   int numb_tocalc,exp,result;

   printf("enter the number to calculate power of and exponent of it :");

   scanf("%d \t %d",&numb_tocalc,&exp);

   result=power(numb_tocalc,exp);
   printf("the result is : %d",result);



}


int power( int a , int b)
{
    int count=1,running_product=1;
    while(count<=b)
    {
        running_product*=a;
        count++;

    }

    return running_product;
}


