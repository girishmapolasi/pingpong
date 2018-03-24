#include<stdio.h>
int main()
{
	int m,n,i,j,flag=0;
	int map[100][100];
	char ch;
	printf("Enter The Vertical Range Of The Map (Rows) : ");
	scanf("%d",&m);
	printf("Enter The Horizontal Range Of The Map (Columns) : ");
	scanf("%d",&n);
	printf("Enter The Map \n");
	printf("Enter 1 If There Is Land Else Enter Any Other Number \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Input [%d][%d] In The Map : ",i,j);
			scanf("%d",&map[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(map[i][j]!=1)
			{
				map[i][j]=0;
			}
		}
	}
	int x1,y1,x2,y2;
	printf("Enter The X Coordinate Of The Starting Point : ");
	scanf("%d",&x1);
	printf("Enter The Y Coordinate Of The Starting Point : ");
	scanf("%d",&y1);
	printf("Enter The X Coordinate Of The Ending Point : ");
	scanf("%d",&x2);
	printf("Enter The Y Coordinate Of The Ending Point : ");
	scanf("%d",&y2);
	printf("KEY\n");
	printf("Enter u for moving one step up\n");
	printf("Enter d for moving one step down\n");
	printf("Enter r for moving one step right\n");
	printf("Enter l for movig one step left\n");	 
	do
	{
		printf("Your Current Position Is (%d,%d)\n",x1,y1);
		printf("Enter The Direction You Wish To Move : ");
		scanf(" %c",&ch);
		if(ch=='u')
		{
			if(x1==0)
			{
				printf("Sorry You Have Got Out Of The Map So You Loose !!");
				flag=1;
				break;
			}
			else if(map[x1-1][y1]==1)
			{
				printf("Sorry You Have Hit The Land You Loose !!");
				flag=1;
				break;
			}
			else
			{
				x1--;				
			}
		}
		if(ch=='d')
		{
			if(x1==(m-1))
			{
				printf("Sorry You Have Got Out Of The Map So You Loose !!");
				flag=1;
				break;
			}
			else if(map[x1+1][y1]==1)
			{
				printf("Sorry You Have Hit The Land You Loose !!");
				flag=1;
				break;
			}
			else
			{
				x1++;				
			}
		}
		if(ch=='r')
		{
			if(y1==(n-1))
			{
				printf("Sorry You Have Got Out Of The Map So You Loose !!");
				flag=1;
				break;
			}
			else if(map[x1][y1+1]==1)
			{
				printf("Sorry You Have Hit The Land You Loose !!");
				flag=1;
				break;
			}
			else
			{
				y1++;				
			}
		}
		if(ch=='l')
		{
			if(y1==0)
			{
				printf("Sorry You Have Got Out Of The Map So You Loose !!");
				flag=1;
				break;
			}
			else if(map[x1][y1-1]==1)
			{
				printf("Sorry You Have Hit The Land You Loose !!");
				flag=1;
				break;
			}
			else
			{
				y1--;				
			}
		}		
	}while((x1!=x2)||(y1!=y2));
	if(flag==0)
		printf("You Have Successfully Won The Game");
	return 0;
}
