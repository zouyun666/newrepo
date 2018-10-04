#include <stdio.h>
#include <stdlib.h>
#include "simpio.h"
#define MVNum 100
int People();
//bool visited[MVNum];
/*typedef struct {
	char student_id[MVNum];
	char name[MVNum];
	char gender[MVNum];
	char level[MVNum];
}p;*/
	//}Student_information[MVNum];//,*Message  ;
void Method();
void Single();
int Exclude();
int Information();
static int a;
static int b[MVNum];
int main ()
{	
	printf("好多种奖项？");
	scanf("%d",&a);	
	People();
	Method();
	Exclude();
	Information();
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
	//	case 2:进入多组抽奖;break;
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

void More()
{

}

int Exclude()
{
//	Student_information people[MVNum];
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
} 

//struct p a[MVNum];

int Information()
{
    typedef struct {
	char *student_id;
	char *name;
	char *gender;
	char *level;
}p;
        p a[MVNum];
//	struct Student_information p[MVNum];
//	Student_information *p;
//	Student_information person[MVNum];
	a[0].student_id="1";
	a[0].name="大法师";
	a[0].gender="女";
	a[0].level="2017";
/*	FILE *out;
	out=fopen("information.txt","w");
	if(out==NULL)
	{
		printf("File open fail!\n");
		return -1;
	}
	fprintf(out,"%s",people);
	fclose(out);
*/	return 0;
}

