#include<stdio.h>
#include<windows.h>
int main(void)
{
	int i,j;
	while(1)
{
	for(i=0;i<100;i++)
	{
		for(j=0;j<i;j++)
		{
			printf(" ");
		}
		printf("S");
		Sleep(30);
		system("cls");
	}
	for(i=100;i>=0;i--)
	{
		for(j=0;j<i;j++)
		{
			printf(" ");
		}
		printf("B");
		Sleep(30);
		system("cls");
	}
}

	return 0;
}



//我需要做的：将字母左到右 返回来
//①：打出一个字母 
