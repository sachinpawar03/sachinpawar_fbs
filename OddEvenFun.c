// Find odd and even among the numbers.  
#include<stdio.h>
int OddEvenFun(int n)
{
	int i;
	int a[n];
	printf("enter %d element \n");
	for (i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	for (i=0; i<n; i++){
		if (a[i] % 2 ==0)
		printf("%d is even\n",a[i]);
	else
		printf("%d is odd\n",a[i]);
	}
	return 0;
}
int main(){
	int n;
	printf("enter a element in a array= ");
	scanf("%d",&n);
	OddEvenFun(n);
}

