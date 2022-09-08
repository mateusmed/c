#include<stdio.h>
#include<stdlib.h>
#include<string.h>


//desenvolvido por israelfds
typedef struct Cliente{
	char nome[20];
	char cpf[11];
	char telefone[10];
};

escrevendoArquivo(char* nome,char* cpf,char* telefone){
		FILE *arq;
		arq=fopen("nome.dat", "a+");

	  	if (arq==NULL){
  			printf("Não conseguiu abrir o arquivo\n");
		}else{
    		printf("Arquivo aberto com sucesso\n");
    		fwrite("\n", sizeof(char), 1, arq);
    		fwrite(nome, sizeof(char), strlen(nome), arq);
    		fwrite(" ", sizeof(char), 1, arq);
    		fwrite(cpf, sizeof(char), strlen(cpf), arq);
    		fwrite(" ", sizeof(char), 1, arq);
    		fwrite(telefone, sizeof(char), strlen(telefone), arq);
    		fclose(arq);
		}
}

criarUsuario(){
	struct Cliente registro;
	printf("\nnome: ");
	scanf("%s",&registro.nome);

	printf("\nCPF: ");
	scanf("%s",&registro.cpf);

	printf("\nTelefone: ");
	scanf("%s",&registro.telefone);

	escrevendoArquivo(registro.nome, registro.cpf, registro.telefone);
}

lendoArquivo(){
	FILE *arq;
	char conteudoTodo[300];
	arq=fopen("nome.dat","rb");

	if (arq==NULL){
  		printf("Não conseguiu abrir o arquivo\n");

	}else{

	    printf("Arquivo aberto com sucesso\n");
	    fread(conteudoTodo, sizeof(char), 300, arq);
	    fclose(arq);
    }
  	printf("Nome=%s\n",conteudoTodo);
}

int menu(){

	int op;

	while(true){
		printf("\nDigite 1 para cadastrar: ");
		printf("\nDigite 2 para exibir perfis cadastrados: ");
		printf("\nDigite 0 para sair: \n");
		scanf("%d",&op);
		switch (op) {
			case 1:
				criarUsuario();
				break;
			case 2:
				lendoArquivo();
				break;
			case 0:
				exit(0);
				break;

			default:
				printf("\nOpcao invalida");
		}
	}
}


main(){
	menu();
}



