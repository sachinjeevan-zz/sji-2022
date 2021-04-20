#include<stdio.h>
void func(int n) // 12 14 16 18 20 22 24 22 25 20 23 18 21
{ // 16 19 14 17 12 15 10 13
    if(n<25)
    {
        printf("%d ",n);
        func(n+2);
        printf("%d ",n-2);
        printf("%d ",n+1);
    }
}
int main()
{
    int a = 12;
    func(a);
}