#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a;
    int b;
    int c;
    float d;

    scanf("%d",&a);
    scanf("%f",&d);
    printf("a = %d\n",a);
    printf("d = %f\n",d);

    c = a+b-23*50/40;

    c= a%2;
    printf("a%%2 = %d\n",c);

    printf("Natnicha\n");
    printf("The number is %d %d\n",123,456);
    printf("The floating point number %f\n",1234.567);
    printf("The floating point number %.2f\n",1234.567);
    return 0;
}
