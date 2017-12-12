#include<stdio.h>
#include<string.h>
void function(void)
{
	char str[100];
	int length = 1;
	int count =0, i,j;
	printf("enter string:");
	scanf("%s", str);
	for(i = 0; i < strlen(str);i++)
	{
		count = 1;
		for(j = i+1; j<strlen(str);j++)
		{

			if(str[i] == str[j])
			{
				count+=1;
			}
			else
				break;
					
		}
	if(length < count)
	{
		length = count;
	}
			
	}
	printf("string %s run length %d\n", str, length);
}
int main(void)
{
	int test = 8;
	
	while(test--)
	{	
		function();
	}
}
