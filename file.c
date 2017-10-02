#define ENERGIA_INICIAL 100
#define STRESS_INICIAL 20
#define LEVEL_INICIAL 1
#define EXP_INICIAL 0

#define CALC1 "Calculo 1"
#define ICC "Introducao a CC"
#define MD "Matematica Discreta"
#define FAC "Fund. Arq. Computadores"
#define GA "Geometria Analitica"
#define PROG1 "Prog 1"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct habilidade {
    int id;
    char nome[30];
    char efeito[50];
    int dano;
    int acerto;
    int habilitada;
} Habilidade;

typedef struct conhecimento{
    int id;
    char nome[30];
    int lvl;
    int exp;
    Habilidade h[4];
} Conhecimento;

typedef struct heroi {
    char nome[50];
    int energia;
    int stress;
    Conhecimento c[6];
} Heroi;

void carregarHeroi(Heroi **h, int i){
    int ic, num, ih;
    char aux[50];
    h[i]=(Heroi*)malloc(sizeof(Heroi));
    FILE *f;
    printf("Digite o nome do heroi:\n");
    fflush(stdin);
    gets(h[i]->nome);
    h[i]->energia=ENERGIA_INICIAL;
    h[i]->stress=STRESS_INICIAL;
    for(ic=0;ic<6;ic++){
            h[i]->c[ic].id=ic;
            h[i]->c[ic].lvl=LEVEL_INICIAL;
            h[i]->c[ic].exp=EXP_INICIAL;
            switch(ic){
                case 0:
                    strcpy(h[i]->c[ic].nome,ICC); break;
                case 1:
                    strcpy(h[i]->c[ic].nome,MD); break;
                case 2:
                    strcpy(h[i]->c[ic].nome,FAC); break;
                case 3:
                    strcpy(h[i]->c[ic].nome,CALC1); break;
                case 4:
                    strcpy(h[i]->c[ic].nome,GA); break;
                case 5:
                    strcpy(h[i]->c[ic].nome,PROG1); break;
            }
            for(ih=0;ih<4;ih++){
                f=fopen("habilidades.txt", "r");
                while(!feof(f)){
                        fscanf(f, "%50[^;]", aux);
                        if(strcmp(h[i]->c[ic].nome, aux)==0){
                            fgetc(f);
                            fscanf(f, "%d", &num);
                            if(num==ih){
                                fgetc(f);
                                fscanf(f, "%50[^;]", h[i]->c[ic].h[ih].nome);
                                fgetc(f);
                                fscanf(f, "%50[^;]", h[i]->c[ic].h[ih].efeito);
                                fgetc(f);
                                fscanf(f, "%d", &h[i]->c[ic].h[ih].dano);
                                fgetc(f);
                                fscanf(f, "%d", &h[i]->c[ic].h[ih].acerto);
                                fgetc(f);
                        }
                        else{
                            fscanf(f, "%100[^\n]", aux);
                            fgetc(f);
                        }
                    }
                    else{
                        fscanf(f, "%100[^\n]", aux);
                        fgetc(f);
                    }
                }
                fclose(f);
            }
    }
}

void mostrarHeroi(Heroi **h, int n){
    int ic, ih, i;
    for(i=0;i<n;i++){
        printf("\n\n|%s|\n", h[i]->nome);
        printf("Energia %d Stress %d", h[i]->energia, h[i]->stress);
        for(ic=0;ic<6;ic++){
                printf("\n|%d | %d | %s | %d |\n", h[i]->c[ic].id, h[i]->c[ic].lvl, h[i]->c[ic].nome, h[i]->c[ic].exp);
                for(ih=0;ih<4;ih++){
                    printf("\n|%s | %s | %d | %d |\n", h[i]->c[ic].h[ih].nome, h[i]->c[ic].h[ih].efeito, h[i]->c[ic].h[ih].dano, h[i]->c[ic].h[ih].acerto);
                }
        }
    }
}



int main()
{
    int i=0, op=-1;
    Heroi *h[5];
    while(op!=0){
        printf("O que deseja fazer?\n(1) adicionar heroi\n(2)mostrar heroi\n");
        scanf("%d", &op);
        switch(op){
            case 1:
                carregarHeroi(h, i);
                i++; break;
            case 2:
                mostrarHeroi(h, i); break;
        }
    }
    return 0;
}
