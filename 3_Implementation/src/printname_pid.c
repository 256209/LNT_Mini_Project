#include<stdio.h>
#include "extern.h"
void printname_pid(FILE *fp)
{
  	struct patient p;
  	while(fread(&p,sizeof(struct patient),1,fp))
  	{
	  	printf("\nName of the patient you searched: %s",p.name);
	  	printf("\nPatient ID of the same record: %ld",p.pid);
	  	printf("\nDoctor's name of the same record: %s\n", p.doc);
  	}
}
