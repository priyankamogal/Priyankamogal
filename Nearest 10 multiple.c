#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a = (n / 10) * 10;
    int b = a + 10;
    printf("%d", (n - a > b - n)? b : a);
    
    return 0;
}
