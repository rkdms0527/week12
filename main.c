#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	FILE *fp;
	int i;
	char str[100];
	fp = fopen("sample. txt", "w");
	if (fp == NULL)
	{
		return -1;
	}
	
	for (i=0;i<3;i++){
	
	printf("input a word : ");
	scanf("%s", str);
	
	fprintf(fp, "%s", str);
	}
	fclose(fp);

}
