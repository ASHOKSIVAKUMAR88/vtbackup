#include<stdio.h>
void function(void)
{
	int n = 0, r =0,t =0;
	printf("Enter number:");
	scanf("%d", &n);
	t = n;
	r = 0;
	while(t){
	r = r*10+t%10;
	t = t/10;
	}
	printf("Number %d sample output %d \n",n,n+r);
}
int main(void)
{
	
	int test =8;
	while(test--){	
	function();
}
		
}
