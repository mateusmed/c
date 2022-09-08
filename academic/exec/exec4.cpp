#include<stdio.h>
#include<stdlib.h>



//Faça um programa que leia números inteiros em um vetor e, ao final, exiba o menor valor lido
//e a média de todos os números lidos. O programa deve perguntar ao usuário quantos valores
//serão informados e utilizar a alocação dinâmica para criar o vetor.


//auxilio nos condigos de israelfds

main(){


	int num;
	int i;

	int media = 0;
	int menor = NULL;
	int soma = 0;

	printf("\nDigite a quantidade de numeros inteiros: ");
	scanf("%d", &num);

	int *vetor;
	vetor = (int*) malloc( num * sizeof(int));


    // aproveitando o mesmo loop pro sistema não fazer trabalho dobrado
	for(i=1; i<=num; i++){

	    int atual = 0;
		printf("\nDigite o valor do numero %d: ", i);
		scanf("%d", &atual);

		if(menor == NULL){
			menor = atual;
		}

		if(atual < menor){
		    menor = atual;
		}

		soma = soma + atual;
		vetor[i] = atual;
	}

	printf("A soma total foi: %d\n", soma);


	media = soma/num;

	printf("\nMenor: %d\n",menor);
	printf("\nMedia: %d\n",media);

	free(vetor);
}