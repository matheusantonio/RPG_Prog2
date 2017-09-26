#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct item{
	int id;
	char nome[50];
	char descricao[100];
} Item;

int main(){
	int b=0;
	FILE *i;
	i=fopen("itens.txt","r");
	Item *aux[5];
	while(!feof(i)){
		aux[b] = (Item*)malloc(sizeof(Item));
		fscanf(i, "%d", &aux[b]->id);
		fscanf(i, "%50[^;]", aux[b]->nome);
		fgetc(i);
		fscanf(i, "%50[^\n]", aux[b]->descricao);
		b++;
	}
	fclose(i);
	for(b=0;b<5;b++){
		printf("|%d|%s|%s|\n", aux[b]->id, aux[b]->nome, aux[b]->descricao);
	}
	getchar();	
	return 0;
}
