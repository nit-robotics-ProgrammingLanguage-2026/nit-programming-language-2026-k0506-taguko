#include <stdio.h>

int main(void)
{
    //int r;
    double r;
    scanf("%lf", &r);
    if (/*r >= 0*/0 < r)
    {
        printf("%.2f", r * r * 2.2);
    }
    else
    {
        printf("NG");
    }
    return 0;
}
