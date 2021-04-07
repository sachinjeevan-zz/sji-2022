#include<stdio.h>
void generate_primes(int arr[],int m)
{
    int i=1,j=1;
    int ans = i+j+2*i*j;
    while(!(i==j && ans>m))
    {
        if(ans>m)
        {
            i++;
            j=i;
        }
        else{
            j++;
            arr[ans] = 0;
        }
        ans = i+j+2*i*j;
    }

}
int main()
{
    int n;
    scanf("%d",&n);
    int m = (n-1)/2;
    int arr[m+1];
    arr[0] = 0;
    for(int i=1;i<=m;i++)
    {
        arr[i] = 1;
    }
    generate_primes(arr,m);
    printf("2 ");
    for(int i=1;i<=m;i++)
    {
        if(arr[i]==1)
        {
            printf("%d ",i*2+1);
        }
    }

}