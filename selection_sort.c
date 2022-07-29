#include<stdio.h>

void Selection_sort(int[],int);
void swap(int*,int*);

void main()
{
    printf("\tSelection Sort Implementation\n");
    
    int size;
    
    printf("\nEnter the number of elements: ");
    scanf("%d",&size);
    
    int a[size];
    
    printf("\nEnter the elements: \n");
    
    for(int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("\nElements before sorting: ");
    
    for(int i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    
    Selection_sort(a,size);
    
    printf("\nElements after sorting: ");
    
    for(int i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
    
}


void Selection_sort(int a[],int n)
{
    int min,temp;
    
    for(int i=0;i<n-1;i++)
    {
        min=i;
        
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
                min=j;
        }
        
        swap(&a[i],&a[min]);
        
    }
}

void swap(int *p,int *q)
{
    int temp;
    
    temp=*p;
    *p=*q;
    *q=temp;
}
