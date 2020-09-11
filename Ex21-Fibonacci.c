#include <stdio.h>

int main(){
	int n,i, atual = 1, ant =0, prox;
	printf("Qtde de termos da sequencia de fibonacci:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("%d, ",atual); _sleep(500); // Sleep(1000)
		prox = atual + ant;
		ant = atual;
		atual=prox;
	}//fim for
	return 0;
}
