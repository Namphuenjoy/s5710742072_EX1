#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int a;
    int b;
    int x;
    int y;
    printf("Enter 2 number!\n");
    scanf("%d %d",&a,&b);
    x = a*b;
    y = a/b;
    printf("Product of multi: %d\n",x);
    printf("Product of divide: %d\n",y);
    getch();
    return 0;
}
