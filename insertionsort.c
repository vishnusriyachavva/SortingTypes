#include <stdio.h>
#include <stdlib.h>
void print_arr(int a[],int n){
    int i;
    printf("The Elements are :");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}
void insertionsort(int a[],int n){
    int i,j,key;
    for(i=1;i<=n-1;i++){
        key=a[i];
        j=i-1;
        while(j>=0 && a[j]>key){
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
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
    insertionsort(a,size);
    print_arr(a,size);
}

