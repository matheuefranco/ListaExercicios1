#include <stdio.h>

int main(){
	int dia;
  while(1){
	printf("Numero do dia:");
	scanf("%d",&dia);
	switch(dia){
		case 1: 
			printf("Domingo\n");
			break;
		case 2: 
			printf("Segunda :( \n");
		    break;
		case 3: 
			printf("Terça\n");
		    break;			 
		case 4: 
			printf("Quarta\n");
		    break;		
		case 5: 
			printf("Quinta\n");
		    break;
		case 6: 
			printf("Sexta - Viva! :) \n");
		    break;	
		case 7: 
			printf("Sabado\n");
		    break;
		default:
			printf("Dia invalido :(\n");		
		break;							
	}// fim switch
}// fim while			
return 0;	
}
