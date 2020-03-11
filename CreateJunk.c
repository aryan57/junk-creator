#include<stdio.h>
int main()
{
	int i;
	char a[1048577];
	FILE *fp=fopen("JUNK.spj","w");
	if(fp==NULL)
	{
		printf("Cant Write!!");
		return 0;
	}
	for(i=0;i<1048576;i++)
	*(a+i)='a';
	*(a+1048576)='\0';
	for(i=0;i<102400;i++)
	{
		fprintf(fp,a);
		i%1024?0:printf("Writting... %d%% Compleated.\r",i/1024);
	}
	fclose(fp);
	return 0;
}
