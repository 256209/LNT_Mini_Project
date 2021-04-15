#include <stdio.h>
#include"extern.h"
#include <ctype.h>
#include "print.h"
#include<string.h>


void lower(char *upr, char *low)
{
	int l = strlen(upr);
	for (int i=0; i<l; i++)
		low[i] = tolower(upr[i]);
}

int diagnosis()
{
	char yn,c,di[100];
	while((c=getchar())!='\n')
			;
diag:	printf("Enter the diagnosis for this record: ");
	gets(di);
	FILE* fptr=fopen("records.dat","rb");
	
	FILE *diag = fopen("diagnosis.dat", "wb+");
	int l, i;
	int flag=0;
	l = strlen(di);
	struct patient p;
	char s_diag[l];
	for(i=0; i<=l; i++)
		s_diag[i] = tolower(di[i]);
	while(fread(&p, sizeof(struct patient), 1, fptr)==1)
	{
		l = strlen(p.diag);
		char p_diag[l];
		for(i=0; i<l; i++)
			p_diag[i] = tolower(*(p.diag+i));
		if(strstr(p_diag, s_diag))
		{
			fwrite(&p, sizeof(struct patient), 1, diag);
			flag=1;
		}
	}
	if(flag==0)
	{
		printf("No records found.\n");
		fclose(diag);
		fclose(fptr);
		
			printf("\nDiag not found. if not in unit test Try again!\n");
			printf("Do you want to go to main menu?if used in unit test press Y(Y/N): ");
			scanf("%c", &yn);
			if(yn=='Y' || yn=='y')
			{
				return 0;
			}
		goto diag;
	}
	else
	{
		fseek(diag,0,SEEK_SET);
		print(diag);
		fclose(diag);
		fclose(fptr);
		return 0;
	}
}
