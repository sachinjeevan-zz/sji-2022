#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int* primes(int n)
{
    int* arr = (int*)malloc(sizeof(int)*(n+1));
    arr[0]=arr[1]=0;
    for(int i=2;i<=n;i++)
    {
        arr[i]=1;
    }
    for(int i=2;i*i<=n;i++)
    {
        if(arr[i]==1)
        {
            for(int j=i*i;j<=n;j+=i)
            {
                arr[j]=0;
            }
        }
    }
    return arr;
}
int main()
{
    int t;
    scanf("%d",&t);
    long long int n;
    int* prime = primes(1000000);
    for(int i=0;i<t;i++)
    {
        scanf("%lld",&n);  
        long long int x = sqrt(n);   
        if((x*x) == n)
        {
            if(prime[x]==1)
            {
                printf("YES\n");
            }
            else{
                printf("NO\n");
            }
        }
        else
        {
            printf("NO");
        }

    }
}

a = 5   =>> 1005

b = 1005  => 2000

c = 2000  => 3000

c = 2000
*c = 1005
**c = 5