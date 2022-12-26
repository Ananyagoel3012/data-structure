#include<stdio.h>
void mergesort(int a[],int l,int r);
void merge(int a[],int l1,int r1,int l2,int r2);
int main() {
 int a[30],n,l;
 printf("Enter number of elements:");
 scanf("%d",&n);
 printf("Enter array elements:");
 for(l=0;l<n;l++)
   scanf("%d",&a[l]);
   mergesort(a,0,n-1);
   printf("\nSorted array is :");
   for(l=0;l<n;l++)
     printf("%d ",a[l]);
     return 0;
}
void mergesort(int a[],int l,int r) {
 int mid;
 if(l<r) {
   mid=(l+r)/2;
   mergesort(a,l,mid); //left recursion
   mergesort(a,mid+1,r); //right recursion
   merge(a,l,mid,mid+1,r); //merging of two sorted sub-arrays
 }
}
void merge(int a[],int l1,int r1,int l2,int r2) {
 int temp[50]; //array used for merging
 int l,r,k;
 l=l1; //beginning of the first list
 r=l2; //beginning of the second list
 k=0;
 while(l<=r1 && r<=r2) //while elements in both lists {
   if(a[l]<a[r])
      temp[k++]=a[l++];
   else
      temp[k++]=a[r++];
}
 while(l<=r1) //copy remaining elements of the first list
   temp[k++]=a[l++];
   while(r<=r2) //copy remaining elements of the second list
     temp[k++]=a[r++];
     //Transfer elements from temp[] back to a[]
     for(l=l1,r=0;l<=r2;l++,r++)
       a[l]=temp[r];
}