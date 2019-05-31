// basic homework 24 (3A713257)
#include <stdio.h>
#include <stdlib.h>

struct course{
	char Name[10];  
	int Calculus;
	int Introduction_to_Computer;
	int Programming;
} data;

int main(void){
    FILE *pFile;
	printf("\nRead course.txt (structure) in read-only mode\n");
	printf("\nContent is:\n\n");
	pFile=fopen("course.txt", "r");
    if (pFile==NULL){
        printf("Read failed!\n");
        exit(1);
	}
    else{
    	printf("Name    Calculus    Introduction to Computer    Programming\n");
    	while (fscanf(pFile, "%[^,],%d,%d,%d",data.Name,&data.Calculus,&data.Introduction_to_Computer,&data.Programming)!=EOF) 
    	    printf("%s\t %d\t %d\t %d",data.Name,data.Calculus,data.Introduction_to_Computer,data.Programming); 
	}
	printf("\n");
    fclose(pFile);
    system("pause");
    return 0;
}
