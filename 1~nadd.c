#include<stdio.h>
int main()		//1~n add, 1부터 n까지 더함.
{
	int a=0,i,j=0;
	scanf_s("%d",&i);
	while(j<i){
		++j;
		a = a + j;
		}
	printf("%d",a);
}
