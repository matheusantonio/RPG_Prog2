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
    int energia;
    int stress;
    Conhecimento c[6];
} Heroi;

void carregarHeroi(Heroi *h){
    int ic, num, ih;
    char aux[50];
    FILE *f;
    h->energia=ENERGIA_INICIAL;
    h->stress=STRESS_INICIAL;
    for(ic=0;ic<6;ic++){
            h->c[ic].id=ic;
            h->c[ic].lvl=LEVEL_INICIAL;
            h->c[ic].exp=EXP_INICIAL;
            switch(ic){
                case 0:
                    strcpy(h->c[ic].nome,ICC); break;
                case 1:
                    strcpy(h->c[ic].nome,MD); break;
                case 2:
                    strcpy(h->c[ic].nome,FAC); break;
                case 3:
                    strcpy(h->c[ic].nome,CALC1); break;
                case 4:
                    strcpy(h->c[ic].nome,GA); break;
                case 5:
                    strcpy(h->c[ic].nome,PROG1); break;
            }
            for(ih=0;ih<4;ih++){
                f=fopen("habilidades.txt", "r");
                while(!feof(f)){
                        fscanf(f, "%50[^;]", aux);
                        if(strcmp(h->c[ic].nome, aux)==0){
                            fgetc(f);
                            fscanf(f, "%d", &num);
                            if(num==ih){
                                fgetc(f);
                                fscanf(f, "%50[^;]", h->c[ic].h[ih].nome);
                                fgetc(f);
                                fscanf(f, "%50[^;]", h->c[ic].h[ih].efeito);
                                fgetc(f);
                                fscanf(f, "%d", &h->c[ic].h[ih].dano);
                                fgetc(f);
                                fscanf(f, "%d", &h->c[ic].h[ih].acerto);
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

void mostrarHeroi(Heroi *h){
    int ic, ih;
    printf("Energia %d Stress %d", h->energia, h->stress);
    for(ic=0;ic<6;ic++){
            printf("\n|%d | %d | %s | %d |\n", h->c[ic].id, h->c[ic].lvl, h->c[ic].nome, h->c[ic].exp);
            for(ih=0;ih<4;ih++){
                printf("\n|%s | %s | %d | %d |\n", h->c[ic].h[ih].nome, h->c[ic].h[ih].efeito, h->c[ic].h[ih].dano, h->c[ic].h[ih].acerto);
            }
    }
}

int main()
{
    Heroi *h;
    h=(Heroi*)malloc(sizeof(Heroi));
    carregarHeroi(h);
    mostrarHeroi(h);
    return 0;
}
