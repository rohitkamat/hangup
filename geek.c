#include <stdio.h>
int *func (int *p,int n);
int main()
{
/*code to show a function returning pointer*/
int arr[10]={1,2,3,4,5,6,7,8,9,10},n,*ptr;
n=5;
ptr=func(arr,n);
printf("arr=%p ptr=%p,*ptr=%d\n",arr,ptr,*ptr);
printf("Geek  point here\n");
return 0;
}

int *func(int *p,int n)
{
p=p+n;
return p;
}
