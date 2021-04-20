#include<stdio.h>
int main()
{
    int n,m,a,b;
    scanf("%d %d %d %d",&n,&m,&a,&b);
    int k = n/m,t = n%m;
    int ans1 = (n*a), ans2 = (k*b)+(t*a),ans3 = (k*b)+ (t>0?b:0);
    printf("%d",(ans1<ans2 && ans1<ans3)?ans1:ans2<ans3?ans2:ans3);
}