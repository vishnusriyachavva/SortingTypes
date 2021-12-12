#include <stdio.h>
#include <stdlib.h>
void print_arr(int a[],int n){
    int i;
    printf("The Elements are :");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}
void selectionsort(int a[],int n){
    int min,temp,i,j;
    for(i=0;i<n-1;i++){
        min=i;
        for(j=i+1;j<=n-1;j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
        if(i!=min){
            temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }
    }
}
int main()
{
    int a[20],size,i;
    printf("Enter the size of array");
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        printf("\nEnter the no.%d : ",i+1);
        scanf("%d",&a[i]);
    }
    print_arr(a,size);
    selectionsort(a,size);
    print_arr(a,size);
}

