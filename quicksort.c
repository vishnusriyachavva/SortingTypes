#include <stdio.h>
void quick_sort(int[],int ,int );
void print_arr(int[],int);
int main()
{
	int i,n,a[120],lb,ub,j;
	printf("enter the number of elements ");
	scanf("%d",&n);
		
	for(i=0;i<n;i++)
	{
		printf("enter the elements %d  : ",i+1);
		scanf("%d",&a[i]);
	}
	print_arr(a,n);
	printf("After sorting :");
	quick_sort(a,0,n-1);
	print_arr(a,n);
	
	return 0;
}
void print_arr(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}

}
void quick_sort( int a[],int lb,int ub)
{

	int temp,i,j,pivot;

	if(lb<ub)
	{
		pivot=lb;
		i=lb;
		j=ub;
		while(i<j)
		{
			while(a[i]<=a[pivot] && i<ub)
			i++;
			while(a[j]>a[pivot])
			j--;
			
				if(i<j)
				{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
				
			}
	 }
			temp=a[j];
			a[j]=a[pivot];
			a[pivot]=temp;
			quick_sort(a,lb,j-1);
			quick_sort(a,j+1,ub);

	}
}

