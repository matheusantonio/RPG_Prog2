//Esses são alguns defines, das condições iniciais do personagem.
#define ENERGIA_INICIAL 100
#define ESTRESSE_INICIAL 30
#define LEVEL_INICIAL 1
#define EXP_INICIAL 0
#define NUM_CONHECIMENTO 6
#define NUM_HABILIDADES 4

#define MOD_ENERGIA 50
#define MOD_ESTRESSE 50
#define MOD_SORTE 50
#define MOD_CONHECIMENTO 50

#define UP_EXP 100

#define NUM_PROFESSORES 6
#define DANO_PADRAO 5

//esses são defines dos nomes das matérias, pra facilitar na hora de imprimir, coisas assim
#define CALC1 "Calculo 1"
#define ICC "Introducao a CC"
#define MD "Matematica Discreta"
#define FAC "Fund. Arq. Computadores"
#define GA "Geometria Analitica"
#define PROG1 "Prog 1"

//defines do tamanho da janela
#define ALTURA_JANELA 640
#define LARGURA_JANELA 480
//defines da caixa de mensagens, como a altura de cada linha da caixa, posição da caixa e imagem da caixa de mensagens
#define TEXT_LINE1 380
#define TEXT_LINE2 410
#define TEXT_LINE3 440
#define TEXT_ALL 30 //esse define é da coordenada x do texto, que será a mesma para todas as linhas
#define BOX_X 20
#define BOX_Y 370
#define LOCAL_CAIXA "imagens/messagebox.png"

//defines da HUD do jogo, como a imagem da hud, asimagens das barras de energia e estresse e as posições e valores que definem se a barra estará
//em caution, danger ou fine
#define HUD "imagens/hud.png"
#define BAR_FINE "imagens/fine_bar.png"
#define BAR_CAUTION "imagens/caution_bar.png"
#define BAR_DANGER "imagens/danger_bar.png"
#define HUD_X 0
#define HUD_Y 382
#define STRESS_BAR_X 11
#define STRESS_BAR_Y 431
#define ENERGIA_BAR_X 11
#define ENERGIA_BAR_Y 389
#define VALUE_CAUTION 45
#define VALUE_FINE 75

//Esses defines são das posições dos ícones dos locais no Mapa. Talvez facilite na hora de alterar a localização dos icones.
#define POS1X 380
#define POS1Y 190
#define POS2X 290
#define POS2Y 100
#define POS3X 400
#define POS3Y 120
#define POS4X 320
#define POS4Y 45
#define POS5X 265
#define POS5Y 240
#define POS6X 325
#define POS6Y 360

//defines de imagens de fundo do jogo. Acredito que os nomes erstejam bem intuitivos.
#define FUNDO_LAB "imagens/fundos/lab_com.jpg"
#define NOME_LAB "Laboratorio"
#define FUNDO_BIBLIOTECA "imagens/fundos/biblioteca.jpg"
#define NOME_BIBLIOTEC "Biblioteca"
#define FUNDO_SALADEAULA "imagens/fundos/sala_de_aula.jpg"
#define NOME_SALA "Sala de Aula"
#define FUNDO_PROFESSORES "imagens/fundos/sala_professores.jpg"
#define NOME_PROFESSORES "Sala dos Professores"
#define FUNDO_CORREDOR "imagens/fundos/corredor.jpg"
#define FUNDO_CANTINA "imagens/fundos/cantina.jpg"
#define NOME_CANTINA "Cantina"
#define FUNDO_IHS "imagens/fundos/ihs.jpg"
#define NOME_IHS "IHS"
#define FUNDO_CASA "imagens/fundos/casa.jpg"
#define FUNDO_GAMEOVER "imagens/gameover.png"
#define FUNDO_GAMEOVER2 "imagens/gameover2.png"
#define FUNDO_FIM "imagens/fundo_gameend.png"

#define FUNDO_MENU1 "imagens/main_menu/screen2.png"
#define FUNDO_MENU1_ZOOM "imagens/main_menu/screen2_z.png"
#define FUNDO_MENU2 "imagens/main_menu/screen1.png"
#define FUNDO_MENU2_ZOOM "imagens/main_menu/screen1_z.png"
#define FUNDO_MENU3 "imagens/main_menu/screen3.png"
#define FUNDO_MENU3_ZOOM "imagens/main_menu/screen3_z.png"

#define MENU_OP "imagens/main_menu/menu_opcoes_1.png"
#define MENU_SAVE "imagens/main_menu/menu_load.png"

//Esses fundos são da tela de status, de menu(inventario) e do mapa
#define FUNDO_STATUS "imagens/status.png"
#define FUNDO_MENU "imagens/menu.png"
#define FUNDO_MAPA "imagens/mapa.png"

//imagens da batalha
#define HUD_BATALHA "imagens/hud_batalha.png"

//defines das posições dos avatares e das imagens de cada personagem
#define AVATAR_X 250
#define AVATAR_Y 45
#define AVATAR_LEANDRO "imagens/faces/leandro_face.png"
#define AVATAR_NAUFEL "imagens/faces/naufel_face.png"
#define AVATAR_QUINET "imagens/faces/quinet_face.png"
#define AVATAR_ISABEL "imagens/faces/bel_face.png"
#define AVATAR_ANTONIO "imagens/faces/antonio_face.png"
#define AVATAR_SERGIO "imagens/faces/sergio_face.png"

#define AVATAR_OSORIO "imagens/faces/osorio_face.png"
#define AVATAR_JOAO "imagens/faces/joao_face.png"
#define AVATAR_TONHO "imagens/faces/tonho_face.png"
#define AVATAR_RAMON "imagens/faces/ramon_face.png"

//defines das posicoes e das imagens dos avatares em batalha
#define HEROI_BATALHA_X 98
#define HEROI_BATALHA_Y 162
#define HEROI_BATALHA "imagens/faces/heroi_batalha.png"
#define INIMIGO_BATALHA_X 378
#define INIMIGO_BATALHA_Y 17

//defines de imagens de alguns icones, como icone do mapa (eu acho que esse icone do mapa não está sendo mais usado, porque coloquei ele direto na
//imagem da HUD, mas o icone_local são os icones vermelhos dentro da tela de mapa
#define MAP_ICON "imagens/icones/icone_mapa.png"
#define LOCAL_ICON "imagens/icones/icone_local.png"

//defines de algumas musicas. Nem levem isso a sério por enquanto.
#define MUSIC_ENDING "audio/sarradness.ogg"
#define MUSIC_INTRO "audio/intro.ogg"
#define MUSIC_BATTLE "audio/batalha.ogg"
#define MUSIC_SCENE "audio/scene.ogg"

//defines de efeitos sonoros
#define EFFECT_SKILL "audio/skill_select.wav"
#define EFFECT_BUTTON "audio/select.wav"
#define EFFECT_ITEM "audio/item_select.wav"
#define EFFECT_RETURN "audio/return.wav"
#define EFFECT_MENU "audio/menu.wav"
#define EFFECT_DAY "audio/day.ogg"
#define EFFECT_ATK1 "audio/atk1.wav"
#define EFFECT_ATK2 "audio/atk2.wav"
#define EFFECT_ATK3 "audio/atk3.wav"
#define EFFECT_ATK4 "audio/atk4.wav"
#define EFFECT_ATKENEMY "audio/atkenemy.wav"
#define EFFECT_STEPS "audio/steps.ogg"
#define EFFECT_ERROR "audio/error.wav"
#define EFFECT_USE "audio/item_use.wav"

#define RISADA_ANTONIO "audio/risada.wav"

//Defines de alguns arquivos, no caso, das listas de habilidades e de itens
#define LISTA_HABILIDADES "itens/lista_de_habilidades.txt"
#define LISTA_ITENS "itens/lista_de_itens.txt"
//define as posições das caixinhas azuis onde ficam as imagems dos itens no inventário
#define ITEM_BOX_X 49
#define ITEM_BOX_Y 47

//defines dos dialogos. Pensei em colocar no padrão "Nome do Personagem_Situação" pra facilitar na hora de chamar os diálogos
#define DIALOGO_INTRO "mensagens/intro_dialogo_sergio1.txt"
#define OSORIO_INTRO "mensagens/intro_dialogo_osorio.txt"
#define JOAO_INTRO "mensagens/intro_dialogo_joao.txt"
#define TONHO_INTRO "mensagens/intro_dialogo_tonho.txt"
#define RAMON_INTRO "mensagens/intro_dialogo_ramon.txt"

//chamadas das bibliotecas, isso vcs ja sabem.
#include<stdio.h>
#include<stdlib.h>
#include <allegro5/allegro.h>
#include <allegro5/allegro_native_dialog.h>
#include<allegro5/allegro_image.h>
#include<allegro5/allegro_audio.h>
#include <allegro5/allegro_acodec.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>
#include <locale.h>

//Aqui nós temos algumas estructs com ponteiros.
ALLEGRO_DISPLAY *janela; //O ponteiro que representa a janela do jogo.
//ALEEGRO_BITMAP são os ponteiros das imagens. Cada ponteiro representa um tipo de imagem em especifico
ALLEGRO_BITMAP *fundo, *menu, *op, *status, *face, *face2, *face3, *face4, *caixa_mensagem, *icone, *pos1, *pos2, *pos3, *pos4, *pos5, *pos6, *hud, *hud_batalha, *barra_estresse, *barra_energia;
ALLEGRO_AUDIO_STREAM *musica, *effect; //ponteiro para receber uma musica
ALLEGRO_FONT *fonte, *fontehud, *fontedia, *fontedia2; //ponteiros para receber fontes. Usei dois porque a fonte na HUD é pequena, mas eles usam o mesmo arquivo de fonte
ALLEGRO_EVENT_QUEUE *fila; //ponteiro para receber uma fila de eventos.
ALLEGRO_EVENT evento; //uma struct evento, onde nos usamos pra definir qual evento estamos esperandoa acontecer, fica mais claro abaixo.

//STRUCTS
typedef struct habilidade { //Struct que guarda as habilidades do herói
    int id; //ID da habilidade. Por enquanto acho que é inútil, mas fica aqui por enquanto por precaução
    char nome[30]; //Nome da habilidade
    char efeito[100]; //Efeito da habilidade
    int dano; //dano que ela causa, pra ser usado no calculo de dano nas batalhas
    int acerto; //chance do heroi acertar a habilidade.
    int habilitada; //habilitada definira se o heroi possui a habilidade ou nao. Achei melhor do que fazer outra lista encadeada
} Habilidade;

typedef struct conhecimento{ //struct dos conhecimentos (matérias) dos personagens.
    int id; //esse ID já é necessario para buscas
    char nome[30];
    int lvl; //level do conhecimento, que definirá quais habilidades o heroi possui
    int exp; //experiencia, que será adquirida durante o jogo para upar
    Habilidade *h; //ponteiro para as habilidades de cada área de conhecimento
} Conhecimento;

typedef struct heroi { //Essa struct define todos os status e características do heroi do jogo
    char nome[50];
    int energia; //a energia do heroi, que irá de 0 a 100, se chegar a 0, herói morre
    int estresse; //estresse do heroi, que irá de 0 a 100, se chegar a 100,heroi morre
    int sorte; //a sorte será usada em alguns calculos, como se o personagem encontrará um item no caminho, acertará um ataque ou conseguirá colar
    int ultima; //ultima materia estudada
    int classe;
    Conhecimento *c;
} Heroi;
Heroi *h;

typedef struct item{ //struct dos itens do heroi
    int id; //id do item usado para buscas
    char nome[30];
    char descricao[100]; //descrição do efeito que o item causa. Usaremos sistema de árvore para aplicar os efeitos.
    char imagem[50]; //caminho para a imagem do icone do item
    bool aplicado; //define se o item foi aplicado (se seu efeito foi ativado) ou não, mas acho que isso não será necessario
    int coorx; //coordenada x do item no menu
    int coory; //coordenada y do item no menu
    struct ALLEGRO_BITMAP *img, *usado; //o ponteiro que receberá a imagem do item
    struct item *prox; //próximo item da lista encadeada de itens
} Item;
Item *i;

typedef struct dia{ //essa struct define os status do dia e do turno
    int turno; //turno em que o personagem está durante o dia
    int dia; // dia da semana em que o personagem está
    char semana[20]; //string para armazenar o dia da semana, de Segunda a Sexta
} Dia;
Dia *d;

typedef struct professor{
    int id; //id que servira para identificar qual e o professor, qual materia ele da, etc
    int energia; //energia do professor, todos possuem o padrao inicial de 100
    int dano; //dano que o professor dará
    char imagem[50];
} Professor;
Professor *prof;

//FUN플O DE INICIALIZA플O DO JOGO
void inicializarHeroi(){ //Essa função incializa as características do herói, usamos defines pra sruct heroi e Conhecimento e arquivos para Habilidades
    int i, j, num;
    char aux[200];
    FILE *f;

    h=(Heroi*)malloc(sizeof(Heroi));
    h->energia=ENERGIA_INICIAL;
    h->estresse=ESTRESSE_INICIAL;
    h->sorte=1;
    h->c=(Conhecimento*)malloc(NUM_CONHECIMENTO*sizeof(Conhecimento));
    for(i=0;i<NUM_CONHECIMENTO;i++){
        h->c[i].id=i;
        h->c[i].lvl=LEVEL_INICIAL;
        h->c[i].exp=EXP_INICIAL;
        switch(i){
        case 0:
            strcpy(h->c[i].nome,ICC); break;
        case 1:
            strcpy(h->c[i].nome,MD); break;
        case 2:
            strcpy(h->c[i].nome,FAC); break;
        case 3:
            strcpy(h->c[i].nome, CALC1); break;
        case 4:
            strcpy(h->c[i].nome, GA); break;
        case 5:
            strcpy(h->c[i].nome, PROG1); break;
        }
        h->c[i].h=(Habilidade*)malloc(NUM_HABILIDADES*sizeof(Habilidade));
        for(j=0;j<NUM_HABILIDADES;j++){
            f=fopen(LISTA_HABILIDADES, "r");
            while(!feof(f)){
                        fscanf(f, "%50[^;]", aux);
                        if(strcmp(h->c[i].nome, aux)==0){
                            fgetc(f);
                            fscanf(f, "%d", &num);
                            if(num==j){
                                fgetc(f);
                                fscanf(f, "%50[^;]", h->c[i].h[j].nome);
                                fgetc(f);
                                fscanf(f, "%100[^;]", h->c[i].h[j].efeito);
                                fgetc(f);
                                fscanf(f, "%d", &h->c[i].h[j].dano);
                                fgetc(f);
                                fscanf(f, "%d", &h->c[i].h[j].acerto);
                                fgetc(f);
                                if(j==0){
                                    h->c[i].h[j].habilitada=1;
                                }
                                else{
                                    h->c[i].h[j].habilitada=0;
                                }
                                h->c[i].h[j].id=j;
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

void inicializarProfessores(){ //innicializara as condicoes dos professores do jogo
    int i;
    char source[81], img[] = "_batalha.png";
    prof = (Professor*)malloc(NUM_PROFESSORES*sizeof(Professor));
    for(i=0;i<NUM_PROFESSORES;i++){
        source[0]='\0';
        prof[i].id=i;
        prof[i].energia=ENERGIA_INICIAL;
        prof[i].dano=DANO_PADRAO + 5*i; //cada professor tera um dano +5 em relacao ao professor anterior, tornando cada professor mais forte
        switch(i){
            case 0:
                strcat(source, AVATAR_LEANDRO);
                source[strlen(source)-4]='\0';
                strcpy(prof[i].imagem, strcat(source, img)); break;
            case 1:
                strcat(source, AVATAR_NAUFEL);
                source[strlen(source)-4]='\0';
                strcpy(prof[i].imagem, strcat(source, img)); break;
            case 2:
                strcat(source, AVATAR_QUINET);
                source[strlen(source)-4]='\0';
                strcpy(prof[i].imagem, strcat(source, img)); break;
            case 3:
                strcat(source, AVATAR_ISABEL);
                source[strlen(source)-4]='\0';
                strcpy(prof[i].imagem, strcat(source, img)); break;
            case 4:
                strcat(source, AVATAR_ANTONIO);
                source[strlen(source)-4]='\0';
                strcpy(prof[i].imagem, strcat(source, img)); break;
            case 5:
                strcat(source, AVATAR_SERGIO);
                source[strlen(source)-4]='\0';
                strcpy(prof[i].imagem, strcat(source, img)); break;
        }
    }
}

bool inicializar(){ //Essa função inicializa outras coisas, além de coisas do allegro
    setlocale(LC_ALL, "");
    if(!al_init()){  //inicializa o próprio allegro.
        fprintf(stderr, "Falha ao inicializar allegro");
        return -1;
    }
    janela = al_create_display(ALTURA_JANELA, LARGURA_JANELA); //cria uma janela do tamanho ALTURA_JANELA x LARGURA_JANELA
    if(!janela){ //checa se o ponteiro da janela foi recebido corretamente
        fprintf(stderr, "Falha ao inicializar janela");
        return -1;
    }
    al_set_window_title(janela, "Calouro Simulator"); //define o titulo da janela
    if(!al_init_image_addon()){ //inicializa o addon de imagens
        fprintf(stderr, "Falha ao inicializar addon de imagens");
        return -1;
    }
    if(!al_install_audio()){ //instala o addon de audios
        fprintf(stderr, "Falha ao instalar audio");
        return -1;
    }
    if(!al_init_acodec_addon()){ //algum addon relevante que eu não lembro especificamente qual é
        fprintf(stderr, "Falha ao inicializar acodec addon");
        return -1;
    }
    al_reserve_samples(2); //define o numero de musicas, algo assim
    al_init_font_addon(); //inicializa o addon das fontes
    if(!al_init_ttf_addon()){ //e o addon das funtes true type
        fprintf(stderr, "Falha ao inicializar ttf");
        return -1;
    }
    if(!al_install_mouse()){ //instala o mouse
        fprintf(stderr, "Falha ao instalar mouse");
        return -1;
    }
    al_set_system_mouse_cursor(janela, ALLEGRO_SYSTEM_MOUSE_CURSOR_DEFAULT); //define o cursor do mouse como padrão

    caixa_mensagem=al_load_bitmap(LOCAL_CAIXA); //recebe o bitmap da caixa de dialogo

    //inicializações da struct dia
    d=(Dia*)malloc(sizeof(Dia)); //aloca o espaço da struct
    d->turno=0; //define o turno inicial como 0
    strcpy(d->semana, "Segunda"); //define o primeiro dia da semana como Segunda
    d->dia=1; //define o primeiro dia como 0

    al_get_backbuffer(janela); //nao lembro porque isso está aqui.

    fonte=al_load_font("arial_narrow_7.ttf", 20, 0); //define a fonten normal do jogo
    fontehud=al_load_font("arial_narrow_7.ttf", 12, 0); //define a fonte da HUD dojogo (apenas tem um tamanho menor)
    fontedia2=al_load_font("LinLibertine_RB.ttf", 60, 0);
    fontedia=al_load_font("LinLibertine_RB.ttf", 40, 0);

    fila=al_create_event_queue(); //cria uma fila de eventos no ponteiro fila


    //carregamento de algumas imagens
    hud=al_load_bitmap(HUD); //carrega a iamgem da HUD
    menu=al_load_bitmap(FUNDO_MENU); //carrega fundo do menu de itens
    status=al_load_bitmap(FUNDO_STATUS); //caregga fundo do status
    hud_batalha=al_load_bitmap(HUD_BATALHA); //carrega a hud da batalha

    //carrega todos os icones de localizaçao no mapa. Eu acho isso um pouco inutil por enquanto, porque podemos simplesmente colar eles na imagem
    //de fundo do mapa, sem precisar de novas imagems pra isso
    pos1=al_load_bitmap(LOCAL_ICON);
    pos2=al_load_bitmap(LOCAL_ICON);
    pos3=al_load_bitmap(LOCAL_ICON);
    pos4=al_load_bitmap(LOCAL_ICON);
    pos5=al_load_bitmap(LOCAL_ICON);
    pos6=al_load_bitmap(LOCAL_ICON);

    inicializarHeroi(); //chama a função de inicializar herói, que vimos acima

    inicializarProfessores(); //chama a funcao de inicializar os professores

    srand(time(NULL)); //alimenta o rand()

    return 0;
}

void gameover();

void statusGameover();

void checarCondicao();

void esperarClique(){
    int passar=false;
    while(!passar){
        while(!al_is_event_queue_empty(fila)){
            al_wait_for_event(fila, &evento);
            if(evento.type==ALLEGRO_EVENT_MOUSE_BUTTON_UP){
                passar=true;
            }
        }
    }
}

void escreverMensagem(char arquivo[], int face);

//funcoes de experiencia e level

void ganharExperiencia(int id_conhecimento, int quantidade){
    if(h->classe==1 && id_conhecimento==d->dia-6 && quantidade>0){
        h->c[id_conhecimento].exp+=2*quantidade;
    }
    else{
        h->c[id_conhecimento].exp+=quantidade;
    }
    if(h->c[id_conhecimento].exp>=h->c[id_conhecimento].lvl*UP_EXP){
        //escreverMensagem("Voce subiu de nivel!");
        h->c[id_conhecimento].lvl++;
        h->c[id_conhecimento].h[h->c[id_conhecimento].lvl-1].habilitada=1;
    }
    h->estresse+=MOD_ESTRESSE/10;
    h->ultima=id_conhecimento;
}

void ganharEnergia(int quantidade){
    h->energia+=quantidade;
    if(h->energia>100){
        h->energia=100;
    }
    checarCondicao();
}

void ganharEstresse(int quantidade){
    if(h->classe==4 && quantidade >0){
        h->estresse+=quantidade/2;
    }
    else{
        h->estresse+=quantidade;
    }
    if(h->estresse<0){
        h->estresse=0;
    }
    checarCondicao();
}

int adicionarItem(int id, int apl){ //função que adiciona um item à lista de itens do heroi. Os itens são buscados em um arquivo.
    FILE *fp;
    Item *nova;
    int busca;
    char aux[100];
    fp=fopen(LISTA_ITENS, "r");
    nova=malloc(sizeof(Item));
    while(!feof(fp)){
        fscanf(fp, "%d", &busca);
		if(busca==id){
            nova->id=busca;
            fgetc(fp);
            fscanf(fp, "%50[^;]", nova->nome);
            fgetc(fp);
            fscanf(fp, "%100[^;]", nova->descricao);
            fgetc(fp);
            fscanf(fp, "%100[^;]", nova->imagem);
            fgetc(fp);
            fscanf(fp, "%d", &nova->coorx);
            fgetc(fp);
            fscanf(fp, "%d", &nova->coory);
            nova->aplicado=apl;
            if(apl){
                nova->usado=al_load_bitmap("imagens/used.png");
            }
            nova->prox=i;
            i=nova;
            return -1;
        }
        else{
            fscanf(fp, "%100[^\n]", aux);
        }
    }
    fclose(fp);
    return 0;
}

int aplicarItem(char string[]){
    int quant;
    sscanf(string, "%*s %d", &quant);
    fprintf(stderr, "\nquantidade: %d\n", quant);
    strupr(string);
    if(strstr(string, "AUMENTA")){
		if(strstr(string, "ENERGIA")){
			ganharEnergia(quant);
			return 1;
		}
		else if(strstr(string, "ESTRESSE")){
			ganharEstresse(quant);
			return 1;
		}
		else if(strstr(string, "SORTE")){
			h->sorte+=quant;
			return 1;
		}
		else if(strstr(string, "CONHECIMENTO")){
			if(strstr(string, ICC)||strstr(string, "ICC")){
				ganharExperiencia(0, quant);
				return 1;
			}
			else if(strstr(string, MD)||strstr(string, "MD")){
				ganharExperiencia(1, quant);
				return 1;
			}
			else if(strstr(string, FAC)||strstr(string, "FAC")){
				ganharExperiencia(2, quant);
				return 1;
			}
			else if(strstr(string, CALC1)||strstr(string, "CALC 1")){
				ganharExperiencia(3, quant);
				return 1;
			}
			else if(strstr(string, GA)||strstr(string, "GA")){
				ganharExperiencia(4, quant);
				return 1;
			}
			else if(strstr(string, PROG1)||strstr(string, "PROG 1")){
				ganharExperiencia(5, quant);
				return 1;
			}
		}
	}
	else if(strstr(string, "DIMINUI")){
		if(strstr(string, "ENERGIA")){
			ganharEnergia(-1*quant);
				return 1;
		}
		else if(strstr(string, "ESTRESSE")){
			ganharEstresse(-1*quant);
				return 1;
		}
		else if(strstr(string, "SORTE")){
			h->sorte-=quant;
				return 1;
		}
		else if(strstr(string, "CONHECIMENTO")){
			if(strstr(string, ICC)||strstr(string, "ICC")){
				ganharExperiencia(0, -1*quant);
				return 1;
			}
			else if(strstr(string, MD)||strstr(string, "MD")){
				ganharExperiencia(1, -1*quant);
				return 1;
			}
			else if(strstr(string, FAC)||strstr(string, "FAC")){
				ganharExperiencia(2, -1*quant);
				return 1;
			}
			else if(strstr(string, CALC1)||strstr(string, "CALC 1")){
				ganharExperiencia(3, -1*quant);
				return 1;
			}
			else if(strstr(string, GA)||strstr(string, "GA")){
				ganharExperiencia(4, -1*quant);
				return 1;
			}
			else if(strstr(string, PROG1)||strstr(string, "PROG 1")){
				ganharExperiencia(5, -1*quant);
				return 1;
			}
		}
	}
    return 0;
}

int buscarItem(int busca){
    Item *aux;
    aux=i;
    while(aux!=NULL){
        if(aux->id==busca){
            if(!aux->aplicado){
                aplicarItem(aux->descricao);
                aux->aplicado=1;
                aux->usado=al_load_bitmap("imagens/used.png");
                return 1;
            }
            else{
                return 0;
            }
        }
        else aux=aux->prox;
    }
    return 0;
}

//FUN플O DE FINALIZA플O DO JOGO
void finalizar(){
    //destruicoes dos ponteiros utilizados. Ainda existem muitos ponteiros para destruir.
    al_destroy_display(janela);
    //destruicao dos bitmaps
    al_destroy_bitmap(fundo);
    al_destroy_bitmap(menu);
    al_destroy_bitmap(face);
    al_destroy_bitmap(face2);
    al_destroy_bitmap(status);
    al_destroy_bitmap(caixa_mensagem);
    al_destroy_bitmap(icone);
    al_destroy_bitmap(hud);
    al_destroy_bitmap(hud_batalha);
    al_destroy_bitmap(barra_energia);
    al_destroy_bitmap(barra_estresse);
    //destruicao das fontes
    al_destroy_font(fonte);
    al_destroy_font(fontehud);
    //destruicao das musicas
    al_destroy_audio_stream(musica);
    //destruicao das filas de eventos
    al_destroy_event_queue(fila);
    exit(0);
}

//todas as fases (cenarios) do jogo, em funções que estão explicitadas depois da main
void creditos();

void faseBiblioteca(); //id1, pos1

void faseSaladeAula(); //id2, pos2

void faseLabCom(); //id3, pos3

void faseSalaProfessores(); //id4, pos4

void faseIHS(); //id5, pos5

void faseCantina(); //id6, pos6

void faseCorredor(); //id7

void faseCasa(); //id8

int batalha(); //funcao que chama a batalha do jogo

void faseProvas();

void fadein(int velocidade, char caminho[]);

void fadeout(int velocidade);

void executarEfeitoSonoro(char som[]){
    effect=al_load_audio_stream(som, 4, 1240);
    al_attach_audio_stream_to_mixer(effect, al_get_default_mixer());
    al_set_audio_stream_playing(effect, true);
}

ALLEGRO_AUDIO_STREAM* executarMusica(ALLEGRO_AUDIO_STREAM* audio, char som[]){ //essa função executa alguma musica, sendo passados um ponteiro de musica e o caminho dela
    if(musica){
        al_set_audio_stream_playing(musica, false);
    }
    audio=al_load_audio_stream(som, 4, 1240);
    al_attach_audio_stream_to_mixer(audio, al_get_default_mixer());
    al_set_audio_stream_playing(audio, true);
    al_set_audio_stream_playmode(audio, ALLEGRO_PLAYMODE_LOOP);
    return audio;
}

int checarSemana(){
    if(d->dia>=6){ //quando passar uma semana, chegam as provas
            return 1;
    }
    return 0;
}

int checarDia(){ //essa função checa em qual dia o personagem está. Ela existe porque, para melhor ituição, coloquei para o personagem ir para
                //casa apois clicar no icone de mapa. Assim, o personagem pode ver em qual turno ele está depoos de feitas as coisas
    if(d->turno==3){
        if(checarSemana()){
            faseProvas(d->dia-5);
            musica=executarMusica(musica, MUSIC_SCENE);
        }
        d->turno=0;
        fadeout(5);
        executarEfeitoSonoro("audio/steps.ogg");
        al_rest(4);
        faseCasa();
        return 1;
    }
    return 0;
}

void exibirMensagemDia(int id){
    if(id<6){
        al_clear_to_color(al_map_rgb(0,0,0));
        al_flip_display();
        al_draw_text(fontedia, al_map_rgb(255,255,255), 320, 100, ALLEGRO_ALIGN_CENTER, "Manhã do");
    }
    else{
        al_clear_to_color(al_map_rgb(255,255,255));
        al_flip_display();
        al_draw_text(fontedia, al_map_rgb(0,0,0), 320, 100, ALLEGRO_ALIGN_CENTER, "Manhã do");
    }
    switch(id){
    case 1:
        al_draw_text(fontedia2, al_map_rgb(255,255,255), 320, 150, ALLEGRO_ALIGN_CENTER, "Primeiro Dia");
        al_draw_text(fontedia, al_map_rgb(255,255,255), 320, 250, ALLEGRO_ALIGN_CENTER, "-Restam 120 horas-"); break;
    case 2:
        al_draw_text(fontedia2, al_map_rgb(255,255,255), 320, 150, ALLEGRO_ALIGN_CENTER, "Segundo Dia");
        al_draw_text(fontedia, al_map_rgb(255,255,255), 320, 250, ALLEGRO_ALIGN_CENTER, "-Restam 96 horas-"); break;
    case 3:
        al_draw_text(fontedia2, al_map_rgb(255,255,255), 320, 150, ALLEGRO_ALIGN_CENTER, "Terceiro Dia");
        al_draw_text(fontedia, al_map_rgb(255,255,255), 320, 250, ALLEGRO_ALIGN_CENTER, "-Restam 72 horas-"); break;
    case 4:
        al_draw_text(fontedia2, al_map_rgb(255,255,255), 320, 150, ALLEGRO_ALIGN_CENTER, "Quarto Dia");
        al_draw_text(fontedia, al_map_rgb(255,255,255), 320, 250, ALLEGRO_ALIGN_CENTER, "-Restam 48 horas-"); break;
    case 5:
        al_draw_text(fontedia2, al_map_rgb(255,255,255), 320, 150, ALLEGRO_ALIGN_CENTER, "Quinto Dia");
        al_draw_text(fontedia, al_map_rgb(255,255,255), 320, 250, ALLEGRO_ALIGN_CENTER, "-Restam 24 horas-"); break;
    case 6:
        al_draw_text(fontedia2, al_map_rgb(0,0,0), 320, 150, ALLEGRO_ALIGN_CENTER, "Primeiro Dia");
        al_draw_text(fontedia, al_map_rgb(0,0,0), 320, 250, ALLEGRO_ALIGN_CENTER, "-da Semana de Provas-"); break;
    case 7:
        al_draw_text(fontedia2, al_map_rgb(0,0,0), 320, 150, ALLEGRO_ALIGN_CENTER, "Segundo Dia");
        al_draw_text(fontedia, al_map_rgb(0,0,0), 320, 250, ALLEGRO_ALIGN_CENTER, "-da Semana de Provas-"); break;
    case 8:
        al_draw_text(fontedia2, al_map_rgb(0,0,0), 320, 150, ALLEGRO_ALIGN_CENTER, "Terceiro Dia");
        al_draw_text(fontedia, al_map_rgb(0,0,0), 320, 250, ALLEGRO_ALIGN_CENTER, "-da Semana de Provas-"); break;
    case 9:
        al_draw_text(fontedia2, al_map_rgb(0,0,0), 320, 150, ALLEGRO_ALIGN_CENTER, "Quarto Dia");
        al_draw_text(fontedia, al_map_rgb(0,0,0), 320, 250, ALLEGRO_ALIGN_CENTER, "-da Semana de Provas-"); break;
    case 10:
        al_draw_text(fontedia2, al_map_rgb(0,0,0), 320, 150, ALLEGRO_ALIGN_CENTER, "Ultimo Dia");
        al_draw_text(fontedia, al_map_rgb(0,0,0), 320, 250, ALLEGRO_ALIGN_CENTER, "-da Semana de Provas-"); break;
    case 11:
        al_draw_text(fontedia2, al_map_rgb(0,0,0), 320, 150, ALLEGRO_ALIGN_CENTER, "Primeiro Dia");
        al_draw_text(fontedia, al_map_rgb(0,0,0), 320, 250, ALLEGRO_ALIGN_CENTER, "-das Ferias!!!-"); break;
    }
    al_set_audio_stream_playing(musica, false);
    executarEfeitoSonoro(EFFECT_DAY);
    al_rest(1);
    al_flip_display();
    al_rest(5);
    fadeout(1);
}

void passarDia(){
    d->dia++;
    exibirMensagemDia(d->dia);
    switch(d->dia){
        case 1:
            strcpy(d->semana, "Segunda");
            musica=executarMusica(musica, "audio/primeiro_dia.ogg"); break;
        case 2:
            strcpy(d->semana, "Terca");
            musica=executarMusica(musica, "audio/primeiro_dia.ogg"); break;
        case 3:
            strcpy(d->semana, "Quarta");
            musica=executarMusica(musica, "audio/segundo_dia.ogg"); break;
        case 4:
            strcpy(d->semana, "Quinta");
            musica=executarMusica(musica, "audio/segundo_dia.ogg"); break;
        case 5:
            strcpy(d->semana, "Sexta");
            musica=executarMusica(musica, "audio/terceiro_dia.ogg"); break;
        case 6:
            strcpy(d->semana, "MD");
            musica=executarMusica(musica, "audio/primeiro_dia.ogg"); break;
        case 7:
            strcpy(d->semana, "FAC");
            musica=executarMusica(musica, "audio/segundo_dia.ogg"); break;
        case 8:
            strcpy(d->semana, "Calc 1");
            musica=executarMusica(musica, "audio/segundo_dia.ogg"); break;
        case 9:
            strcpy(d->semana, "GA");
            musica=executarMusica(musica, "audio/terceiro_dia.ogg"); break;
        case 10:
            strcpy(d->semana, "Prog 1");
            musica=executarMusica(musica, "audio/primeiro_dia.ogg"); break;
        case 11:
            musica=executarMusica(musica, "audio/creditos.ogg");
            creditos(); break;
    }

}

int passarTurno(){ //função de passar o turno, que é chamada quando o personagem troca de local
    int luck;
    Item *aux;
    if(h->energia<=0){
        statusGameover();
    }
    if(h->estresse>=100){
        statusGameover();
    }
    if(d->turno==0){
        d->turno++;
        ganharEnergia(-1*MOD_ENERGIA/10);
        checarCondicao();
        return 1;
    }
    if((rand()%100)*h->sorte>=70){ //aqui, chamaremos a fase do Corredor,onde o personagem recebe itens do veterano, dependendo de sua sorte
        luck=(rand()%18 +1)*h->sorte;
        aux=i;
        while(aux!=NULL){
            if(luck==aux->id){
                return 1;
            }
            aux=aux->prox;
        }
        d->turno++;
        faseCorredor(luck);
        return 1;
    }
    else{
        d->turno++;
        ganharEnergia(-1*MOD_ENERGIA/10);
        checarCondicao();
    }
    return 0;
}

//FUN합ES DE EXIBIR IMAGEM
void colocarFundo(char caminho[]){ //função que coloca o background. Acho que nem está sendo usada mais.
    al_destroy_bitmap(fundo);
    fundo=al_load_bitmap(caminho);
    while(!fundo){
        fprintf(stderr, "Deu ruim %s", caminho);
        al_destroy_bitmap(fundo);
        fundo=al_load_bitmap(caminho);
    }
    al_draw_bitmap(fundo, 0, 0, 0);
    al_flip_display();
}

void mostrarAvatar(char caminho[]){ //mostra o avatar no caminho passado por parâmetro
    al_destroy_bitmap(face);
    face=al_load_bitmap(caminho);
    al_draw_bitmap(face, AVATAR_X, AVATAR_Y, 0);
    al_flip_display();
}

//FUN합ES DE BUFFERING
//AS funções de buffering servem pra quando queremos "deletar" uma imagem ou texto da tela. Ja que não há como literalmente fazer isso,
//precisamos apagar a tela inteira e trazer de volta tudo o que estava antes, sem o que queremos deletar. Por isso, fazemos funções que chamam
//coisas mais essenciais, como o fundo, a caixa de dialogo e os avatares.
void bufferingBackground(){
    al_clear_to_color(al_map_rgb(0,0,0));
    al_draw_bitmap(fundo, 0,0,0);
}

void bufferingMessageBox(){
    al_draw_bitmap(caixa_mensagem, BOX_X, BOX_Y, 0);
}

void bufferingAvatar(){
    if(face)al_draw_bitmap(face, AVATAR_X, AVATAR_Y, 0);
}

void checarCondicao(){ //Essa função checa a condição do heroi para definir a cor e a condição das barras de estresse e energia
    al_destroy_bitmap(barra_energia);
    if(h->energia>=VALUE_FINE){
        barra_energia=al_load_bitmap(BAR_FINE);
    }
    else if(h->energia>=VALUE_CAUTION){
        barra_energia=al_load_bitmap(BAR_CAUTION);
    }
    else{
        barra_energia=al_load_bitmap(BAR_DANGER);
    }
    if(h->estresse>=VALUE_FINE){
        barra_estresse=al_load_bitmap(BAR_DANGER);
    }
    else if(h->estresse>=VALUE_CAUTION){
        barra_estresse=al_load_bitmap(BAR_CAUTION);
    }
    else{
        barra_estresse=al_load_bitmap(BAR_FINE);
    }
}

//Mais funções de buffering.
void bufferingHud(){
    bufferingBackground();
    checarCondicao();
    al_draw_bitmap(barra_energia, ENERGIA_BAR_X, ENERGIA_BAR_Y, 0);
    al_draw_bitmap(barra_estresse, STRESS_BAR_X, STRESS_BAR_Y, 0);
    al_draw_bitmap(hud, HUD_X, HUD_Y, 0);
    al_draw_textf(fontehud, al_map_rgb(255,255,255), 64, 454,0, "%d/100", h->energia);
    al_draw_textf(fontehud, al_map_rgb(255,255,255), 64, 411,0, "%d/100", h->estresse);
    al_draw_textf(fonte, al_map_rgb(255,255,255), 300, 417, 0, "%s", d->semana);
    al_draw_textf(fonte, al_map_rgb(255,255,255), 300, 442, 0, "%d", d->turno);
    al_flip_display();
}

void bufferingMenu(){
    al_draw_bitmap(menu, 0, 0, 0);
    Item *aux;
    aux=i;
    while(aux!=NULL){
        aux->img=malloc(sizeof(ALLEGRO_BITMAP*));
        aux->img=al_load_bitmap(aux->imagem);
        al_draw_bitmap(aux->img, aux->coorx, aux->coory, 0);
        /*if(aux->usado!=NULL){
                al_destroy_bitmap(aux->usado);
        }*/
        if(aux->aplicado){
            aux->usado=al_load_bitmap("imagens/used.png");
            al_draw_bitmap(aux->usado, aux->coorx, aux->coory, 0);
        }
        aux=aux->prox;
    }
    al_flip_display();
}

//FUN합ES DE FADEIN/FADEOUT
//Fadein faz uma imagem "ir aparecendo". Praticamente está sendo usada como uma função de colocar os backgrounds das fases, de uma forma mais bonita
void fadein(int velocidade, char caminho[]){
    if (velocidade < 0)
    {
        velocidade = 1;
    }
    else if (velocidade > 15)
    {
        velocidade = 15;
    }
    fundo=al_load_bitmap(caminho);
    int alfa;
    for (alfa = 0; alfa <= 255; alfa += velocidade)
    {
        al_clear_to_color(al_map_rgb(0, 0, 0));
        al_draw_tinted_bitmap(fundo, al_map_rgba(alfa, alfa, alfa, alfa), 0, 0, 0);
        al_flip_display();
        //colocarFundo(caminho, alfa);
        al_rest(0.005);
    }
}

//o fadeout vai simplesmente apagar a tela lentamente, causando um efeito bonito
void fadeout(int velocidade){
    ALLEGRO_BITMAP *buffer;
    buffer=al_create_bitmap(640, 480);
    al_set_target_backbuffer(janela);
    al_set_target_bitmap(buffer);
    al_draw_bitmap(al_get_backbuffer(janela), 0, 0, 0);
    al_set_target_bitmap(al_get_backbuffer(janela));
    if (velocidade <= 0)
    {
        velocidade = 1;
    }
    else if (velocidade > 15)
    {
        velocidade = 15;
    }
    int alfa;
    for(alfa=0;alfa<255;alfa+=velocidade){
        al_clear_to_color(al_map_rgba(0, 0, 0, 0));
        al_draw_tinted_bitmap(buffer, al_map_rgba(255 - alfa, 255 - alfa, 255 - alfa, alfa), 0, 0, 0);
        al_flip_display();
        al_rest(0.005);
    }
}

//buffer pra janela de Status
void bufferingStatus(){
    bufferingBackground();
    al_draw_bitmap(status, 0, 0, 0);
}

void exibirHabilidades(Habilidade *con){ //Função de exibir as habilidades. Acho que ainda não está funcionando corretamente. O ponteiro passado
                                        //já é do tipo da struct conhecimento específica da matéria, cpmo veremos na função a seguir
    int i, line=0;
    for(i=0;i<NUM_HABILIDADES;i++){
        if(con[i].habilitada==1){ //checa se a habilidade está habilitada
            al_draw_textf(fonte, al_map_rgb(255,255,255), 40, 200+line, 0, "%s",con[i].nome);
            al_draw_textf(fonte, al_map_rgb(255,255,255), 40, 225+line, 0, "%s",con[i].efeito);
            line +=60;
        }
    }
    al_flip_display();
}

void exibirConhecimento(int id){ //Função que exibe os conheciemntos (nome, level, etc) no menu de status
    al_draw_text(fonte, al_map_rgb(255,255,255), 40, 140, 0, h->c[id].nome);
    al_draw_textf(fonte, al_map_rgb(255,255,255), 40, 170, 0, "Level: %d  Experiencia: %d", h->c[id].lvl, h->c[id].exp);
    exibirHabilidades(h->c[id].h); //aqui chamamos a função de exibir habilidades, passando ja o ponteiro de habilidade especifico
}

void exibirStatus(){ //Exibe a tela de status do Heroi.
    bool sair=false;
    bufferingBackground();
    al_draw_bitmap(status, 0, 0, 0);
    al_flip_display();
    al_register_event_source(fila, al_get_mouse_event_source());
    while(!sair){
            while(!al_is_event_queue_empty(fila)){
                al_wait_for_event(fila, &evento);
                if(evento.type==ALLEGRO_EVENT_MOUSE_BUTTON_UP){
                    if(evento.mouse.x >= 42&&
                        evento.mouse.x <= 101&&
                        evento.mouse.y >= 46 &&
                        evento.mouse.y <= 126){
                            bufferingStatus();
                            executarEfeitoSonoro(EFFECT_SKILL);
                            exibirConhecimento(0);

                    }
                    else if(evento.mouse.x >= 124&&
                        evento.mouse.x <= 184&&
                        evento.mouse.y >= 48 &&
                        evento.mouse.y <= 108){
                            bufferingStatus();
                            executarEfeitoSonoro(EFFECT_SKILL);
                            exibirConhecimento(1);

                    }
                    else if(evento.mouse.x >= 205&&
                        evento.mouse.x <= 302&&
                        evento.mouse.y >= 44 &&
                        evento.mouse.y <= 110){
                            bufferingStatus();
                            executarEfeitoSonoro(EFFECT_SKILL);
                            exibirConhecimento(2);
                    }
                    else if(evento.mouse.x >= 315&&
                        evento.mouse.x <= 405&&
                        evento.mouse.y >= 43 &&
                        evento.mouse.y <= 114){
                            bufferingStatus();
                            executarEfeitoSonoro(EFFECT_SKILL);
                            exibirConhecimento(3);
                    }
                    else if(evento.mouse.x >= 419&&
                        evento.mouse.x <= 491&&
                        evento.mouse.y >= 44 &&
                        evento.mouse.y <= 111){
                            bufferingStatus();
                            executarEfeitoSonoro(EFFECT_SKILL);
                            exibirConhecimento(4);
                    }
                    else if(evento.mouse.x >= 513&&
                        evento.mouse.x <= 586&&
                        evento.mouse.y >= 38 &&
                        evento.mouse.y <= 119){
                            bufferingStatus();
                            executarEfeitoSonoro(EFFECT_SKILL);
                            exibirConhecimento(5);
                    }
                    else if(evento.mouse.x >= 0&&
                        evento.mouse.x <= 130&&
                        evento.mouse.y >= 433 &&
                        evento.mouse.y <= 480){
                            executarEfeitoSonoro(EFFECT_RETURN);
                            sair=true;
                    }

            }
        }
    }
    bufferingBackground();
    bufferingHud();
}

int exibirMochila(){ //Exibe os itens do heroi
    bool sair=false, retorno =false;
    int usar=-1;
    bufferingBackground();
    al_draw_bitmap(menu, 0, 0, 0);
    Item *aux;
    aux=i;
    while(aux!=NULL){
        aux->img=malloc(sizeof(ALLEGRO_BITMAP*));
        aux->img=al_load_bitmap(aux->imagem);
        al_draw_bitmap(aux->img, aux->coorx, aux->coory, 0);
        /*if(aux->usado!=NULL){
            al_destroy_bitmap(aux->usado);
        }*/
        if(aux->aplicado){
            al_draw_bitmap(aux->usado, aux->coorx, aux->coory, 0);
        }
        aux=aux->prox;
    }
    al_flip_display();
    al_register_event_source(fila, al_get_mouse_event_source());
    while(!sair){
            while(!al_is_event_queue_empty(fila)){
                al_wait_for_event(fila, &evento);
                if(evento.type==ALLEGRO_EVENT_MOUSE_BUTTON_UP){
                    if(evento.mouse.x >= 0&&
                        evento.mouse.x <= 126&&
                        evento.mouse.y >= 0 &&
                        evento.mouse.y <= 46){
                            executarEfeitoSonoro(EFFECT_RETURN);
                            bufferingBackground();
                            aux=i;
                            sair=1;
                            retorno=true;
                    }
                    else if(evento.mouse.x >= 410&&
                        evento.mouse.x <= 495&&
                        evento.mouse.y >= 33 &&
                        evento.mouse.y <= 65){
                            if(usar!=-1){
                                if(buscarItem(usar)){
                                    executarEfeitoSonoro(EFFECT_USE);
                                    bufferingBackground();
                                    bufferingMenu();
                                    usar=-1;
                                }
                                else{
                                    executarEfeitoSonoro(EFFECT_ERROR);
                                }
                            }
                    }
                    else{
                        aux=i;
                        while(aux!=NULL){
                            if(evento.mouse.x >= aux->coorx&&
                            evento.mouse.x <= aux->coorx+ITEM_BOX_X&&
                            evento.mouse.y >= aux->coory &&
                            evento.mouse.y <= aux->coory+ITEM_BOX_Y){
                                usar=aux->id;
                                bufferingBackground();
                                bufferingMenu();
                                executarEfeitoSonoro(EFFECT_ITEM);
                                al_draw_text(fonte, al_map_rgb(255,255,255), 328, 75, ALLEGRO_ALIGN_CENTER, aux->nome);
                                al_draw_text(fonte, al_map_rgb(255,255,255), 320, 110, ALLEGRO_ALIGN_CENTER, aux->descricao);
                                al_flip_display();
                            }
                            aux=aux->prox;
                        }
                    }
            }
        }
    }
    bufferingBackground();
    aux=i;
    while(aux!=NULL){
        al_destroy_bitmap(aux->img);
        aux=aux->prox;
    }
    bufferingHud();
    if(retorno){
        return 1;
    }
    else{
        return 0;
    }
}

void exibirIconesMapa(){
    bufferingBackground();
    al_draw_bitmap(pos1, POS1X, POS1Y, 0);
    al_draw_bitmap(pos2, POS2X, POS2Y, 0);
    al_draw_bitmap(pos3, POS3X, POS3Y, 0);
    al_draw_bitmap(pos4, POS4X, POS4Y, 0);
    al_draw_bitmap(pos5, POS5X, POS5Y, 0);
    al_draw_bitmap(pos6, POS6X, POS6Y, 0);
    al_flip_display();
}

void exibirMapa(char caminho[]){
    bool sair=false;
    fadein(5,FUNDO_MAPA);
    exibirIconesMapa();
    al_register_event_source(fila, al_get_mouse_event_source());
    while(!sair){
            while(!al_is_event_queue_empty(fila)){
                al_wait_for_event(fila, &evento);
                if(evento.type==ALLEGRO_EVENT_MOUSE_AXES){
                    if(evento.mouse.x >= POS1X&&
                        evento.mouse.x <= POS1X+40&&
                        evento.mouse.y >= POS1Y &&
                        evento.mouse.y <= POS1Y+40){
                            al_clear_to_color(al_map_rgba(0,0,0,0));
                            exibirIconesMapa();
                            al_draw_text(fonte, al_map_rgba(0,0,0,255), 90, 440, 0, NOME_BIBLIOTEC);
                            al_flip_display();
                    }
                    else if(evento.mouse.x >= POS2X&&
                        evento.mouse.x <= POS2X+40&&
                        evento.mouse.y >= POS2Y &&
                        evento.mouse.y <= POS2Y+40){
                            al_clear_to_color(al_map_rgba(0,0,0,0));
                            exibirIconesMapa();
                            al_draw_text(fonte, al_map_rgba(0,0,0,255), 90, 440, 0, NOME_SALA);
                            al_flip_display();
                    }
                    else if(evento.mouse.x >= POS3X&&
                        evento.mouse.x <= POS3X+40&&
                        evento.mouse.y >= POS3Y &&
                        evento.mouse.y <= POS3Y+40){
                            al_clear_to_color(al_map_rgba(0,0,0,0));
                            exibirIconesMapa();
                            al_draw_text(fonte, al_map_rgba(0,0,0,255), 90, 440, 0, NOME_LAB);
                            al_flip_display();
                    }
                    else if(evento.mouse.x >= POS4X&&
                        evento.mouse.x <= POS4X+40&&
                        evento.mouse.y >= POS4Y &&
                        evento.mouse.y <= POS4Y+40){
                            al_clear_to_color(al_map_rgba(0,0,0,0));
                            exibirIconesMapa();
                            al_draw_text(fonte, al_map_rgba(0,0,0,255), 90, 440, 0, NOME_PROFESSORES);
                            al_flip_display();
                    }
                    else if(evento.mouse.x >= POS5X&&
                        evento.mouse.x <= POS5X+40&&
                        evento.mouse.y >= POS5Y &&
                        evento.mouse.y <= POS5Y+40){
                            al_clear_to_color(al_map_rgba(0,0,0,0));
                            exibirIconesMapa();
                            al_draw_text(fonte, al_map_rgba(0,0,0,255), 90, 440, 0, NOME_IHS);
                            al_flip_display();
                    }
                    else if(evento.mouse.x >= POS6X&&
                        evento.mouse.x <= POS6X+40&&
                        evento.mouse.y >= POS6Y &&
                        evento.mouse.y <= POS6Y+40){
                            al_clear_to_color(al_map_rgba(0,0,0,0));
                            exibirIconesMapa();
                            al_draw_text(fonte, al_map_rgba(0,0,0,255), 90, 440, 0, NOME_CANTINA);
                            al_flip_display();
                    }
                    else{
                        al_clear_to_color(al_map_rgba(0,0,0,0));
                        exibirIconesMapa();
                    }
                }
                if(evento.type==ALLEGRO_EVENT_MOUSE_BUTTON_UP){
                    if(evento.mouse.x >= POS1X&&
                        evento.mouse.x <= POS1X+40&&
                        evento.mouse.y >= POS1Y &&
                        evento.mouse.y <= POS1Y+40){
                            //sair=true;
                            executarEfeitoSonoro(EFFECT_STEPS);
                            fadeout(5);
                            al_rest(4);
                            passarTurno();
                            faseBiblioteca();
                    }
                    else if(evento.mouse.x >= POS2X&&
                        evento.mouse.x <= POS2X+40&&
                        evento.mouse.y >= POS2Y &&
                        evento.mouse.y <= POS2Y+40){
                            //sair=true;
                            executarEfeitoSonoro(EFFECT_STEPS);
                            fadeout(5);
                            al_rest(4);
                            passarTurno();
                            faseSaladeAula();
                    }
                    else if(evento.mouse.x >= POS3X&&
                        evento.mouse.x <= POS3X+40&&
                        evento.mouse.y >= POS3Y &&
                        evento.mouse.y <= POS3Y+40){
                            //sair=true;
                            executarEfeitoSonoro(EFFECT_STEPS);
                            fadeout(5);
                            al_rest(4);
                            passarTurno();
                            faseLabCom();
                    }
                    else if(evento.mouse.x >= POS4X&&
                        evento.mouse.x <= POS4X+40&&
                        evento.mouse.y >= POS4Y &&
                        evento.mouse.y <= POS4Y+40){
                            //sair=true;
                            executarEfeitoSonoro(EFFECT_STEPS);
                            fadeout(5);
                            al_rest(4);
                            passarTurno();
                            faseSalaProfessores();
                    }
                    else if(evento.mouse.x >= POS5X&&
                        evento.mouse.x <= POS5X+40&&
                        evento.mouse.y >= POS5Y &&
                        evento.mouse.y <= POS5Y+40){
                            //sair=true;
                            executarEfeitoSonoro(EFFECT_STEPS);
                            fadeout(5);
                            al_rest(4);
                            passarTurno();
                            faseIHS();
                    }
                    else if(evento.mouse.x >= POS6X&&
                        evento.mouse.x <= POS6X+40&&
                        evento.mouse.y >= POS6Y &&
                        evento.mouse.y <= POS6Y+40){
                            //sair=true;
                            executarEfeitoSonoro(EFFECT_STEPS);
                            fadeout(5);
                            al_rest(4);
                            passarTurno();
                            faseCantina();
                    }
                    else if(evento.mouse.x >= 540 &&
                            evento.mouse.x <= 600 &&
                            evento.mouse.y >= 8 &&
                            evento.mouse.y <= 28){
                                executarEfeitoSonoro(EFFECT_RETURN);
                                sair = true;
                            }
                }
            }
    }
    fadeout(5);
    fadein(5, caminho);
}

//FUN합ES DE HUD

int contarItens(){
    Item*aux;
    int cont=0;
    aux=i;
    while(aux!=NULL){
        aux=aux->prox;
        cont++;
    }
    return cont;
}

int * gravarItens(){
    int *vet=(int*)malloc(19*sizeof(int));
    int i;
    vet[0]=d->turno;
    vet[1]=d->dia;
    vet[2]=h->energia;
    vet[3]=h->estresse;
    vet[4]=h->sorte;
    vet[5]=h->ultima;
    int j=6;
    for(i=0;i<6;i++){
        vet[j]=h->c[i].lvl;
        j++;
        vet[j]=h->c[i].exp;
        j++;
    }
    vet[18]=h->classe;
    return vet;
}

void gravarInventario(FILE *arq, int num){
    Item *aux=i;
    while(aux!=NULL){
        fprintf(arq, "%d %d\n", aux->id, aux->aplicado);
        aux=aux->prox;
    }
    fclose(arq);
}

void savegame(){
    FILE *arq, *arqi;
    int *vetorsave; //18
    int numItens=contarItens();
    vetorsave=gravarItens();
    colocarFundo(MENU_SAVE);
    al_destroy_bitmap(op);
    op=al_load_bitmap(MENU_SAVE);
    al_draw_bitmap(op, 0, 0, 0);
    al_flip_display();
    al_register_event_source(fila, al_get_mouse_event_source());
    int sair =0;
    while(!sair){
        while(!al_is_event_queue_empty(fila)){
            al_wait_for_event(fila, &evento);
            if(evento.type==ALLEGRO_EVENT_MOUSE_BUTTON_UP){
                if(evento.mouse.x>=50 &&
                   evento.mouse.x<=178 &&
                   evento.mouse.y>=200 &&
                   evento.mouse.y<=232){
                       bufferingBackground();
                       al_draw_bitmap(op, 0, 0, 0);
                       al_flip_display();
                       arq=fopen("save_01.dat", "w");
                       if(!arq){
                            executarEfeitoSonoro(EFFECT_ERROR);
                            al_draw_text(fonte, al_map_rgb(255,255,255), 330,300, 0, "Arquivo vazio!");
                            al_flip_display();
                       }
                       else{
                            fwrite(vetorsave, sizeof(int), 19+numItens, arq);
                            arqi=fopen("itens_01.txt", "w");
                            gravarInventario(arqi, numItens);
                            sair=1;
                       }
                }
                else if(evento.mouse.x>=50 &&
                        evento.mouse.x<=178 &&
                        evento.mouse.y>=263 &&
                        evento.mouse.y<=295){
                           bufferingBackground();
                           al_draw_bitmap(op, 0, 0, 0);
                           al_flip_display();
                           arq=fopen("save_02.dat", "w");
                           if(!arq){
                                executarEfeitoSonoro(EFFECT_ERROR);
                                al_draw_text(fonte, al_map_rgb(255,255,255), 330,300, 0, "Arquivo vazio!");
                                al_flip_display();
                           }
                           else{
                                fwrite(vetorsave, sizeof(int), 19+numItens, arq);
                                arqi=fopen("itens_02.txt", "w");
                                gravarInventario(arqi, numItens);
                                sair=1;

                           }

                }
                else if(evento.mouse.x>=50 &&
                        evento.mouse.x<=178 &&
                        evento.mouse.y>=327 &&
                        evento.mouse.y<=359){
                            bufferingBackground();
                           al_draw_bitmap(op, 0, 0, 0);
                            al_flip_display();
                           arq=fopen("save_03.dat", "w");
                           if(!arq){
                                executarEfeitoSonoro(EFFECT_ERROR);
                                al_draw_text(fonte, al_map_rgb(255,255,255), 330,300, 0, "Arquivo vazio!");
                                al_flip_display();
                           }
                           else{
                                fwrite(vetorsave, sizeof(int), 19+numItens, arq);
                                arqi=fopen("itens_03.txt", "w");
                                gravarInventario(arqi, numItens);
                                sair=1;

                           }
                }
                else if(evento.mouse.x>=50 &&
                        evento.mouse.x<=178 &&
                        evento.mouse.y>=390 &&
                        evento.mouse.y<=422){
                            bufferingBackground();
                           al_draw_bitmap(op, 0, 0, 0);
                            al_flip_display();
                           arq=fopen("save_04.dat", "w");
                           if(!arq){
                                executarEfeitoSonoro(EFFECT_ERROR);
                                al_draw_text(fonte, al_map_rgb(255,255,255), 330,300, 0, "Arquivo vazio!");
                                al_flip_display();
                           }
                           else{
                                fwrite(vetorsave, sizeof(int), 19+numItens, arq);
                                arqi=fopen("itens_04.txt", "w");
                                gravarInventario(arqi, numItens);
                                sair=1;

                           }
                }
            }
        }
    }
    fclose(arq);
    free(vetorsave);
    fadeout(5);
}

void exibirHud(char caminho[]){
    bufferingBackground();
    checarCondicao();
    al_draw_bitmap(barra_energia, ENERGIA_BAR_X, ENERGIA_BAR_Y, 0);
    al_draw_bitmap(barra_estresse, STRESS_BAR_X, STRESS_BAR_Y, 0);
    al_draw_bitmap(hud, HUD_X, HUD_Y, 0);
    al_draw_textf(fontehud, al_map_rgb(255,255,255), 64, 454,0, "%d/100", h->energia);
    al_draw_textf(fontehud, al_map_rgb(255,255,255), 64, 411,0, "%d/100", h->estresse);
    al_draw_textf(fonte, al_map_rgb(255,255,255), 300, 417, 0, "%s", d->semana);
    al_draw_textf(fonte, al_map_rgb(255,255,255), 300, 442, 0, "%d", d->turno);
    al_flip_display();
    int passar;
    passar=false;
        while(!passar){
            while(!al_is_event_queue_empty(fila)){
                al_wait_for_event(fila, &evento);
                if(evento.type==ALLEGRO_EVENT_MOUSE_BUTTON_UP){
                    if(evento.mouse.x >= 593&&
                        evento.mouse.x <= 628&&
                        evento.mouse.y >= 430 &&
                        evento.mouse.y <= 472){
                            executarEfeitoSonoro(EFFECT_MENU);
                            fadeout(5);
                            if(!strcmp(caminho, FUNDO_CASA)){
                                savegame();
                                fadeout(5);
                                passarDia();
                                executarEfeitoSonoro(EFFECT_STEPS);
                                al_rest(4);
                                fprintf(stderr, "%d\n", d->dia);
                                if(d->dia==6) {
                                        batalha(0);
                                        musica=executarMusica(musica, "audio/primeiro_dia.ogg");
                                        executarEfeitoSonoro(EFFECT_STEPS);
                                        al_rest(4);
                                }
                                faseIHS();
                            }
                            else if(!checarDia()){
                                exibirMapa(caminho);
                            }
                        }
                    else if(evento.mouse.x >= 543&&
                        evento.mouse.x <= 577&&
                        evento.mouse.y >= 422 &&
                        evento.mouse.y <= 474){
                            executarEfeitoSonoro(EFFECT_MENU);
                            exibirMochila();
                        }
                    else if(evento.mouse.x >= 479&&
                        evento.mouse.x <= 528&&
                        evento.mouse.y >= 427 &&
                        evento.mouse.y <= 476){
                            executarEfeitoSonoro(EFFECT_MENU);
                            exibirStatus();
                        }

                }
                if(evento.type==ALLEGRO_EVENT_MOUSE_AXES){
                    if(evento.mouse.x >= 593&&
                        evento.mouse.x <= 628&&
                        evento.mouse.y >= 430 &&
                        evento.mouse.y <= 472){
                            al_clear_to_color(al_map_rgba(0,0,0,0));
                            bufferingHud();
                            al_draw_text(fonte, al_map_rgba(0,0,0,255), 630, 400, ALLEGRO_ALIGN_RIGHT, "Mapa");
                            al_flip_display();
                        }
                    else if(evento.mouse.x >= 543&&
                        evento.mouse.x <= 577&&
                        evento.mouse.y >= 422 &&
                        evento.mouse.y <= 474){
                            al_clear_to_color(al_map_rgba(0,0,0,0));
                            bufferingHud();
                            al_draw_text(fonte, al_map_rgba(0,0,0,255), 590, 400, ALLEGRO_ALIGN_RIGHT, "Mochila");
                            al_flip_display();
                        }
                    else if(evento.mouse.x >= 479&&
                        evento.mouse.x <= 528&&
                        evento.mouse.y >= 427 &&
                        evento.mouse.y <= 476){
                            al_clear_to_color(al_map_rgba(0,0,0,0));
                            bufferingHud();
                            al_draw_text(fonte, al_map_rgba(0,0,0,255), 530, 400, ALLEGRO_ALIGN_RIGHT, "Status");
                            al_flip_display();
                        }
                    else{
                        al_clear_to_color(al_map_rgba(0,0,0,0));
                        bufferingHud();
                    }


                }

            }
        }

}

//FUN합ES DE ESCREVER MENSAGEM
void exibirCaixadeMensagem(){
    int alfa;
    for (alfa = 0; alfa <= 100; alfa +=1)
    {
        al_draw_tinted_bitmap(caixa_mensagem, al_map_rgba(alfa, alfa, alfa, alfa), BOX_X, BOX_Y, 0);
        al_flip_display();
        al_rest(0.005);
    }
    al_draw_tinted_bitmap(caixa_mensagem, al_map_rgba(alfa, alfa, alfa, alfa), BOX_X, BOX_Y, 0);
}

void exibirMensagem(char arquivo[]){
    al_register_event_source(fila, al_get_mouse_event_source());
    char linha1[50], linha2[50], linha3[50];
    FILE *f;
    bufferingMessageBox();
    f=fopen(arquivo, "r");
            if(!feof(f)){
                    fscanf(f, "%100[^\n]", linha1);
                    al_draw_text(fonte, al_map_rgb(255,255,255), TEXT_ALL, TEXT_LINE1, ALLEGRO_ALIGN_LEFT, linha1);
                    fgetc(f);
                    if(!feof(f)){
                            fscanf(f, "%100[^\n]", linha2);
                            al_draw_text(fonte, al_map_rgb(255,255,255), TEXT_ALL, TEXT_LINE2, ALLEGRO_ALIGN_LEFT, linha2);
                            fgetc(f);
                            if(!feof(f)){
                                    fscanf(f, "%100[^\n]", linha3);
                                    al_draw_text(fonte, al_map_rgb(255,255,255), TEXT_ALL, TEXT_LINE3, ALLEGRO_ALIGN_LEFT, linha3);
                                    fgetc(f);
                            }
                    }
            }
            al_flip_display();
    fclose(f);
}

void escreverMensagem(char arquivo[], int face){
    al_register_event_source(fila, al_get_mouse_event_source());
    char linha1[50], linha2[50], linha3[50];
    FILE *f;
    f=fopen(arquivo, "r");
    exibirCaixadeMensagem();
    while(!feof(f)){
            if(!feof(f)){
                    fscanf(f, "%100[^\n]", linha1);
                    al_draw_text(fonte, al_map_rgb(255,255,255), TEXT_ALL, TEXT_LINE1, ALLEGRO_ALIGN_LEFT, linha1);
                    fgetc(f);
                    if(!feof(f)){
                            fscanf(f, "%100[^\n]", linha2);
                            al_draw_text(fonte, al_map_rgb(255,255,255), TEXT_ALL, TEXT_LINE2, ALLEGRO_ALIGN_LEFT, linha2);
                            fgetc(f);
                            if(!feof(f)){
                                    fscanf(f, "%100[^\n]", linha3);
                                    al_draw_text(fonte, al_map_rgb(255,255,255), TEXT_ALL, TEXT_LINE3, ALLEGRO_ALIGN_LEFT, linha3);
                                    fgetc(f);
                            }
                    }
            }
            al_flip_display();
            esperarClique();
            executarEfeitoSonoro(EFFECT_BUTTON);
            bufferingBackground();
            if(face!=0)bufferingAvatar();
            bufferingMessageBox();
    }
    fclose(f);
}

void introducaoJogo();

void mainMenu();

int jogoDaVelha();

int main()
{
    if(inicializar()){
        fprintf(stderr, "Erro!");
        return 0;
    }
    mainMenu();
    finalizar();
    fprintf(stderr, "Saindo do jogo...");
    return 0;
}

void habilitarHabilidades(){
    int i, j;
    for(i=0;i<6;i++){
        for(j=0;j<4;j++){
            if(h->c[i].lvl>=j+1){
                h->c[i].h[j].habilitada=1;
            }
        }
    }
}

void aplicarLoad(int *vet){
    d->turno=vet[0];
    d->dia=vet[1];
    h->energia=vet[2];
    h->estresse=vet[3];
    h->sorte=vet[4];
    h->ultima=vet[5];
    int j=6, i;
    for(i=0;i<6;i++){
        h->c[i].lvl=vet[j];
        j++;
        h->c[i].exp=vet[j];
        j++;
    }
    h->classe=vet[18];
    habilitarHabilidades();
}

void carregarItens(FILE *arq){
    int itemId, apl;
    while(!feof(arq)){
        fscanf(arq, "%d %d", &itemId, &apl);
        adicionarItem(itemId, apl);
        fgetc(arq);
    }
}

void saveMenu(){
    FILE *arq, *arqi;
    colocarFundo(FUNDO_MENU2);
    al_destroy_bitmap(op);
    op=al_load_bitmap(MENU_SAVE);
    al_draw_bitmap(op, 0, 0, 0);
    al_flip_display();
    al_register_event_source(fila, al_get_mouse_event_source());
    int sair =0, *vet=(int*)malloc(19*sizeof(int));
    while(!sair){
        while(!al_is_event_queue_empty(fila)){
            al_wait_for_event(fila, &evento);
            if(evento.type==ALLEGRO_EVENT_MOUSE_BUTTON_UP){
                if(evento.mouse.x>=50 &&
                   evento.mouse.x<=178 &&
                   evento.mouse.y>=200 &&
                   evento.mouse.y<=232){

                       bufferingBackground();
                       al_draw_bitmap(op, 0, 0, 0);
                       al_flip_display();
                       arq=fopen("save_01.dat", "r");
                       arqi=fopen("itens_01.txt", "r");
                       if(!arq || !arqi){
                            executarEfeitoSonoro(EFFECT_ERROR);
                            al_draw_text(fonte, al_map_rgb(255,255,255), 330,300, 0, "Arquivo vazio!");
                            al_flip_display();
                       }
                       else{
                            fread(vet, sizeof(int), 18, arq);
                            aplicarLoad(vet);
                            carregarItens(arqi);
                            colocarFundo(FUNDO_MENU2_ZOOM);
                            al_rest(1);
                            fadeout(5);
                            passarDia();
                            executarEfeitoSonoro(EFFECT_STEPS);
                            al_rest(4);
                            fprintf(stderr, "%d\n", d->dia);
                                if(d->dia==6) {
                                        faseProvas(0);
                                        musica=executarMusica(musica, "audio/primeiro_dia.ogg");
                                        executarEfeitoSonoro(EFFECT_STEPS);
                                        al_rest(4);
                                }
                            faseIHS();
                       }
                }
                else if(evento.mouse.x>=50 &&
                        evento.mouse.x<=178 &&
                        evento.mouse.y>=263 &&
                        evento.mouse.y<=295){
                           bufferingBackground();
                           al_draw_bitmap(op, 0, 0, 0);
                           al_flip_display();
                           arq=fopen("save_02.dat", "r");
                           arqi=fopen("itens_02.txt", "r");
                           if(!arq|| !arqi){
                                executarEfeitoSonoro(EFFECT_ERROR);
                                al_draw_text(fonte, al_map_rgb(255,255,255), 330,300, 0, "Arquivo vazio!");
                                al_flip_display();
                           }
                           else{
                                fread(vet, sizeof(int), 18, arq);
                                aplicarLoad(vet);
                                carregarItens(arqi);
                                colocarFundo(FUNDO_MENU2_ZOOM);
                                al_rest(1);
                                fadeout(5);
                                passarDia();
                                executarEfeitoSonoro(EFFECT_STEPS);
                                al_rest(4);
                                fprintf(stderr, "%d\n", d->dia);
                                if(d->dia==6) {
                                        faseProvas(0);
                                        musica=executarMusica(musica, "audio/primeiro_dia.ogg");
                                        executarEfeitoSonoro(EFFECT_STEPS);
                                        al_rest(4);
                                }
                                faseIHS();
                           }

                }
                else if(evento.mouse.x>=50 &&
                        evento.mouse.x<=178 &&
                        evento.mouse.y>=327 &&
                        evento.mouse.y<=359){
                            bufferingBackground();
                           al_draw_bitmap(op, 0, 0, 0);
                            al_flip_display();
                           arq=fopen("save_03.dat", "r");
                           arqi=fopen("itens_03.txt", "r");
                           if(!arq|| !arqi){
                                executarEfeitoSonoro(EFFECT_ERROR);
                                al_draw_text(fonte, al_map_rgb(255,255,255), 330,300, 0, "Arquivo vazio!");
                                al_flip_display();
                           }
                           else{
                                fread(vet, sizeof(int), 18, arq);
                                aplicarLoad(vet);
                                carregarItens(arqi);
                                colocarFundo(FUNDO_MENU2_ZOOM);
                                al_rest(1);
                                fadeout(5);
                                passarDia();
                                executarEfeitoSonoro(EFFECT_STEPS);
                                al_rest(4);
                                fprintf(stderr, "%d\n", d->dia);
                                if(d->dia==6) {
                                        faseProvas(0);
                                        musica=executarMusica(musica, "audio/primeiro_dia.ogg");
                                        executarEfeitoSonoro(EFFECT_STEPS);
                                        al_rest(4);
                                }
                                faseIHS();
                           }
                }
                else if(evento.mouse.x>=50 &&
                        evento.mouse.x<=178 &&
                        evento.mouse.y>=390 &&
                        evento.mouse.y<=422){
                            bufferingBackground();
                           al_draw_bitmap(op, 0, 0, 0);
                            al_flip_display();
                           arq=fopen("save_04.dat", "r");
                           arqi=fopen("itens_04.txt", "r");
                           if(!arq|| !arqi){
                                executarEfeitoSonoro(EFFECT_ERROR);
                                al_draw_text(fonte, al_map_rgb(255,255,255), 330,300, 0, "Arquivo vazio!");
                                al_flip_display();
                           }
                           else{
                                fread(vet, sizeof(int), 18, arq);
                                aplicarLoad(vet);
                                carregarItens(arqi);
                                colocarFundo(FUNDO_MENU2_ZOOM);
                                al_rest(1);
                                fadeout(5);
                                passarDia();
                                executarEfeitoSonoro(EFFECT_STEPS);
                                al_rest(4);
                                fprintf(stderr, "%d\n", d->dia);
                                if(d->dia==6) {
                                        faseProvas(0);
                                        musica=executarMusica(musica, "audio/primeiro_dia.ogg");
                                        executarEfeitoSonoro(EFFECT_STEPS);
                                        al_rest(4);
                                }
                                faseIHS();
                           }
                }
            }
        }
    }

}

void mainMenu(){
    musica = executarMusica(musica, "audio/title.ogg");
    al_rest(1);
    colocarFundo(FUNDO_MENU1);
    //esperarClique();
    //executarEfeitoSonoro(EFFECT_MENU);
    op=al_load_bitmap(MENU_OP);
    al_draw_bitmap(op, 0, 0, 0);
    al_flip_display();
    al_register_event_source(fila, al_get_mouse_event_source());
    int sair =0;
    while(!sair){
        while(!al_is_event_queue_empty(fila)){
            al_wait_for_event(fila, &evento);
            if(evento.type==ALLEGRO_EVENT_MOUSE_BUTTON_UP){
                if(evento.mouse.x>=245 &&
                   evento.mouse.x<=365 &&
                   evento.mouse.y>=300 &&
                   evento.mouse.y<=330){
                       executarEfeitoSonoro(EFFECT_ITEM);
                       colocarFundo(FUNDO_MENU1_ZOOM);
                       al_rest(1);
                       fadeout(1);
                       introducaoJogo();
                }
                else if(evento.mouse.x>=242 &&
                        evento.mouse.x<=370 &&
                        evento.mouse.y>=340 &&
                        evento.mouse.y<=367){
                            executarEfeitoSonoro(EFFECT_ITEM);
                            colocarFundo(FUNDO_MENU1_ZOOM);
                            al_rest(1);
                            saveMenu();
                }
                else if(evento.mouse.x>=280 &&
                        evento.mouse.x<=330 &&
                        evento.mouse.y>=390 &&
                        evento.mouse.y<=420){
                            executarEfeitoSonoro(EFFECT_ITEM);
                            colocarFundo(FUNDO_MENU1_ZOOM);
                            al_rest(1);
                            fadeout(5);
                            finalizar();
                }
            }
        }
    }
}

void mensagemSelecionarClasse(int numClasse){
    bufferingBackground();
    switch(numClasse){
        case 1:
            mostrarAvatar(AVATAR_RAMON);
            break;
        case 2:
            mostrarAvatar(AVATAR_JOAO);
            break;
        case 3:
            mostrarAvatar(AVATAR_OSORIO);
            break;
        case 4:
            mostrarAvatar(AVATAR_TONHO);
            break;
    }
}

void selecionarClasse(){
    al_destroy_bitmap(face);
    face=al_load_bitmap("imagens/char_select.png");
    al_draw_bitmap(face, 0, 0, 0);
    exibirCaixadeMensagem();
    int sair=0;
    while(!sair){
        while(!al_is_event_queue_empty(fila)){
            al_wait_for_event(fila, &evento);
            if(evento.type==ALLEGRO_EVENT_MOUSE_AXES){
                if(evento.mouse.x>=99 &&
                   evento.mouse.x<=235 &&
                   evento.mouse.y>=17 &&
                   evento.mouse.y<=189){
                       bufferingBackground();
                       al_draw_bitmap(face, 0, 0, 0);
                       exibirMensagem("mensagens/escolha_ramon.txt");
                       al_flip_display();
                   }
                else if(evento.mouse.x >=98 &&
                   evento.mouse.x<=234 &&
                   evento.mouse.y>=203 &&
                   evento.mouse.y<=375){
                       bufferingBackground();
                       al_draw_bitmap(face, 0, 0, 0);
                       exibirMensagem("mensagens/escolha_joao.txt");
                       al_flip_display();
                }
                else if(evento.mouse.x>=396&&
                   evento.mouse.x<=532 &&
                   evento.mouse.y>=17 &&
                   evento.mouse.y<=189){
                       bufferingBackground();
                       al_draw_bitmap(face, 0, 0, 0);
                       exibirMensagem("mensagens/escolha_osorio.txt");
                       al_flip_display();
                   }
                else if(evento.mouse.x>=397 &&
                   evento.mouse.x<=533 &&
                   evento.mouse.y>=203 &&
                   evento.mouse.y<=375){
                       bufferingBackground();
                       al_draw_bitmap(face, 0, 0, 0);
                       exibirMensagem("mensagens/escolha_tonho.txt");
                       al_flip_display();
                }
                else{
                       bufferingBackground();
                       al_draw_bitmap(face, 0, 0, 0);
                       bufferingMessageBox();
                       al_flip_display();
                }
            }
            if(evento.type==ALLEGRO_EVENT_MOUSE_BUTTON_UP){
                if(evento.mouse.x>=99 &&
                   evento.mouse.x<=235 &&
                   evento.mouse.y>=17 &&
                   evento.mouse.y<=189){
                       h->classe=1;
                       sair=1;
                   }
                else if(evento.mouse.x >=98 &&
                   evento.mouse.x<=234 &&
                   evento.mouse.y>=203 &&
                   evento.mouse.y<=375){
                       h->classe=2;
                       sair=1;
                }
                else if(evento.mouse.x>=396&&
                   evento.mouse.x<=532 &&
                   evento.mouse.y>=17 &&
                   evento.mouse.y<=189){
                       h->classe=3;
                       h->sorte*=2;
                       sair=1;
                   }
                else if(evento.mouse.x>=397 &&
                   evento.mouse.x<=533 &&
                   evento.mouse.y>=203 &&
                   evento.mouse.y<=375){
                       h->classe=4;
                       sair=1;
                }
            }
        }
    }
    mensagemSelecionarClasse(h->classe);
}

void introducaoJogo(){
    musica=executarMusica(musica, MUSIC_INTRO);
    al_rest(5);
    fadein(5, FUNDO_LAB);
    mostrarAvatar(AVATAR_SERGIO);
    escreverMensagem(DIALOGO_INTRO, 1);
    bufferingBackground();
    mostrarAvatar(AVATAR_OSORIO);
    escreverMensagem(OSORIO_INTRO, 1);
    bufferingBackground();
    mostrarAvatar(AVATAR_JOAO);
    escreverMensagem(JOAO_INTRO, 1);
    bufferingBackground();
    mostrarAvatar(AVATAR_TONHO);
    escreverMensagem(TONHO_INTRO, 1);
    bufferingBackground();
    mostrarAvatar(AVATAR_RAMON);
    escreverMensagem(RAMON_INTRO, 1);
    bufferingBackground();
    mostrarAvatar(AVATAR_SERGIO);
    escreverMensagem("mensagens/intro_dialogo_sergio2.txt", 1);
    bufferingBackground();
    selecionarClasse();
    escreverMensagem("mensagens/intro_dialogo_fim.txt", 1);
    exibirMensagemDia(d->dia);
    musica=executarMusica(musica, "audio/primeiro_dia.ogg");
    executarEfeitoSonoro(EFFECT_STEPS);
    al_rest(3);
    fadein(5, FUNDO_IHS);
    exibirHud(FUNDO_IHS);
}

void faseBiblioteca(){
    al_destroy_bitmap(fundo);
    fadein(5, FUNDO_BIBLIOTECA);
    al_destroy_bitmap(hud);
    hud=al_load_bitmap("imagens/hud_biblioteca.png");
    al_draw_bitmap(hud, 0, 0, 0);
    exibirMensagem("mensagens/dialogo_biblioteca_01.txt");
    int passar;
    passar=false;
        while(!passar){
            while(!al_is_event_queue_empty(fila)){
                al_wait_for_event(fila, &evento);
                if(evento.type==ALLEGRO_EVENT_MOUSE_BUTTON_UP){
                    if(evento.mouse.x>=123 &&
                       evento.mouse.x<=317 &&
                       evento.mouse.y>=15 &&
                       evento.mouse.y<=56 ){
                           bufferingBackground();
                           switch(rand()%3){
                           case 0:
                               exibirMensagem("mensagens/dialogo_estudo_md_1.txt");
                            break;
                           case 1:
                               exibirMensagem("mensagens/dialogo_estudo_md_2.txt");
                            break;
                           case 2:
                               exibirMensagem("mensagens/dialogo_estudo_md_3.txt");
                            break;
                           }
                           esperarClique();
                           ganharExperiencia(1, MOD_CONHECIMENTO);
                           passar=true;
                    }
                    else if(evento.mouse.x>=331 &&
                       evento.mouse.x<=525 &&
                       evento.mouse.y>=16 &&
                       evento.mouse.y<=54 ){
                           bufferingBackground();
                           switch(rand()%3){
                           case 0:
                               exibirMensagem("mensagens/dialogo_estudo_fac_1.txt");
                            break;
                           case 1:
                               exibirMensagem("mensagens/dialogo_estudo_fac_2.txt");
                            break;
                           case 2:
                               exibirMensagem("mensagens/dialogo_estudo_fac_3.txt");
                            break;
                           }
                           esperarClique();
                           ganharExperiencia(2, MOD_CONHECIMENTO);
                           passar=true;
                    }
                    else if(evento.mouse.x>=16 &&
                       evento.mouse.x<=208 &&
                       evento.mouse.y>=64 &&
                       evento.mouse.y<=102 ){
                           bufferingBackground();
                           switch(rand()%3){
                           case 0:
                               exibirMensagem("mensagens/dialogo_estudo_c1_1.txt");
                            break;
                           case 1:
                               exibirMensagem("mensagens/dialogo_estudo_c1_2.txt");
                            break;
                           case 2:
                               exibirMensagem("mensagens/dialogo_estudo_c1_3.txt");
                            break;
                           }
                           esperarClique();
                           ganharExperiencia(3, MOD_CONHECIMENTO);
                           passar=true;
                    }
                    else if(evento.mouse.x>=224 &&
                       evento.mouse.x<=416 &&
                       evento.mouse.y>=64 &&
                       evento.mouse.y<=102 ){
                           bufferingBackground();
                           switch(rand()%3){
                           case 0:
                               exibirMensagem("mensagens/dialogo_estudo_ga_1.txt");
                            break;
                           case 1:
                               exibirMensagem("mensagens/dialogo_estudo_ga_2.txt");
                            break;
                           case 2:
                               exibirMensagem("mensagens/dialogo_estudo_ga_3.txt");
                            break;
                           }
                           esperarClique();
                           ganharExperiencia(4, MOD_CONHECIMENTO);
                           passar=true;
                    }
                    else if(evento.mouse.x>=432 &&
                       evento.mouse.x<=624 &&
                       evento.mouse.y>=64 &&
                       evento.mouse.y<=102 ){
                           bufferingBackground();
                           switch(rand()%3){
                           case 0:
                               exibirMensagem("mensagens/dialogo_estudo_prog_1.txt");
                            break;
                           case 1:
                               exibirMensagem("mensagens/dialogo_estudo_prog_2.txt");
                            break;
                           case 2:
                               exibirMensagem("mensagens/dialogo_estudo_prog_3.txt");
                            break;
                           }
                           esperarClique();
                           ganharExperiencia(5, MOD_CONHECIMENTO);
                           passar=true;
                    }
                }
            }
        }
    al_destroy_bitmap(hud);
    hud=al_load_bitmap(HUD);
    fadeout(10);
    fadein(10, FUNDO_BIBLIOTECA);
    exibirMensagem("mensagens/dialogo_biblioteca_02.txt");
    esperarClique();
    exibirHud(FUNDO_BIBLIOTECA);
}

void faseSaladeAula(){
    static int vet[5] = {0,0,0,0,0};
    al_destroy_bitmap(fundo);
    fadein(5, FUNDO_SALADEAULA);
    switch(d->dia){
    case 1:
        if(vet[d->dia]==0){
            mostrarAvatar(AVATAR_NAUFEL);
            escreverMensagem("mensagens/dialogo_aula_naufel_01.txt", 1);
            bufferingBackground();
            escreverMensagem("mensagens/dialogo_aula_naufel_02.txt", 0);
            ganharExperiencia(1, MOD_CONHECIMENTO*2);
        vet[d->dia]=1;
        }
        else{
            escreverMensagem("mensagens/dialogo_aula_vazio.txt", 0);
        }
        break;
    case 2:
        if(vet[d->dia]==0){
                mostrarAvatar(AVATAR_QUINET);
                escreverMensagem("mensagens/dialogo_aula_quinet_01.txt", 1);
                bufferingBackground();
                escreverMensagem("mensagens/dialogo_aula_quinet_02.txt", 0);
                ganharExperiencia(2, MOD_CONHECIMENTO*2);
                vet[d->dia]=1;
        }
        else{
            escreverMensagem("mensagens/dialogo_aula_vazio.txt", 0);
        }
        break;
    case 3:
        if(vet[d->dia]==0){
                mostrarAvatar(AVATAR_ISABEL);
                escreverMensagem("mensagens/dialogo_aula_bel_01.txt", 1);
                ganharExperiencia(3, MOD_CONHECIMENTO*2);
                vet[d->dia]=1;
        }
        else{
            escreverMensagem("mensagens/dialogo_aula_vazio.txt", 0);
        }
        break;
    case 4:
        if(vet[d->dia]==0){
                mostrarAvatar(AVATAR_ANTONIO);
                escreverMensagem("mensagens/dialogo_aula_antonio_01.txt", 1);
                fadeout(5);
                al_rest(2);
                executarEfeitoSonoro(RISADA_ANTONIO);
                fadein(100, FUNDO_SALADEAULA);
                mostrarAvatar(AVATAR_ANTONIO);
                escreverMensagem("mensagens/dialogo_aula_antonio_02.txt", 0);
                ganharExperiencia(4, MOD_CONHECIMENTO*2);
                vet[d->dia]=1;
        }
        else{
            escreverMensagem("mensagens/dialogo_aula_vazio.txt", 0);
        }
        break;
    case 5:
        if(vet[d->dia]==0){
                escreverMensagem("mensagens/dialogo_aula_sergio_1_ 01.txt", 0);
                ganharExperiencia(5, MOD_CONHECIMENTO*2);
                mostrarAvatar(AVATAR_SERGIO);
                vet[d->dia]=1;
        }
        else{
            escreverMensagem("mensagens/dialogo_aula_vazio.txt", 0);
        }
        break;
    default:
        escreverMensagem("mensagens/dialogo_aula_vazio.txt", 0);
        break;
    }
    if(!vet[d->dia]){
            fadeout(10);
            fadein(10, FUNDO_SALADEAULA);
            exibirMensagem("mensagens/dialogo_aula_02.txt");
            esperarClique();
    }
    exibirHud(FUNDO_SALADEAULA);
}

void faseCorredor(int luck){
    al_destroy_bitmap(fundo);
    fadein(5, FUNDO_CORREDOR);
    adicionarItem(luck, 0);
    switch(h->classe){
    case 1:
        mostrarAvatar(AVATAR_RAMON); break;
    case 2:
        mostrarAvatar(AVATAR_JOAO); break;
    case 3:
        mostrarAvatar(AVATAR_OSORIO); break;
    case 4:
        mostrarAvatar(AVATAR_TONHO); break;
    }
    escreverMensagem("mensagens/dialogo_item.txt", 1);
    executarEfeitoSonoro(EFFECT_ITEM);
    fadeout(5);
    executarEfeitoSonoro(EFFECT_STEPS);
    al_rest(3);
}

void faseCantina(){
    al_destroy_bitmap(fundo);
    fadein(5, FUNDO_CANTINA);
    switch(d->dia){
    case 1:
        escreverMensagem("mensagens/dialogo_tarde_1.txt", 0);
        break;
    case 2:
        escreverMensagem("mensagens/dialogo_tarde_2.txt", 0);
        break;
    case 3:
        escreverMensagem("mensagens/dialogo_tarde_3.txt", 0);
        break;
    case 4:
        escreverMensagem("mensagens/dialogo_tarde_4.txt", 0);
        break;
    case 5:
        escreverMensagem("mensagens/dialogo_tarde_5.txt", 0);
        break;
    case 6:
        escreverMensagem("mensagens/dialogo_tarde_1.txt", 0);
        break;
    case 7:
        escreverMensagem("mensagens/dialogo_tarde_2.txt", 0);
        break;
    case 8:
        escreverMensagem("mensagens/dialogo_tarde_3.txt", 0);
        break;
    case 9:
        escreverMensagem("mensagens/dialogo_tarde_4.txt", 0);
        break;
    case 10:
        escreverMensagem("mensagens/dialogo_tarde_5.txt", 0);
        break;
    }
    ganharEnergia(MOD_ENERGIA);
    ganharEstresse(-1*MOD_ESTRESSE/5);
    exibirHud(FUNDO_CANTINA);
}

void faseIHS(){
    al_destroy_bitmap(fundo);
    fadein(5, FUNDO_IHS);
    if(d->turno!=0)escreverMensagem("mensagens/dialogo_ihs.txt", 0);
    if(d->turno!=0){
        ganharEnergia(MOD_ENERGIA/5);
        ganharEstresse(-1*MOD_ESTRESSE);
    }
    exibirHud(FUNDO_IHS);
}

void faseSalaProfessores(){
    al_destroy_bitmap(fundo);
    fadein(5, FUNDO_PROFESSORES);
    if(rand()%6==h->ultima){
        switch(h->ultima){
            case 1:
                mostrarAvatar(AVATAR_NAUFEL);
                break;
            case 2:
                mostrarAvatar(AVATAR_QUINET);
                break;
            case 3:
                mostrarAvatar(AVATAR_ISABEL);
                break;
            case 4:
                mostrarAvatar(AVATAR_ANTONIO);
                break;
            case 5:
                mostrarAvatar(AVATAR_SERGIO);
                break;
        }
        escreverMensagem("mensagens/dialogo_professores_true.txt", 1);
        ganharExperiencia(h->ultima, MOD_CONHECIMENTO*3);
        bufferingBackground();
        escreverMensagem("mensagens/dialogo_professores_true2.txt", 0);
    }
    else{
        escreverMensagem("mensagens/dialogo_professores_false.txt", 0);
    }
    exibirHud(FUNDO_PROFESSORES);
}

void faseLabCom(){
    al_destroy_bitmap(fundo);
    fadein(5, FUNDO_LAB);
    mostrarAvatar(AVATAR_SERGIO);
    escreverMensagem("mensagens/dialogo_sergio_lab.txt", 1);
    executarEfeitoSonoro(EFFECT_USE);
    ganharExperiencia(5, MOD_CONHECIMENTO);
    bufferingBackground();
    exibirHud(FUNDO_LAB);
}


int** aloca(int **matriz)
{
    int i;
    matriz=(int**)malloc(3*sizeof(int*));
    for(i=0;i<3;i++)
    {
        matriz[i]=(int*)calloc(3,sizeof(int));

    }
    return matriz;
}

int **escolha(int **matriz,char n, int *op)
{

while(1)
        {
        if(n=='7'&&matriz[0][0]==0){matriz[0][0]=1;break;}
        if(n=='8'&&matriz[0][1]==0){matriz[0][1]=1;break;}
        if(n=='9'&&matriz[0][2]==0){matriz[0][2]=1;break;}
        if(n=='4'&&matriz[1][0]==0){matriz[1][0]=1;break;}
        if(n=='5'&&matriz[1][1]==0){matriz[1][1]=1;break;}
        if(n=='6'&&matriz[1][2]==0){matriz[1][2]=1;break;}
        if(n=='1'&&matriz[2][0]==0){matriz[2][0]=1;break;}
        if(n=='2'&&matriz[2][1]==0){matriz[2][1]=1;break;}
        if(n=='3'&&matriz[2][2]==0){matriz[2][2]=1;break;}
        *op=0; break;

        }
        return matriz;
}

int ** escolhaMouse(int **matriz){
    int sair=0, n=-1;
    int i, j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            fprintf(stderr, "%d", matriz[i][j]);
        }
        fprintf(stderr, "\n");
    }
    fprintf(stderr, "\n");
        al_register_event_source(fila, al_get_mouse_event_source());
        while(!sair){
        while(!al_is_event_queue_empty(fila)){
            al_wait_for_event(fila, &evento);
            if(evento.type==ALLEGRO_EVENT_MOUSE_BUTTON_UP){
                if(evento.mouse.x>= 156 &&
                    evento.mouse.x<=260  &&
                    evento.mouse.y>= 78 &&
                    evento.mouse.y<=173){
                        matriz=escolha(matriz, '7', &n);
                        if(!n){
                            executarEfeitoSonoro(EFFECT_ERROR);
                        }
                        else{
                            executarEfeitoSonoro(EFFECT_USE);
                            al_draw_bitmap(pos1, 156, 90, 1);
                            al_flip_display();
                            sair=1;
                        }

                }
                else if(evento.mouse.x>=271 &&
                    evento.mouse.x<= 375 &&
                    evento.mouse.y>=78  &&
                    evento.mouse.y<= 173){
                        matriz=escolha(matriz, '8', &n);
                        if(!n){
                            executarEfeitoSonoro(EFFECT_ERROR);
                        }
                        else{
                            executarEfeitoSonoro(EFFECT_USE);
                            al_draw_bitmap(pos1, 271, 78, 1);
                            al_flip_display();
                            sair=1;
                        }
                }
                else if(evento.mouse.x>=390  &&
                    evento.mouse.x<= 464 &&
                    evento.mouse.y>=78  &&
                    evento.mouse.y<=173){
                        matriz=escolha(matriz, '9', &n);
                        if(!n){
                            executarEfeitoSonoro(EFFECT_ERROR);
                        }
                        else{
                            executarEfeitoSonoro(EFFECT_USE);
                            al_draw_bitmap(pos1, 390, 78, 1);
                            al_flip_display();
                            sair=1;
                        }
                }
                else if(evento.mouse.x>=155  &&
                    evento.mouse.x<= 259 &&
                    evento.mouse.y>=190  &&
                    evento.mouse.y<=285){
                        matriz=escolha(matriz, '4', &n);
                        if(!n){
                            executarEfeitoSonoro(EFFECT_ERROR);
                        }
                        else{
                            executarEfeitoSonoro(EFFECT_USE);
                            al_draw_bitmap(pos1, 155, 190, 1);
                            al_flip_display();
                            sair=1;
                        }
                }
                else if(evento.mouse.x>=272  &&
                    evento.mouse.x<= 376 &&
                    evento.mouse.y>=190  &&
                    evento.mouse.y<=285){
                        matriz=escolha(matriz, '5', &n);
                        if(!n){
                            executarEfeitoSonoro(EFFECT_ERROR);
                        }
                        else{
                            executarEfeitoSonoro(EFFECT_USE);
                            al_draw_bitmap(pos1, 272, 190, 1);
                            al_flip_display();
                            sair=1;
                        }
                }
                else if(evento.mouse.x>= 380 &&
                    evento.mouse.x<= 484 &&
                    evento.mouse.y>=189  &&
                    evento.mouse.y<=284){
                        matriz=escolha(matriz, '6', &n);
                        if(!n){
                            executarEfeitoSonoro(EFFECT_ERROR);
                        }
                        else{
                            executarEfeitoSonoro(EFFECT_USE);
                            al_draw_bitmap(pos1, 380, 189, 1);
                            al_flip_display();
                            sair=1;
                        }
                }
                else if(evento.mouse.x>=153  &&
                    evento.mouse.x<= 257 &&
                    evento.mouse.y>=307  &&
                    evento.mouse.y<=402){
                        matriz=escolha(matriz, '1', &n);
                        if(!n){
                            executarEfeitoSonoro(EFFECT_ERROR);
                        }
                        else{
                            executarEfeitoSonoro(EFFECT_USE);
                            al_draw_bitmap(pos1, 153, 307, 1);
                            al_flip_display();
                            sair=1;
                        }
                }
                else if(evento.mouse.x>= 271 &&
                    evento.mouse.x<= 375 &&
                    evento.mouse.y>= 308 &&
                    evento.mouse.y<=402){
                        matriz=escolha(matriz, '2', &n);
                        if(!n){
                            executarEfeitoSonoro(EFFECT_ERROR);
                        }
                        else{
                            executarEfeitoSonoro(EFFECT_USE);
                            al_draw_bitmap(pos1, 271, 308, 1);
                            al_flip_display();
                            sair=1;
                        }
                }
                else if(evento.mouse.x>= 392 &&
                    evento.mouse.x<= 496 &&
                    evento.mouse.y>= 306 &&
                    evento.mouse.y<=402){
                        matriz=escolha(matriz, '3', &n);
                        if(!n){
                            executarEfeitoSonoro(EFFECT_ERROR);
                        }
                        else{
                            executarEfeitoSonoro(EFFECT_USE);
                            al_draw_bitmap(pos1, 392, 306, 1);
                            al_flip_display();
                            sair=1;
                        }
                }
            }
        }
    }
    return matriz;
}

void desenharBolinha(int *op){
    int x, y;
    switch(op[1]){
        case 0: x=156; break;
        case 1: x=270; break;
        case 2: x=394; break;
    }
    switch(op[0]){
        case 0: y=80; break;
        case 1: y=180; break;
        case 2: y=310; break;
    }
    al_draw_bitmap(pos2, x, y, 0);
    al_flip_display();
}

int ** turnoBolinha(int **matriz, int x)
{
    int op[2];
    while(1)
        {
        op[0]=rand()%9;
        op[1]=op[0]/3;
        op[0]=op[0]%3;
        if(matriz[op[0]][op[1]]==0){break;}
        if(x>8){break;}
        }
        if(matriz[op[0]][op[1]]==0){matriz[op[0]][op[1]]=2; desenharBolinha(op);}
        return matriz;

}

int ganha(int **matriz, int fim, int x)
{
    fim=3;
    if(x>9)fim=0;
       if(matriz[0][0]==matriz[0][1]&&matriz[0][1]==matriz[0][2]&&matriz[0][0]!=0){fim=matriz[0][0];}
       if(matriz[1][0]==matriz[1][1]&&matriz[1][1]==matriz[1][2]&&matriz[1][0]!=0){fim=matriz[1][0];}
       if(matriz[2][0]==matriz[2][1]&&matriz[2][1]==matriz[2][2]&&matriz[2][0]!=0){fim=matriz[2][0];}
       if(matriz[0][0]==matriz[1][0]&&matriz[1][0]==matriz[2][0]&&matriz[0][0]!=0){fim=matriz[0][0];}
       if(matriz[0][1]==matriz[1][1]&&matriz[1][1]==matriz[2][1]&&matriz[0][1]!=0){fim=matriz[0][1];}
       if(matriz[0][2]==matriz[1][2]&&matriz[1][2]==matriz[2][2]&&matriz[0][2]!=0){fim=matriz[0][2];}
       if(matriz[0][0]==matriz[1][1]&&matriz[1][1]==matriz[2][2]&&matriz[0][0]!=0){fim=matriz[0][0];}
       if(matriz[2][0]==matriz[1][1]&&matriz[1][1]==matriz[0][2]&&matriz[2][0]!=0){fim=matriz[2][0];}
       return fim;
}

int jogoDaVelha(){
    int cont=0;
    al_destroy_bitmap(hud);
    al_destroy_bitmap(pos1);
    al_destroy_bitmap(pos2);
    pos1=al_load_bitmap("imagens/X.png");
    pos2=al_load_bitmap("imagens/O.png");
    hud=al_load_bitmap("imagens/mapajogodavelha.png");
    al_draw_bitmap(hud, 0, 0, 0);
    al_flip_display();
    int **matriz=aloca(matriz);
    if(!matriz){
        fprintf(stderr, "saiu null\n");
    }
    fprintf(stderr, "saiu\n");
    int fim;
    while (1){
        matriz=escolhaMouse(matriz);
        cont++;

        matriz=turnoBolinha(matriz, cont);
        cont++;
        fim= ganha(matriz,fim , cont);
        if(fim!=3)break;
    }
    switch(fim){
        case 1:
            al_draw_text(fonte, al_map_rgb(0,255,0), 323, 7, ALLEGRO_ALIGN_CENTER, "Você venceu!\n");
            break;
        case 2:
            al_draw_text(fonte, al_map_rgb(0,255,0), 323, 7, ALLEGRO_ALIGN_CENTER, "Você perdeu!\n");
            break;
        case 0:
            al_draw_text(fonte, al_map_rgb(0,255,0), 323, 7, ALLEGRO_ALIGN_CENTER, "Empate!\n");
            break;}
        al_flip_display();
        esperarClique();
        fadeout(5);
        al_rest(2);
        fadein(5, FUNDO_CASA);
    return 0;
}

void faseCasa(){
    al_destroy_bitmap(fundo);
    fadein(5, FUNDO_CASA);
    int sair=0;
    escreverMensagem("mensagens/dialogo_casa_01.txt", 0);
    checarCondicao();
    al_draw_bitmap(barra_energia, ENERGIA_BAR_X, ENERGIA_BAR_Y, 0);
    al_draw_bitmap(barra_estresse, STRESS_BAR_X, STRESS_BAR_Y, 0);
    al_draw_bitmap(hud, HUD_X, HUD_Y, 0);
    al_draw_textf(fontehud, al_map_rgb(255,255,255), 64, 454,0, "%d/100", h->energia);
    al_draw_textf(fontehud, al_map_rgb(255,255,255), 64, 411,0, "%d/100", h->estresse);
    al_draw_textf(fonte, al_map_rgb(255,255,255), 300, 417, 0, "%s", d->semana);
    al_draw_textf(fonte, al_map_rgb(255,255,255), 300, 442, 0, "%d", d->turno);
    al_flip_display();
    while(!sair){
        while(!al_is_event_queue_empty(fila)){
            al_wait_for_event(fila, &evento);
            if(evento.type==ALLEGRO_EVENT_MOUSE_BUTTON_UP){
                if(evento.mouse.x>= 169 &&
                   evento.mouse.x<= 169+84 &&
                   evento.mouse.y>= 243 &&
                   evento.mouse.y<=243+64){
                       executarEfeitoSonoro(EFFECT_USE);
                       jogoDaVelha();
                       escreverMensagem("mensagens/dialogo_casa_02.txt", 0);
                       ganharEstresse(-1*MOD_ESTRESSE);
                       ganharEnergia(-1*MOD_ENERGIA/10);
                       sair=1;
                   }
                else if(evento.mouse.x>= 330 &&
                       evento.mouse.x<=330+165 &&
                       evento.mouse.y>= 215 &&
                       evento.mouse.y<=215+65){
                           executarEfeitoSonoro(EFFECT_USE);
                           escreverMensagem("mensagens/dialogo_casa_03.txt", 0);
                           ganharEstresse(-1*MOD_ESTRESSE/5);
                           ganharEnergia(MOD_ENERGIA);
                           sair=1;
                       }
                else if(evento.mouse.x>= 505 &&
                       evento.mouse.x<=505+120 &&
                       evento.mouse.y>= 225 &&
                       evento.mouse.y<=225+80){
                           al_destroy_bitmap(hud);
                            hud=al_load_bitmap("imagens/hud_biblioteca.png");
                            al_draw_bitmap(hud, 0, 0, 0);
                            exibirMensagem("mensagens/dialogo_casa_estudo.txt");
                            int passar;
                            passar=false;
                                while(!passar){
                                    while(!al_is_event_queue_empty(fila)){
                                        al_wait_for_event(fila, &evento);
                                        if(evento.type==ALLEGRO_EVENT_MOUSE_BUTTON_UP){
                                            if(evento.mouse.x>=123 &&
                                               evento.mouse.x<=317 &&
                                               evento.mouse.y>=15 &&
                                               evento.mouse.y<=56 ){
                                                   bufferingBackground();
                                                   switch(rand()%3){
                                                   case 0:
                                                       exibirMensagem("mensagens/dialogo_estudo_md_1.txt");
                                                    break;
                                                   case 1:
                                                       exibirMensagem("mensagens/dialogo_estudo_md_2.txt");
                                                    break;
                                                   case 2:
                                                       exibirMensagem("mensagens/dialogo_estudo_md_3.txt");
                                                    break;
                                                   }
                                                   esperarClique();
                                                   ganharExperiencia(1, 2*MOD_CONHECIMENTO);
                                                   passar=true;
                                            }
                                            else if(evento.mouse.x>=331 &&
                                               evento.mouse.x<=525 &&
                                               evento.mouse.y>=16 &&
                                               evento.mouse.y<=54 ){
                                                   bufferingBackground();
                                                   switch(rand()%3){
                                                   case 0:
                                                       exibirMensagem("mensagens/dialogo_estudo_fac_1.txt");
                                                    break;
                                                   case 1:
                                                       exibirMensagem("mensagens/dialogo_estudo_fac_2.txt");
                                                    break;
                                                   case 2:
                                                       exibirMensagem("mensagens/dialogo_estudo_fac_3.txt");
                                                    break;
                                                   }
                                                   esperarClique();
                                                   ganharExperiencia(2, 2*MOD_CONHECIMENTO);
                                                   passar=true;
                                            }
                                            else if(evento.mouse.x>=16 &&
                                               evento.mouse.x<=208 &&
                                               evento.mouse.y>=64 &&
                                               evento.mouse.y<=102 ){
                                                   bufferingBackground();
                                                   switch(rand()%3){
                                                   case 0:
                                                       exibirMensagem("mensagens/dialogo_estudo_c1_1.txt");
                                                    break;
                                                   case 1:
                                                       exibirMensagem("mensagens/dialogo_estudo_c1_2.txt");
                                                    break;
                                                   case 2:
                                                       exibirMensagem("mensagens/dialogo_estudo_c1_3.txt");
                                                    break;
                                                   }
                                                   esperarClique();
                                                   ganharExperiencia(3, 2*MOD_CONHECIMENTO);
                                                   passar=true;
                                            }
                                            else if(evento.mouse.x>=224 &&
                                               evento.mouse.x<=416 &&
                                               evento.mouse.y>=64 &&
                                               evento.mouse.y<=102 ){
                                                   bufferingBackground();
                                                   switch(rand()%3){
                                                   case 0:
                                                       exibirMensagem("mensagens/dialogo_estudo_ga_1.txt");
                                                    break;
                                                   case 1:
                                                       exibirMensagem("mensagens/dialogo_estudo_ga_2.txt");
                                                    break;
                                                   case 2:
                                                       exibirMensagem("mensagens/dialogo_estudo_ga_3.txt");
                                                    break;
                                                   }
                                                   esperarClique();
                                                   ganharExperiencia(4, 2*MOD_CONHECIMENTO);
                                                   passar=true;
                                            }
                                            else if(evento.mouse.x>=432 &&
                                               evento.mouse.x<=624 &&
                                               evento.mouse.y>=64 &&
                                               evento.mouse.y<=102 ){
                                                   bufferingBackground();
                                                   switch(rand()%3){
                                                   case 0:
                                                       exibirMensagem("mensagens/dialogo_estudo_prog_1.txt");
                                                    break;
                                                   case 1:
                                                       exibirMensagem("mensagens/dialogo_estudo_prog_2.txt");
                                                    break;
                                                   case 2:
                                                       exibirMensagem("mensagens/dialogo_estudo_prog_3.txt");
                                                    break;
                                                   }
                                                   esperarClique();
                                                   ganharExperiencia(5, 2*MOD_CONHECIMENTO);
                                                   passar=true;
                                            }
                                        }
                                    }
                                }
                            al_destroy_bitmap(hud);
                            hud=al_load_bitmap(HUD);
                           fadeout(10);
                           executarEfeitoSonoro(EFFECT_USE);
                           escreverMensagem("mensagens/dialogo_casa_04.txt", 0);
                           ganharEstresse(MOD_ESTRESSE/2);
                           if(h->classe!=2)ganharEnergia(-1*MOD_ENERGIA/2);
                           fadein(5, FUNDO_CASA);
                           sair=1;
                       }
            }
            if(evento.type==ALLEGRO_EVENT_MOUSE_AXES){
                if(evento.mouse.x>= 169 &&
                   evento.mouse.x<= 169+84 &&
                   evento.mouse.y>= 243 &&
                   evento.mouse.y<=243+64){
                       al_clear_to_color(al_map_rgb(0,0,0));
                       bufferingBackground();
                       al_draw_text(fonte, al_map_rgb(255,255,255), 150, 210, 0, "Jogar");
                       al_flip_display();
                   }
                else if(evento.mouse.x>= 330 &&
                       evento.mouse.x<=330+165 &&
                       evento.mouse.y>= 215 &&
                       evento.mouse.y<=215+65){
                           al_clear_to_color(al_map_rgb(0,0,0));
                           bufferingBackground();
                           al_draw_text(fonte, al_map_rgb(255,255,255), 390, 175, 0, "Dormir");
                           al_flip_display();

                       }
                else if(evento.mouse.x>= 505 &&
                       evento.mouse.x<=505+120 &&
                       evento.mouse.y>= 225 &&
                       evento.mouse.y<=225+80){
                           al_clear_to_color(al_map_rgb(0,0,0));
                           bufferingBackground();
                           al_draw_text(fonte, al_map_rgb(255,255,255), 525, 200, 0, "Estudar");
                           al_flip_display();
                       }

                else{
                    al_clear_to_color(al_map_rgb(0,0,0));
                    bufferingBackground();
                    al_flip_display();
                }
            }
        }
    }
    exibirHud(FUNDO_CASA);
}

//funcoes de batalha
void atualizarEnergia(int id_professor){
            if(h->energia>= 100){
            barra_energia=al_load_bitmap("imagens/barra_energia/barra100.png");
            }
        else if(h->energia>= 95){
            barra_energia=al_load_bitmap("imagens/barra_energia/barra95.png");
            }
        else if(h->energia>= 90){
            barra_energia=al_load_bitmap("imagens/barra_energia/barra90.png");
            }
        else if(h->energia>= 85){
            barra_energia=al_load_bitmap("imagens/barra_energia/barra85.png");
            }
        else if(h->energia>= 80){
            barra_energia=al_load_bitmap("imagens/barra_energia/barra80.png");
            }
        else if(h->energia>= 75){
            barra_energia=al_load_bitmap("imagens/barra_energia/barra75.png");
            }
        else if(h->energia>= 70){
            barra_energia=al_load_bitmap("imagens/barra_energia/barra70.png");
            }
        else if(h->energia>= 65){
            barra_energia=al_load_bitmap("imagens/barra_energia/barra65.png");
            }
        else if(h->energia>= 60){
            barra_energia=al_load_bitmap("imagens/barra_energia/barra60.png");
            }
        else if(h->energia>= 55){
            barra_energia=al_load_bitmap("imagens/barra_energia/barra55.png");
            }
        else if(h->energia>= 50){
            barra_energia=al_load_bitmap("imagens/barra_energia/barra50.png");
            }
        else if(h->energia>= 45){
            barra_energia=al_load_bitmap("imagens/barra_energia/barra45.png");
            }
        else if(h->energia>= 40){
            barra_energia=al_load_bitmap("imagens/barra_energia/barra40.png");
            }
        else if(h->energia>= 35){
            barra_energia=al_load_bitmap("imagens/barra_energia/barra35.png");
            }
        else if(h->energia>= 30){
            barra_energia=al_load_bitmap("imagens/barra_energia/barra30.png");
            }
        else if(h->energia>= 25){
            barra_energia=al_load_bitmap("imagens/barra_energia/barra25.png");
            }
        else if(h->energia>= 20){
            barra_energia=al_load_bitmap("imagens/barra_energia/barra20.png");
            }
        else if(h->energia>= 15){
            barra_energia=al_load_bitmap("imagens/barra_energia/barra15.png");
            }
        else if(h->energia>= 10){
            barra_energia=al_load_bitmap("imagens/barra_energia/barra10.png");
            }
        else if(h->energia>= 5){
            barra_energia=al_load_bitmap("imagens/barra_energia/barra5.png");
            }
        if(prof[id_professor].energia>= 100){
            barra_estresse=al_load_bitmap("imagens/barra_energia/barra100.png");
            }
        else if(prof[id_professor].energia>= 95){
            barra_estresse=al_load_bitmap("imagens/barra_energia/barra95.png");
            }
        else if(prof[id_professor].energia>= 90){
            barra_estresse=al_load_bitmap("imagens/barra_energia/barra90.png");
            }
        else if(prof[id_professor].energia>= 85){
            barra_estresse=al_load_bitmap("imagens/barra_energia/barra85.png");
            }
        else if(prof[id_professor].energia>= 80){
            barra_estresse=al_load_bitmap("imagens/barra_energia/barra80.png");
            }
        else if(prof[id_professor].energia>= 75){
            barra_estresse=al_load_bitmap("imagens/barra_energia/barra75.png");
            }
        else if(prof[id_professor].energia>= 70){
            barra_estresse=al_load_bitmap("imagens/barra_energia/barra70.png");
            }
        else if(prof[id_professor].energia>= 65){
            barra_estresse=al_load_bitmap("imagens/barra_energia/barra65.png");
            }
        else if(prof[id_professor].energia>= 60){
            barra_estresse=al_load_bitmap("imagens/barra_energia/barra60.png");
            }
        else if(prof[id_professor].energia>= 55){
            barra_estresse=al_load_bitmap("imagens/barra_energia/barra55.png");
            }
        else if(prof[id_professor].energia>= 50){
            barra_estresse=al_load_bitmap("imagens/barra_energia/barra50.png");
            }
        else if(prof[id_professor].energia>= 45){
            barra_estresse=al_load_bitmap("imagens/barra_energia/barra45.png");
            }
        else if(prof[id_professor].energia>= 40){
            barra_estresse=al_load_bitmap("imagens/barra_energia/barra40.png");
            }
        else if(prof[id_professor].energia>= 35){
            barra_estresse=al_load_bitmap("imagens/barra_energia/barra35.png");
            }
        else if(prof[id_professor].energia>= 30){
            barra_estresse=al_load_bitmap("imagens/barra_energia/barra30.png");
            }
        else if(prof[id_professor].energia>= 25){
            barra_estresse=al_load_bitmap("imagens/barra_energia/barra25.png");
            }
        else if(prof[id_professor].energia>= 20){
            barra_estresse=al_load_bitmap("imagens/barra_energia/barra20.png");
            }
        else if(prof[id_professor].energia>= 15){
            barra_estresse=al_load_bitmap("imagens/barra_energia/barra15.png");
            }
        else if(prof[id_professor].energia>= 10){
            barra_estresse=al_load_bitmap("imagens/barra_energia/barra10.png");
            }
        else if(prof[id_professor].energia>= 5){
            barra_estresse=al_load_bitmap("imagens/barra_energia/barra5.png");
        }
}

void bufferingHudBatalha(int id_professor){
    al_draw_bitmap(barra_energia, 400, 301, 0);
    al_draw_bitmap(barra_estresse, 116,112, 0);
    al_draw_bitmap(hud_batalha, 0, 0, 0);
    al_draw_text(fonte, al_map_rgb(255,255,255), 55, 80, 0, "Professor");
    al_draw_text(fonte, al_map_rgb(255,255,255), 295, 80, ALLEGRO_ALIGN_RIGHT, h->c[id_professor].nome);
    al_draw_text(fonte, al_map_rgb(255,255,255), 340, 270, 0, "Aluno");
    al_draw_textf(fonte, al_map_rgb(255,255,255), 580, 270, ALLEGRO_ALIGN_RIGHT, "Level %d", h->c[id_professor].lvl);
    al_draw_textf(fonte, al_map_rgb(255,255,255), 510, 330, 0, "%d/100", h->energia);
    al_draw_bitmap(face, HEROI_BATALHA_X,HEROI_BATALHA_Y, 0);
    al_draw_bitmap(face2, INIMIGO_BATALHA_X,INIMIGO_BATALHA_Y,0);
}

void aplicarAtaque(Habilidade atack, int id_professor){
    int dano;
    bufferingBackground();
    bufferingHudBatalha(id_professor);
    bufferingMessageBox();
    al_draw_textf(fonte, al_map_rgb(255,255,255), TEXT_ALL, TEXT_LINE1, 0, "Voce usou %s!", atack.nome);
    al_flip_display();
    esperarClique();
    dano=(rand()%atack.dano)+h->c[id_professor].lvl - id_professor/2;
    if(dano<0) dano=0;
    prof[id_professor].energia-=dano;
    atualizarEnergia(id_professor);
    bufferingBackground();
    bufferingHudBatalha(id_professor);
    bufferingMessageBox();
    al_draw_tinted_bitmap(face2, al_map_rgb(255,0,0), INIMIGO_BATALHA_X, INIMIGO_BATALHA_Y, 0);
    switch(atack.id){
    case 0:
        executarEfeitoSonoro(EFFECT_ATK1); break;
    case 1:
        executarEfeitoSonoro(EFFECT_ATK2); break;
    case 2:
        executarEfeitoSonoro(EFFECT_ATK3); break;
    case 3:
        executarEfeitoSonoro(EFFECT_ATK4); break;
    }
    al_flip_display();
    al_rest(0.1);
    bufferingBackground();
    bufferingHudBatalha(id_professor);
    bufferingMessageBox();
    al_draw_textf(fonte, al_map_rgb(255,255,255), TEXT_ALL, TEXT_LINE1, 0, "Voce usou %s!", atack.nome);
    al_draw_textf(fonte, al_map_rgb(255,255,255), TEXT_ALL, TEXT_LINE2, 0, "Deu %d de dano!", dano);
    al_flip_display();
    esperarClique();
    bufferingBackground();
    bufferingHudBatalha(id_professor);
    bufferingMessageBox();
    al_flip_display();
}

void ataque(int id_professor){
    bufferingBackground();
    bufferingHudBatalha(id_professor);
    bufferingMessageBox();
    int i, sair=0;
    for(i=0;i<4;i++){
        if(h->c[id_professor].h[i].habilitada){
            if(i>1){
                al_draw_textf(fonte, al_map_rgb(255,255,255), TEXT_ALL+270, 10+TEXT_LINE1+40*(i-2), 0, h->c[id_professor].h[i].nome);
            }
            else{
                al_draw_textf(fonte, al_map_rgb(255,255,255), 20+TEXT_ALL, 10+TEXT_LINE1+40*i, 0, h->c[id_professor].h[i].nome);
            }

        }
    }
    al_flip_display();
    while(!sair){
        while(!al_is_event_queue_empty(fila)){
            al_wait_for_event(fila, &evento);
            if(evento.type==ALLEGRO_EVENT_MOUSE_BUTTON_UP){
                if(evento.mouse.x >= TEXT_ALL+20 &&
                    evento.mouse.x <= TEXT_ALL+260 &&
                    evento.mouse.y >= TEXT_LINE1+10 &&
                    evento.mouse.y <= TEXT_LINE1+40 &&
                    h->c[id_professor].h[0].habilitada==1){
                        aplicarAtaque(h->c[id_professor].h[0], id_professor);
                        sair=1;
                }
                else if(evento.mouse.x >= TEXT_ALL+20 &&
                    evento.mouse.x <= TEXT_ALL+260 &&
                    evento.mouse.y >= TEXT_LINE1+10 &&
                    evento.mouse.y <= TEXT_LINE1+80 &&
                    h->c[id_professor].h[1].habilitada==1){
                        aplicarAtaque(h->c[id_professor].h[1], id_professor);
                        sair=1;
                }
                else if(evento.mouse.x >= TEXT_ALL+270 &&
                    evento.mouse.x <= TEXT_ALL+530 &&
                    evento.mouse.y >= TEXT_LINE1+10 &&
                    evento.mouse.y <= TEXT_LINE1+40 &&
                    h->c[id_professor].h[2].habilitada==1){
                        aplicarAtaque(h->c[id_professor].h[2], id_professor);
                        sair=1;
                }
                else if(evento.mouse.x >= TEXT_ALL+270 &&
                    evento.mouse.x <= TEXT_ALL+530 &&
                    evento.mouse.y >= TEXT_LINE1+10 &&
                    evento.mouse.y <= TEXT_LINE1+80 &&
                    h->c[id_professor].h[3].habilitada==1){
                        aplicarAtaque(h->c[id_professor].h[3],id_professor);
                        sair=1;
                }
            }
        }

    }
    bufferingBackground();
    bufferingHudBatalha(id_professor);
    bufferingMessageBox();
}

void colar(int id_professor){
    bufferingBackground();
    bufferingHudBatalha(id_professor);
    bufferingMessageBox();
    al_draw_text(fonte, al_map_rgb(255,255,255), TEXT_ALL, TEXT_LINE1, 0, "Voce tentou colar!");
    al_flip_display();
    al_rest(0.5);
    if((rand()%100)+h->sorte>75){
        executarEfeitoSonoro(EFFECT_SKILL);
        al_draw_text(fonte, al_map_rgb(255,255,255), TEXT_ALL, TEXT_LINE2, 0, "Foi efetivo!");
        al_flip_display();
        esperarClique();
        prof[id_professor].energia-=15;
        atualizarEnergia(id_professor);
        bufferingBackground();
        bufferingHudBatalha(id_professor);
        bufferingMessageBox();
        al_draw_tinted_bitmap(face2, al_map_rgb(255,0,0), INIMIGO_BATALHA_X, INIMIGO_BATALHA_Y, 0);
        al_flip_display();
        al_rest(0.1);
        bufferingBackground();
        bufferingHudBatalha(id_professor);
        bufferingMessageBox();
        al_draw_text(fonte, al_map_rgb(255,255,255), TEXT_ALL, TEXT_LINE1, 0, "Voce tentou colar!");
        al_draw_text(fonte, al_map_rgb(255,255,255), TEXT_ALL, TEXT_LINE2, 0, "Foi efetivo!");
        al_flip_display();
        esperarClique();
        bufferingBackground();
        bufferingHudBatalha(id_professor);
        bufferingMessageBox();
        al_flip_display();
    }
    else{
        executarEfeitoSonoro(EFFECT_ERROR);
        al_draw_text(fonte, al_map_rgb(255,255,255), TEXT_ALL, TEXT_LINE2, 0, "O professor te pegou!");
        al_flip_display();
        esperarClique();
        h->energia-=15;
        atualizarEnergia(id_professor);
        bufferingBackground();
        bufferingHudBatalha(id_professor);
        bufferingMessageBox();
        al_draw_tinted_bitmap(face, al_map_rgb(255,0,0), HEROI_BATALHA_X, HEROI_BATALHA_Y, 0);
        al_flip_display();
        al_rest(0.1);
        bufferingBackground();
        bufferingHudBatalha(id_professor);
        bufferingMessageBox();
        al_draw_text(fonte, al_map_rgb(255,255,255), TEXT_ALL, TEXT_LINE1, 0, "Voce tentou colar!");
        al_draw_text(fonte, al_map_rgb(255,255,255), TEXT_ALL, TEXT_LINE2, 0, "O professor te pegou!");
        al_flip_display();
        esperarClique();
        bufferingBackground();
        bufferingHudBatalha(id_professor);
        bufferingMessageBox();
        al_flip_display();
    }
}

void exibirOpcoes(int id_professor){
    al_draw_text(fonte, al_map_rgb(255,255,255), 90, 410, 0, "ATACAR                         COLAR                         ITEM");
    al_flip_display();
    int sair=0;
    while(!sair){
        while(!al_is_event_queue_empty(fila)){
            al_wait_for_event(fila, &evento);
            if(evento.type==ALLEGRO_EVENT_MOUSE_BUTTON_UP){
                if(evento.mouse.x >= 87&&
                    evento.mouse.x <= 87+64&&
                    evento.mouse.y >= 406 &&
                    evento.mouse.y <= 406+21){
                        ataque(id_professor);
                        sair =1;
                }
                else if(evento.mouse.x >= 296&&
                    evento.mouse.x <= 296+55&&
                    evento.mouse.y >= 406 &&
                    evento.mouse.y <= 406+21){
                        colar(id_professor);
                        sair=1;
                }
                else if(evento.mouse.x >= 495&&
                    evento.mouse.x <= 495+41&&
                    evento.mouse.y >= 406 &&
                    evento.mouse.y <= 406+21){
                        if(!exibirMochila()){
                            sair=1;
                        }
                        bufferingBackground();
                        bufferingHudBatalha(id_professor);
                        bufferingMessageBox();
                        al_draw_text(fonte, al_map_rgb(255,255,255), 90, 410, 0, "ATACAR                         COLAR                         ITEM");
                        al_flip_display();
                }
            }
        }
    }
    bufferingBackground();
    bufferingHudBatalha(id_professor);
    bufferingMessageBox();
    al_flip_display();
}

void turnoProfessor(int id_professor){
    int dano;
    al_draw_text(fonte, al_map_rgb(255,255,255), TEXT_ALL, TEXT_LINE1, 0, "Professor atacou!");
    al_flip_display();
    esperarClique();
    dano=(rand()%prof[id_professor].dano)+(id_professor+1)/2 - h->c[id_professor].lvl;
    if(dano<0) dano=0;
    h->energia-=dano;
    atualizarEnergia(id_professor);
    al_draw_tinted_bitmap(face, al_map_rgb(255,0,0), HEROI_BATALHA_X, HEROI_BATALHA_Y, 0);
    al_flip_display();
    executarEfeitoSonoro(EFFECT_ATKENEMY);
    al_rest(0.1);
    bufferingBackground();
    bufferingHudBatalha(id_professor);
    bufferingMessageBox();
    al_draw_text(fonte, al_map_rgb(255,255,255), TEXT_ALL, TEXT_LINE1, 0, "Professor atacou!");
    if(dano==0){
        executarEfeitoSonoro("audio/errou.wav");
        al_draw_text(fonte, al_map_rgb(255,255,255), TEXT_ALL, TEXT_LINE2, 0, "Errooou!");
    }
    else{
        al_draw_textf(fonte, al_map_rgb(255,255,255), TEXT_ALL, TEXT_LINE2, 0, "Deu %d de dano!", dano);
    }
    al_flip_display();
    al_flip_display();
    esperarClique();
    atualizarEnergia(id_professor);
    bufferingBackground();
    bufferingHudBatalha(id_professor);
    bufferingMessageBox();
    al_flip_display();

}

void definirFaceInimigo(int id_professor){
    face2=al_load_bitmap(prof[id_professor].imagem);
}

int batalha(int id_professor){
    musica=executarMusica(musica, MUSIC_BATTLE);
    al_rest(3);
    al_destroy_bitmap(barra_energia);
    al_destroy_bitmap(barra_estresse);
    al_destroy_bitmap(face);
    al_destroy_bitmap(face2);
    definirFaceInimigo(id_professor);
    face=al_load_bitmap(HEROI_BATALHA);

    fadeout(5);
    al_destroy_bitmap(fundo);
    fadein(5, FUNDO_SALADEAULA);
    atualizarEnergia(id_professor);
    bufferingHudBatalha(id_professor);
    exibirCaixadeMensagem();
    while(h->energia>0 && prof[id_professor].energia>0){
        exibirOpcoes(id_professor);
        if(prof[id_professor].energia>0||h->energia>0){
                turnoProfessor(id_professor);
        }
    }
    if(h->energia<=0){
        fadeout(2);
        return 1;
    }
    return 0;
}

void faseProvas(int idInimigo){
    if(batalha(idInimigo)){
        gameover();
    }
}

void creditos(){
    musica = executarMusica(musica, "audio/creditos.ogg");
    hud=al_load_bitmap("imagens/aprovado.png");
    op=al_load_bitmap("imagens/bam.png");
    fadein(5, FUNDO_LAB);
    mostrarAvatar(AVATAR_SERGIO);
    escreverMensagem("mensagens/dialogo_gamewin.txt", 1);
    fadeout(5);
    fadein(1, FUNDO_FIM);
    al_rest(2);
    al_draw_bitmap(hud, 0, 0, 0);
    al_flip_display();
    executarEfeitoSonoro(EFFECT_ATK1);
    al_rest(2);
    executarEfeitoSonoro("audio/negobamend.wav");
    al_rest(5);
    al_draw_bitmap(op, 0, 0, 0);
    al_flip_display();
    al_rest(2);
    fadeout(0.5);
    al_rest(5);
    finalizar();
}

void statusGameover(){
    fadeout(5);
    musica=executarMusica(musica, MUSIC_ENDING);
    al_rest(4);
    fadein(1, FUNDO_GAMEOVER2);
    esperarClique();
    escreverMensagem("mensagens/dialogo_gameover2.txt", 0);
    fadeout(1);
    al_set_audio_stream_playing(musica, false);
    al_rest(5);
    finalizar();
}

void gameover(){
    fadeout(5);
    musica=executarMusica(musica, MUSIC_ENDING);
    al_rest(4);
    fadein(1, FUNDO_GAMEOVER);
    esperarClique();
    escreverMensagem("mensagens/dialogo_gameover1.txt", 0);
    fadeout(1);
    al_set_audio_stream_playing(musica, false);
    al_rest(5);
    finalizar();
}
