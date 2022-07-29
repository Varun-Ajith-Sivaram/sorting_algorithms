#include<stdio.h>

void Bubble_sort(int[],int);

void main()
{
    printf("\tBubble Sort Implementation\n");
    
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
    
    Bubble_sort(a,size);
    
    printf("\nElements after sorting: ");
    
    for(int i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
    
}


void Bubble_sort(int a[],int n)
{
    int temp;
    
    for(int i=0;i<n-1;i++)
    {
        int swap=0;
        
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                swap=1;
                
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
        
        if(swap==0)
            break;
    }
}
