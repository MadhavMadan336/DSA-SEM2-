#include<stdio.h>
int main()
{
    int ar[5],i;
    printf("enter the element");
    for(i=0;i<5;i++)
    scanf("%d",ar+i);
    printf("entered element\n");
    for(i=0;i<5;i++)
    {
    printf("%d\n",*(ar+i));
    }
}
