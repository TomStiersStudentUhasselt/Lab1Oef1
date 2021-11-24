#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

char* antwoordOrcs(char zin[]){
	
	char* antwoord = malloc(sizeof(char)*strlen(zin)); 
	strcpy(antwoord, zin);
	
	for(int i= 0; i<strlen(antwoord); i++){
		char c = zin[i];
		if(c=='a'|c=='i'|c=='e'|c=='o'|c=='u'){
			antwoord[i] = 'r';
		}
	}
	return antwoord;
}

int main(){
	
	printf("Zeg iets tegen de orcs!\n");
	
	char zin[100];
	fgets(zin, 100, stdin);
	
	printf("De orcs antwoorden: %s \n", antwoordOrcs(zin));
	
	return 0;
}

