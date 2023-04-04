#include<stdio.h>
int main()
{
    int a, b;
    float c,result;
    scanf("%d%d%f",&a,&b,&c);
    result = b*c;
    scanf("%d%d%f",&a,&b,&c);
    result+= b*c;
    printf("VALOR A PAGAR: R$ %.2f\n",result);
    return 0;
}
