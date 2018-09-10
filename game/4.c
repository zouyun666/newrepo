#include <stdio.h>
#include <stdlib.h>
#include "simpio.h"
#define MVNum 100
int People();
bool visited[MVNum];
void Method();
void Single();
int Exclude();
static int a;
static int b[MVNum];
int main ()
{	
	printf("好多种奖项？");
	scanf("%d",&a);	
	People();
	Method();
	Exclude();
	return 0;
}
int People()
{
	int i;
	for(i=0;i<a;i++)
	{	
		b[i]=GetInteger();
	}
}
void Method()
{
	int a;
	printf("请问你是采取单组抽奖（输入1）或者多组抽奖（输入2）？");
	scanf("%d",&a);
	switch(a){
		case 1:Single();break;
//		case 2:进入多组抽奖;break;
		default:Method();break;
	}
}

void Single()
{
	int i,j;
	for(i=0;i<a;i++)
	{
		for(j=0;j<b[i];j++)
		{
			printf("%d等奖获奖人：\n",i+1);

		}
	}
}	

int Exclude()
{
	FILE *fp=NULL;
	char tmp[MVNum];
	fp=fopen("information.txt","r");
	if(NULL==fp)
	{
		printf("File open fail!\n");
		return -1;
	}
	fread(tmp,1,100,fp);
	printf("%s\n",tmp);
	fclose(fp);
	fp=NULL;
	return 0;
//	如何排除人;	
//	排除后继续;
} 
