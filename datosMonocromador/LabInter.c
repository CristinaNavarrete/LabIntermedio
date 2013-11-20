#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv){
	FILE *in;
	FILE *out;

	char caracter;
	
	
	in=fopen(argv[1],"r");
	out=fopen("new.dat","w");
	if(!in){
		printf("problems opening the file %s\n", argv[1]);
		exit(1);
	}
	
	do{
		caracter=fgetc(in);
		if (caracter==';'){
			caracter=' ';
		}
		if(caracter==','){
			caracter='.';
		}
		if(caracter!=EOF)
			fprintf(out,"%c",caracter);
	}while(caracter!=EOF);
	
	
	fclose(in);
		
	return 0;
	
}
