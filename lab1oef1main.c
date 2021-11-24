//
// Created by tomst on 24/11/2021.
//
char* antwoordOrcs(char zin[]){
    char* antwoord = malloc(sizeof(char)*strlen(zin));
    strcpy(atnwoord, zin);

    for(int i=0; i<strlen(antwoord); i++){
        char c = zin[i];
        if(c=='a'|c=='i'|c=='e'|c=='o'|c=='u'){
            antwoord[i] = 'r';
        }
    }
}

int main(){
    printf("Zegt iets tegen de orcs!\n");

    char zin[100];
    fgets(zin, 100, stdin);

    printf("De orcs antwoorden: %s \n", antwoordOrcs(zin));

    return 0;
}

