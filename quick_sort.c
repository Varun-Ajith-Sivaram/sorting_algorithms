#include<stdio.h>

void Quick_Sort(int[],int,int);
int partition(int[],int,int);
void swap(int *,int *);

void main()
{
    printf("\tQuick Sort Implementation\n");
    
    int size;
    
    printf("\nEnter the number of elements: ");
    scanf("%d",&size);
    
    int a[size];
    
    printf("\nEnter the elements: \n");
    
    for(int k=0;k<size;k++)
    {
        scanf("%d",&a[k]);
    }
    
    printf("\nElements before sorting: ");
    
    for(int k=0;k<size;k++)
    {
        printf("%d ",a[k]);
    }
    printf("\n");
    
    Quick_Sort(a,0,size-1);

    printf("\nElements after sorting: ");
    
    for(int k=0;k<size;k++)
    {
        printf("%d ",a[k]);
    }
        
}

void Quick_Sort(int a[],int left,int right)
{
    
    int p;
    
    if(left<right)
    {
        p=partition(a,left,right);
        Quick_Sort(a,left,p-1);
        Quick_Sort(a,p+1,right);
    }
    
}

int partition(int a[],int left,int right)
{
    int pivot,i,j;
    
    pivot=a[left];
    i=left;
    j=right;
    
    while(i<j)
    {
        while(a[i]<=pivot&&i<=j)
        {
            i++;
        }
        
        while(a[j]>pivot)
        {
            j--;
        }
        
        if(i<j)
        {
            swap(&a[i],&a[j]);
        }
    }
    
    swap(&a[left],&a[j]);
    return(j);

}

void swap(int *m,int *n)
{
    int temp;
    
    temp=*m;
    *m=*n;
    *n=temp;
}
