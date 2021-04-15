#include<stdlib.h>
#include <stdio.h>
#include<ctype.h>
#include"extern.h"
#include"print.h"
#include<string.h>


int doctor()
{
	char yn,c,d_name[100];
	while((c=getchar())!='\n')
		;
again:	printf("Enter doctor's name for this patient : ");
	gets(d_name);
	FILE* fptr=fopen("records.dat", "rb");
		
	char dummy[100];
	int flag=0;
	for(int i=0;i<strlen(d_name);i++)
    	{
        	d_name[i]=tolower(d_name[i]);
    	}
	FILE *doc = fopen("doctor.dat", "wb+");
	struct patient p;
	while (fread(&p, sizeof(struct patient), 1, fptr)==1)
	{
		for(int i=0;i<strlen(p.doc);i++)
    		{
        		dummy[i]=tolower(p.doc[i]);
    		}
		if(strstr(dummy, d_name))
		{
			fwrite(&p, sizeof(struct patient), 1, doc);
			flag=1;
		}
	}
	if(flag==0)
	{
		printf("Doctor not found.\n");
		fclose(doc);
		fclose(fptr);
		printf("\nDoctor not found. if not in unit test case Try again!\n");
			printf("Do you want to go to main menu?if in unit test press Y(Y/N): ");
			scanf("%c", &yn);
			if(yn=='Y' || yn=='y')
			{
				return 0;
			}
		goto again;
	}
	else
	{
		fseek(doc, 0, SEEK_SET);
		print(doc);
		fclose(doc);
		fclose(fptr);
		return 0;
	}
	
}
