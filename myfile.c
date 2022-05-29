#include<stdio.h>

int main(){
	char name[200];
	int password;
	FILE *fp;
	fp = fopen("acc.txt", "r");

	while(fscanf(fp, "%s %d", name, &password) != EOF){
		printf("name: %s, password: %d\n", name, password);
	}
	
	fclose(fp);
	return 0;
}