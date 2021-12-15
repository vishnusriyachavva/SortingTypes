#include <stdio.h>
void print_arr(int a[],int n){
    int i;
    printf("The Elements are :");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}
void mergesort(int a[],int lb,int mid,int ub){
    int i,j,k,temp[30];
    i=lb;
    j=mid+1;
    k=lb;
    while(i<=mid && j<=ub){
        if(a[i]<=a[j]){
            temp[k]=a[i];
            k++;i++;
        }
        else{
            temp[k]=a[j];
            k++;j++;
        }
    }
    if(i>mid){
        while(j<=ub){
            temp[k]=a[j];
            k++;j++;
        }
    }
    else{
        while(i<=mid){
            temp[k]=a[i];
            k++;i++;
        }
    }
    for(k=lb;k<=ub;k++){
        a[k]=temp[k];
        
    }
}
void partition(int a[],int lb,int ub){
    int mid;
    if(lb<ub){
        mid=(lb+ub)/2;
        partition(a,lb,mid);
        partition(a,mid+1,ub);
        mergesort(a,lb,mid,ub);
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
    partition(a,0,size);
    print_arr(a,size);
}
