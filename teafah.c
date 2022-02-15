/*
  Simple Calculator
  By MUDAKI LATIPA
  Last Updated on 15th Feb,2022
  C89 Compiler
  MIT LICENSE
  */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Variable declaration
    char name[100];
    int n1,n2,sum,product,diff;
    float quot;
    printf("Simple Calculator!\n");

    //input
    printf("Enter your name: ");
    gets(name);
    printf("Enter two integers: ");
    scanf("%d%d",&n1,&n2);

    //Computations
    sum=n1 + n2;
    diff=n1 - n2;v
    product=n1 * n2;
    quot =(float) n1/n2;

    //output
    printf("Hey %s, here are the results: \n",name);
    printf("%d+%d=%d",n1,n2,sum);
    printf("%d-%d=%d",n1,n2,diff);
    printf("%d*%d=%d",n1,n2,product);
    printf("%d/%d=%f",n1,n2,quot);
    return 0;
}
