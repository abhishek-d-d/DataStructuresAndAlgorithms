#include<stdio.h>

//  int x = 0;
int fun(int n)
{
    static int x = 0;   // Either ake this one or the globle one
    if(n > 0)
    {
        x++;
        return fun(n - 1) + x;
    }
    return 0;
}
int main()
{
    int r;
    r = fun(5);
    printf("%d\n",r); //It has made the value to 5

    r = fun(5);
    printf("%d\n",r); // It will start from x = 5
    return 0;
}
