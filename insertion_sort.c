#include<stdio.h>

void Insertion_sort(int[],int);

void main()
{
    int size;
    
    printf("\tInsertion Sort Implementation\n");
    
    printf("Enter the number of terms: ");
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
    
    Insertion_sort(a,size);
    
    printf("\nElements after sorting: ");
    
    for(int i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
    
}


void Insertion_sort(int a[],int n)
{
    int i,j,key;
    
    for(i=0;i<n;i++)
    {
        key=a[i];
        j=i-1;
        
        while(j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        
        a[j+1]=key;
    }
    
}
