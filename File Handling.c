#include<stdio.h>
#include<string.h>

int main()
{
	int i;
	FILE *fp;			//file pointer fp
	char name[20];
	int age;
	long long int prn;
	fp=fopen("stud.txt","w+");			//opens text file named stud
	for(i=0;i<4;i++)
		{
			printf("\nName: ");
				scanf("%s",&name);
			fprintf(fp,"%s",name);  
			printf("\nAge: ");
				scanf("%d",&age);
			fprintf(fp,"\t%d",age);
			printf("\nPRN: ");
				scanf("%lld",&prn);
			fprintf(fp,"\t%ld\n",prn);
		}
	fclose(fp);
}
