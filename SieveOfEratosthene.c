#include<stdio.h>
void generate_primes(int arr[],int n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(arr[i]==1)
        {
            for(int j=i*i;j<=n;j+=i)
            {
                arr[j] = 0;
            }
        }
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n+1];
    arr[0]=arr[1]=0;
    for(int i=2;i<=n;i++)
    {
        arr[i] = 1;
    }
    generate_primes(arr,n);
    for(int i=2;i<=n;i++)
    {
        if(arr[i]==1)
            printf("%d ",i);
    }

}