/******************************************************************************

Merge Sort
*******************************************************************************/
#include<stdio.h>
#include<stdlib.h>
void print_arr(int size,int arr[])
{
    for(int i=0;i<size;i++)
    {
        printf(" %d ",arr[i]);
    }
}


void merge(int *a,int *l,int *r,int length);
void mergesort(int *a,int length);


int main()
{
    int arr[]={90,60,40,50,30,20};
    int length=(sizeof(arr)/sizeof(int));
    
    
    printf("\nBefore sorting elements are:\n");
    print_arr(length,arr);
	
    
   mergesort(arr,length);

    printf("\nAfter merge sort elements are:\n");
    print_arr(length,arr);
    
    return 0;
}
void merge(int *a,int *l,int *r,int length)
{
    
int llength,rlength,i=0,j=0,k=0;
llength=length/2;
rlength=length-llength;
while(i<llength && j<rlength)
{
	if(l[i]<r[j]){
	a[k]=l[i];
	i++;
	}
	else{
	a[k]=r[j];
	j++;
	}
	k++;
    
	
}
while(i<llength)
{
a[k]=l[i];
i++;
k++;
}
while(j<rlength)
{
a[k]=r[j];
j++;
k++;
}
}


void mergesort(int *a,int lb,int ub)
{
int mid,i;
int *l,*r;
mid=length/2;


if(length >= 2)
{

l=(int *)malloc(mid*sizeof(int));
r=(int *)malloc(sizeof(int)*(length-mid));

for(i=0;i<mid;i++){
l[i]=a[i];
}

for(i=mid;i<length;i++){
r[i-mid]=a[i];
}


mergesort(l,mid);
mergesort(r,length-mid);
merge(a,l,r,length);
}

}



