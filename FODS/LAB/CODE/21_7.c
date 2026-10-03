#include <stdio.h>
#include <time.h>

#define MAX 1000

// Function to display array elements
void traverse(int arr[], int n)
{
    int i;

    printf("\nArray Elements are:\n");

    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\n");
}

// Function to insert an element
void insert(int arr[], int *n, int pos, int value)
{
    int i;

    for(i=*n;i>pos;i--)
    {
        arr[i]=arr[i-1];
    }

    arr[pos]=value;

    (*n)++;
}

// Function to delete an element
void deleteElement(int arr[], int *n, int pos)
{
    int i;

    for(i=pos;i<(*n)-1;i++)
    {
        arr[i]=arr[i+1];
    }

    (*n)--;
}

// Function to search an element
int search(int arr[], int n, int key)
{
    int i;

    for(i=0;i<n;i++)
    {
        if(arr[i]==key)
            return i;
    }

    return -1;
}

// Function to update an element
void update(int arr[], int pos, int value)
{
    arr[pos]=value;
}

// Function to merge two arrays
void merge(int arr1[], int n1, int arr2[], int n2, int arr3[])
{
    int i;

    for(i=0;i<n1;i++)
        arr3[i]=arr1[i];

    for(i=0;i<n2;i++)
        arr3[n1+i]=arr2[i];
}

int main()
{
    int arr[MAX],arr2[MAX],merged[MAX];
    int n,n2;
    int i;
    int pos,value,key;
    clock_t start,end;
    double cpu_time;

    printf("Enter number of elements in first array: ");
    scanf("%d",&n);

    printf("Enter elements:\n");

    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    start=clock();
    traverse(arr,n);
    end=clock();

    cpu_time=((double)(end-start))/CLOCKS_PER_SEC;

    printf("Traversal Time = %f seconds\n",cpu_time);

    printf("\nEnter position for insertion: ");
    scanf("%d",&pos);

    printf("Enter value: ");
    scanf("%d",&value);

    start=clock();
    insert(arr,&n,pos,value);
    end=clock();

    cpu_time=((double)(end-start))/CLOCKS_PER_SEC;

    printf("\nAfter Insertion:\n");
    traverse(arr,n);

    printf("Insertion Time = %f seconds\n",cpu_time);

    printf("\nEnter position for deletion: ");
    scanf("%d",&pos);

    start=clock();
    deleteElement(arr,&n,pos);
    end=clock();

    cpu_time=((double)(end-start))/CLOCKS_PER_SEC;

    printf("\nAfter Deletion:\n");
    traverse(arr,n);

    printf("Deletion Time = %f seconds\n",cpu_time);

    printf("\nEnter element to search: ");
    scanf("%d",&key);

    start=clock();
    int index=search(arr,n,key);
    end=clock();

    cpu_time=((double)(end-start))/CLOCKS_PER_SEC;

    if(index==-1)
        printf("Element Not Found\n");
    else
        printf("Element Found at Position %d\n",index);

    printf("Searching Time = %f seconds\n",cpu_time);

    printf("\nEnter position to update: ");
    scanf("%d",&pos);

    printf("Enter new value: ");
    scanf("%d",&value);

    start=clock();
    update(arr,pos,value);
    end=clock();

    cpu_time=((double)(end-start))/CLOCKS_PER_SEC;

    printf("\nAfter Updating:\n");
    traverse(arr,n);

    printf("Updating Time = %f seconds\n",cpu_time);

    printf("\nEnter number of elements in second array: ");
    scanf("%d",&n2);

    printf("Enter second array elements:\n");

    for(i=0;i<n2;i++)
        scanf("%d",&arr2[i]);

    start=clock();
    merge(arr,n,arr2,n2,merged);
    end=clock();

    cpu_time=((double)(end-start))/CLOCKS_PER_SEC;

    printf("\nMerged Array:\n");

    for(i=0;i<n+n2;i++)
        printf("%d ",merged[i]);

    printf("\n");

    printf("Merging Time = %f seconds\n",cpu_time);

    return 0;
}
