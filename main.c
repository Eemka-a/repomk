#include <stdio.h>
int Policz(int a,int b) {
    return a+b;
}
int main(void)
{
    int a,b;
    printf("Podaj liczbe: ");
    scanf("%d",&a);
    printf("Podaj liczbe: ");
    scanf("%d",&b);
    printf("%d\n",Policz(a,b));

    return 0;
}
