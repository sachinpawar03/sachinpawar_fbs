// Search the given number in array with function 
#include<stdio.h>
int  MinMaxFun(int n )
{
	int i,min, max;
	printf("enter the number of element in the array ");
	scanf("%d",&n);
	int a[n];
	printf("enter %d element \n",n);
	for (i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
min=max=a[0];
for(i=0; i<n; i++){
	if(a[i]<min)
	min=a[i];
	if(a[i]>max)
	max=a[i];
}
printf("minimum number is [%d]\n",min);
printf("maximum number is [%d]\n",max);
return 0;
}
int main(){
	int i,n;
	MinMaxFun(n);
	return 0;
}
