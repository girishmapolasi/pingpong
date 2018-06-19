#include <stdio.h>
int main()
{
	int i,j,n;
	printf("enter n : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=2*n;j++)
		{
			if(j<=i)
			{
				if(j%2!=0)
				printf("0");
				if(j%2==0)
				printf("1");
			}else
			printf(" ");
			if(j>(2*n)-i)
			{
				
				if(j%2!=0)
				printf("1");
				if(j%2==0)
				printf("0");
			}
		else
			printf(" ");
		
	}
			
		
		printf("\n");
	}
}
