#include<stdio.h>
#include<stdlib.h>

//Pegar numero de notas//ok
//criar vetor com quantidade de notas//
//atribuir as notas ao vetor//ok
//calcular media aritmética//ok
//usar alocaçao dinâmica do vetor//ok
//Liberar a memoria ao final//ok

// estudo conjunto com israel.fds
// script feito por israel.fds

main(){


	int n,i;
	float media,soma = 0;
	printf("\ndigite quantidade de notas: ");
	scanf("%d",&n);
	float *v;
	v = (float*) malloc(n*sizeof(float));//ainda não sei pra que usar isso// toma no cu.
	//se quando você cria um vetor, o programa ja faz uma alocação dinamica. se sao endereços separados ou sequenciais???
	//isso caracteriza alocação estatica ou dinamica.
	//alocaçao estatica blocos de endereços SEPARADOS apontando para o mesmo vetor.
	//alocaçao dinamica blocos de endereços SEQUENCIAIS apontando para o mesmo vetor.
	for(i=1;i<=n;i++){
		printf("\nDigite a nota %d: ",i);
		scanf("%f",&v[i]);
	}
	for(i=1;i<=n;i++){
		soma = soma + v[i];
		printf("\n%.1f\n",v[i]);
	}
	media = soma/n;
	printf("\nmedia: %.1f\n",media);
	free(v);
	for(i=1;i<=n;i++){
		printf("\n%f\n",v[i]);
	}

}