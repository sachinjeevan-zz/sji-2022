#include<stdio.h>
void func(int n)
{
    if(n>0)
    {
        printf("%d ",n);
        func(n-1);
        printf("%d ",n);
    }
}
int main()
{
    int a=3;
    func(a);
}