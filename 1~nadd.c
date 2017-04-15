#include<stdio.h>
int main()
{
	int a=0,i,j=0;
	scanf_s("%d",&i);
	while(j<i){
		++j;
		a = a + j;
		}
	printf("%d",a);
}