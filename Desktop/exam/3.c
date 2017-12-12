#include<stdio.h>
#include<string.h>
int anagram_match(char *s1, char *s2)
{
	int l1 = strlen(s1);
	int l2 = strlen(s2);
	if(l1 == l2)
	{
		int count1 = 0, count2 = 0,i = 0,j = 0,k =0, flag = 0;
		for( i = 0;i < l1; i++)
		{	
			flag =0;
			for(k =0; k < i; k++)
			{
				if(s1[k] == s1[i])
				{
					flag =1;
					break;
				}
			}
			if(flag == 1)
				continue;
			count1 = 1;
			count2 = 0;
			for(j = i+1; j < l1; j++)
			{
				if(s1[i] == s1[j])
					count1+=1;
			}
			for( j = 0; j < l1; j++)
			{
				if(s1[i] == s2[j])
					count2+=1;
			}
			if(count1 != count2)
				return -1;
		}
		count1=0;
		for(i =0 ; i<l1; i++)
			if(s1[i] == s2[i]) 
				count1+=1;
		return count1;
		
	}
	else
	{
	return -1;
	}
}
void function(void)
{
	char s1[100], s2[100];
	int count = 0;
	printf("Enter first string: ");
	scanf("%s", s1);
	printf("Enter second string: ");
	scanf("%s", s2);
	printf("anagram Match %d\n",anagram_match(s1,s2));
}
int main(void)
{
	
	int test =8;
	while(test--){	
	function();
}
		
}
