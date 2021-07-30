#include <stdio.h>

int fat(int n)
{
    if(n == 0)
    {
        return 1;
    }
    else
    {
        return n*fat(n - 1);
    }
}

int loop(int n)
{
    scanf("%d", &n);
    if(n == -1)
    {
        return 0;
    }
    
    else
    {
        printf("%d\n", fat(n));
        return loop(n);
    }
}

int main()
{
    int n;

    loop(n);
    return 0;
}
