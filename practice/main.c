#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
int main()
{
  int a[100],a2[100],a3[100],i=0,j=0,k=0,size2,size;
  printf("Enter the size of array 1:");
  scanf("%d",&size);
  printf("\nEnter the elements in array 1:");
  for(i=0;i<size;i++)
    scanf("%d",&a[i]);
  printf("\nElements in array are:\n");
  for(i=0;i<size;i++)
    printf("%d \t",a[i]);

    printf("\nEnter the size of array 2:");
  scanf("%d",&size2);
  printf("\nEnter the elements in array 2:");
  for(i=0;i<size2;i++)
    scanf("%d",&a2[i]);

  printf("\nElements in array are:\n");
  for(i=0;i<size;i++)
    printf("%d \t",a2[i]);

    while(i<size&&j<size2)
    {
        if(a[i]<a2[j])
            a3[k++]=a[i++];
        else
            a3[k++]=a2[j++];
    }
    while(i<size)
        a3[k++]=a[i++];

     while(i<size2)
        a3[k++]=a2[j++];

printf("\nElements in array 3 are:\n");
  for(i=0;i<size+size2;i++)
    printf("%d \t",a3[i]);

}

