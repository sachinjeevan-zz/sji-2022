#include<stdio.h>
#include<stdlib.h>
struct BHeap
{
    int* A;// 8 bytes
    int size; // 4 bytes
    int i; // 4 bytes
};
void insertHeap(struct BHeap* heap,int data)
{
    heap->A[heap->i] = data;
    int child = heap->i;
    while(child>0)
    {
        int parent = (child-1)/2;
        if(heap->A[child] > heap->A[parent])
        {
            int temp = heap->A[child];
            heap->A[child]= heap->A[parent];
            heap->A[parent] = temp;

            child = parent;
        }
        else
        {
            break;
        }
    }
    heap->i +=1;
}
struct BHeap* createBinaryHeap(int n)
{
    struct BHeap* heap = (struct BHeap*)malloc(sizeof(struct BHeap));
    heap->size = n;
    heap->A = (int*)malloc(sizeof(int)*heap->size);
    heap->i = 0;
    return heap;
}
int main()
{
    int n,x;
    scanf("%d",&n);
    struct BHeap* heap = createBinaryHeap(n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x);
        insertHeap(heap,x);
    }
    for(int i=0;i<heap->i;i++)
        printf("%d ",heap->A[i]);
    
}