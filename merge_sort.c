#include<stdio.h>

void Merge_Sort(int[],int,int);
void merge(int[],int,int,int);

int size;

void main()
{
    printf("\tMerge Sort Implementation\n");
    
    printf("\nEnter the number of elements: ");
    scanf("%d",&size);
    
    int a[size];
    
    printf("\nEnter the terms: \n");
    
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
    
    Merge_Sort(a,0,size-1);

    printf("\nElements after sorting: ");
    
    for(int i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
    
}

void Merge_Sort(int a[],int left,int right)
{
    int mid;
    
    if(left<right)
    {
        mid=(left+right)/2;
        Merge_Sort(a,left,mid);
        Merge_Sort(a,mid+1,right);
        merge(a,left,mid,right);
    }
}

void merge(int a[],int left,int mid,int right)
{
    int i,j,k,b[size];
    
    i=left;
    j=mid+1;
    k=left;
    
    while(i<=mid&&j<=right)
    {
        if(a[i]<=a[j])
        {
            b[k]=a[i];
            i++;
            k++;
        }   
        
        else
        {
            b[k]=a[j];
            j++;
            k++;
        }
    }
    
    if(i>mid)
    {
        while(j<=right)
        {
            b[k]=a[j];
            j++;
            k++;
        }
    }
    
    else
    {
        while(i<=mid)
        {
            b[k]=a[i];
            i++;
            k++;
        }       
    }

    for(int k=left;k<=right;k++)
    {
        a[k]=b[k];
    }

}
