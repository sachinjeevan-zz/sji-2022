#include<stdio.h>
void merge(int arr[],int start,int mid,int end)
{
    // 4 9   (mid-start+1) // (end-mid)  5   9
    int len1 = (mid-start+1);
    int len2 = (end-mid);
    int L[len1],R[len2],k=0;
    for(int i=start;i<=mid;i++, k++)
    {
        L[k] = arr[i];
    }
    k=0;
    for(int i=mid+1;i<=end;i++,k++)
    {
        R[k]=arr[i];
    }
    int i=0,j=0;
    while(i<len1 && j<len2)
    {
        if(L[i]<R[j])
        {
            arr[start++] = L[i++];
        }
        else
        {
            arr[start++] = R[j++];
        }
    }
    if(i<len1)
    {
        while(i<len1)
        {
            arr[start++]=L[i++];
        }
    }
    if(j<len2)
    {
        while(j<len2)
        {
            arr[start++]=R[j++];
        }
    }
}
void mergeSort(int arr[],int start,int end)
{
    if(start<end)
    {
        int mid = (start+end)/2;
        mergeSort(arr,start,mid);
        mergeSort(arr,mid+1,end);
        merge(arr,start,mid,end);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    mergeSort(arr,0,n-1);
    int min = arr[1]-arr[0];
    for(int i=2;i<n;i++)
    {
        if((arr[i]-arr[i-1])<min)
        {
            min = (arr[i]-arr[i-1]);
        }
    }
    printf("%d",min);
}
