#define ENERGIA_INICIAL 100
#define ESTRESSE_INICIAL 30
#define LEVEL_INICIAL 1
#define EXP_INICIAL 0
#define NUM_CONHECIMENTO 6
#define NUM_HABILIDADES 4

#define CALC1 "Calculo 1"
#define ICC "Introducao a CC"
#define MD "Matematica Discreta"
#define FAC "Fund. Arq. Computadores"
#define GA "Geometria Analitica"
#define PROG1 "Prog 1"

//defines da janela
#define ALTURA_JANELA 640
#define LARGURA_JANELA 480
//message box defines
#define TEXT_LINE1 380
#define TEXT_LINE2 410
#define TEXT_LINE3 440
#define TEXT_ALL 30
#define BOX_X 20
#define BOX_Y 370
#define LOCAL_CAIXA "imagens/messagebox.png"

//defines de hud
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

//defines das posicoes das localizacoes
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

//defines de background
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

#define FUNDO_MAPA "imagens/mapa.png"
//defines de avatares
#define AVATAR_X 250
#define AVATAR_Y 45
#define AVATAR_SERGIO "imagens/faces/sergio_face.png"
#define AVATAR_OSORIO "imagens/faces/osorio_face.png"
#define AVATAR_JOAO "imagens/faces/joao_face.png"
#define AVATAR_TONHO "imagens/faces/tonho_face.png"
#define AVATAR_RAMON "imagens/faces/ramon_face.png"
//defines de icones
#define MAP_ICON "imagens/icones/icone_mapa.png"
#define LOCAL_ICON "imagens/icones/icone_local.png"

//musicas
#define MUSIC_INTRO "audio/sarradness.ogg"
#define MUSIC_ENDING "audio/arnold.ogg"

//dialogos
#define DIALOGO_INTRO "mensagens/intro_dialogo_sergio.txt"
#define OSORIO_INTRO "mensagens/intro_dialogo_osorio.txt"
#define JOAO_INTRO "mensagens/intro_dialogo_joao.txt"
#define TONHO_INTRO "mensagens/intro_dialogo_tonho.txt"
#define RAMON_INTRO "mensagens/intro_dialogo_ramon.txt"

#include<stdio.h>
#include<stdlib.h>
#include <allegro5/allegro.h>
#include <allegro5/allegro_native_dialog.h>
#include<allegro5/allegro_image.h>
#include<allegro5/allegro_audio.h>
#include <allegro5/allegro_acodec.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>

ALLEGRO_DISPLAY *janela;
ALLEGRO_BITMAP *fundo, *face, *caixa_mensagem, *buffer, *icone, *pos1, *pos2, *pos3, *pos4, *pos5, *pos6, *hud, *barra_estresse, *barra_energia;
ALLEGRO_AUDIO_STREAM *musica;
ALLEGRO_FONT *fonte, *fontehud;
ALLEGRO_EVENT_QUEUE *fila;
ALLEGRO_EVENT evento;

//STRUCTS
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
    Habilidade *h;
} Conhecimento;

typedef struct heroi {
    char nome[50];
    int energia;
    int estresse;
    Conhecimento *c;
} Heroi;

Heroi *h;

//FUN플O DE INICIALIZA플O DO JOGO
void inicializarHeroi(){
    int i;
    h=(Heroi*)malloc(sizeof(Heroi));
    h->energia=ENERGIA_INICIAL;
    h->estresse=ESTRESSE_INICIAL;
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
    }
}

bool inicializar(){
    if(!al_init()){
        fprintf(stderr, "Falha ao inicializar allegro");
        return -1;
    }
    janela = al_create_display(ALTURA_JANELA, LARGURA_JANELA);
    if(!janela){
        fprintf(stderr, "Falha ao inicializar janela");
        return -1;
    }
    al_set_window_title(janela, "Calouro Simulator");
    if(!al_init_image_addon()){
        fprintf(stderr, "Falha ao inicializar addon de imagens");
        return -1;
    }
    if(!al_install_audio()){
        fprintf(stderr, "Falha ao instalar audio");
        return -1;
    }
    if(!al_init_acodec_addon()){
        fprintf(stderr, "Falha ao inicializar acodec addon");
        return -1;
    }
    al_reserve_samples(1);
    al_init_font_addon();
    if(!al_init_ttf_addon()){
        fprintf(stderr, "Falha ao inicializar ttf");
        return -1;
    }
    if(!al_install_mouse()){
        fprintf(stderr, "Falha ao instalar mouse");
        return -1;
    }
    al_set_system_mouse_cursor(janela, ALLEGRO_SYSTEM_MOUSE_CURSOR_DEFAULT);
    caixa_mensagem=al_load_bitmap(LOCAL_CAIXA);

    al_get_backbuffer(janela);
    fonte=al_load_font("arial_narrow_7.ttf", 20, 0);
    fontehud=al_load_font("arial_narrow_7.ttf", 12, 0);
    fila=al_create_event_queue();

    hud=al_load_bitmap(HUD);

    pos1=al_load_bitmap(LOCAL_ICON);
    pos2=al_load_bitmap(LOCAL_ICON);
    pos3=al_load_bitmap(LOCAL_ICON);
    pos4=al_load_bitmap(LOCAL_ICON);
    pos5=al_load_bitmap(LOCAL_ICON);
    pos6=al_load_bitmap(LOCAL_ICON);


    //inicializacao das structs
    inicializarHeroi();

    return 0;
}


//FUN플O DE FINALIZA플O DO JOGO
void finalizar(){
    //destruicoes
    al_destroy_display(janela);
    al_destroy_bitmap(fundo);
    al_destroy_bitmap(face);
    al_destroy_bitmap(caixa_mensagem);
    al_destroy_font(fonte);
    al_destroy_audio_stream(musica);
    al_destroy_event_queue(fila);
}

//todas as fases (cenarios) do jogoi
void faseBiblioteca(); //id1, pos1

void faseSaladeAula(); //id2, pos2

void faseLabCom(); //id3, pos3

void faseSalaProfessores(); //id4, pos4

void faseIHS(); //id5, pos5

void faseCantina(); //id6, pos6

void faseCorredor(); //id7

void faseCasa(); //id8




//FUN합ES DE EXECUTAR MUSICA OU EXIBIR IMAGEM
void executarMusica(ALLEGRO_AUDIO_STREAM* audio, char som[]){
    audio=al_load_audio_stream(som, 4, 1240);
    al_attach_audio_stream_to_mixer(audio, al_get_default_mixer());
    al_set_audio_stream_playing(audio, true);
}

void colocarFundo(char caminho[], int alfa){ //chamada apenas na fadein
    fundo=al_load_bitmap(caminho);
    while(!fundo){
        fprintf(stderr, "Deu ruim %s", caminho);
        al_destroy_bitmap(fundo);
        fundo=al_load_bitmap(caminho);
    }
    al_draw_tinted_bitmap(fundo, al_map_rgba(alfa, alfa, alfa, alfa), 0, 0, 0);
    al_flip_display();
}

void mostrarAvatar(char caminho[]){
    face=al_load_bitmap(caminho);
    al_draw_bitmap(face, AVATAR_X, AVATAR_Y, 0);
    al_flip_display();
}


//FUN합ES DE BUFFERING
void bufferingBackground(){
    al_clear_to_color(al_map_rgb(0,0,0));
    al_draw_bitmap(fundo, 0,0,0);
}

void bufferingMessageBox(){
    al_draw_bitmap(caixa_mensagem, BOX_X, BOX_Y, 0);
}

void bufferingAvatar(){
    al_draw_bitmap(face, AVATAR_X, AVATAR_Y, 0);
}

void checarCondicao(){
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

void bufferingHud(){
    bufferingBackground();
    checarCondicao();
    al_draw_bitmap(barra_energia, ENERGIA_BAR_X, ENERGIA_BAR_Y, 0);
    al_draw_bitmap(barra_estresse, STRESS_BAR_X, STRESS_BAR_Y, 0);
    al_draw_bitmap(hud, HUD_X, HUD_Y, 0);
    al_draw_textf(fontehud, al_map_rgb(255,255,255), 64, 454,0, "%d/100", h->energia);
    al_draw_textf(fontehud, al_map_rgb(255,255,255), 64, 411,0, "%d/100", h->estresse);
    al_flip_display();
}

//FUN합ES DE FADEIN/FADEOUT
void fadein(int velocidade, char caminho[]){
    if (velocidade < 0)
    {
        velocidade = 1;
    }
    else if (velocidade > 15)
    {
        velocidade = 15;
    }

    int alfa;
    for (alfa = 0; alfa <= 255; alfa += velocidade)
    {
        al_clear_to_color(al_map_rgb(0, 0, 0));
        colocarFundo(caminho, alfa);
        al_rest(0.005);
    }
}

void fadeout(int velocidade){
    ALLEGRO_BITMAP *buffer;
    buffer=al_create_bitmap(640, 480);
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

void exibirStatus(){

}

void exibirMochila(){

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

void exibirMapa(){
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
                            fadeout(5);
                            faseBiblioteca();
                    }
                    else if(evento.mouse.x >= POS2X&&
                        evento.mouse.x <= POS2X+40&&
                        evento.mouse.y >= POS2Y &&
                        evento.mouse.y <= POS2Y+40){
                            //sair=true;
                            fadeout(5);
                            faseSaladeAula();
                    }
                    else if(evento.mouse.x >= POS3X&&
                        evento.mouse.x <= POS3X+40&&
                        evento.mouse.y >= POS3Y &&
                        evento.mouse.y <= POS3Y+40){
                            //sair=true;
                            fadeout(5);
                            faseLabCom();
                    }
                    else if(evento.mouse.x >= POS4X&&
                        evento.mouse.x <= POS4X+40&&
                        evento.mouse.y >= POS4Y &&
                        evento.mouse.y <= POS4Y+40){
                            //sair=true;
                            fadeout(5);
                            faseSalaProfessores();
                    }
                    else if(evento.mouse.x >= POS5X&&
                        evento.mouse.x <= POS5X+40&&
                        evento.mouse.y >= POS5Y &&
                        evento.mouse.y <= POS5Y+40){
                            //sair=true;
                            fadeout(5);
                            faseIHS();
                    }
                    else if(evento.mouse.x >= POS6X&&
                        evento.mouse.x <= POS6X+40&&
                        evento.mouse.y >= POS6Y &&
                        evento.mouse.y <= POS6Y+40){
                            //sair=true;
                            fadeout(5);
                            faseCantina();
                    }
                    else if(evento.mouse.x >= 540 &&
                            evento.mouse.x <= 600 &&
                            evento.mouse.y >= 8 &&
                            evento.mouse.y <= 28){
                                sair = true;
                            }
                }
            }


    }
    fadeout(5);

}

//FUN합ES DE HUD
void exibirHud(){
    checarCondicao();
    al_draw_bitmap(barra_energia, ENERGIA_BAR_X, ENERGIA_BAR_Y, 0);
    al_draw_bitmap(barra_estresse, STRESS_BAR_X, STRESS_BAR_Y, 0);
    al_draw_bitmap(hud, HUD_X, HUD_Y, 0);
    al_draw_textf(fontehud, al_map_rgb(255,255,255), 64, 454,0, "%d/100", h->energia);
    al_draw_textf(fontehud, al_map_rgb(255,255,255), 64, 411,0, "%d/100", h->estresse);
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
                            fadeout(5);
                            exibirMapa();
                        }
                    else if(evento.mouse.x >= 543&&
                        evento.mouse.x <= 577&&
                        evento.mouse.y >= 422 &&
                        evento.mouse.y <= 474){
                            fadeout(5);
                            exibirMochila();
                        }
                    else if(evento.mouse.x >= 479&&
                        evento.mouse.x <= 528&&
                        evento.mouse.y >= 427 &&
                        evento.mouse.y <= 476){
                            fadeout(5);
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
void escreverMensagem(char arquivo[]){
    al_register_event_source(fila, al_get_mouse_event_source());
    char linha1[30], linha2[30], linha3[30];
    FILE *f;
    int alfa;
    bool passar=false;
    for (alfa = 0; alfa <= 100; alfa +=1)
    {
        al_draw_tinted_bitmap(caixa_mensagem, al_map_rgba(alfa, alfa, alfa, alfa), BOX_X, BOX_Y, 0);
        al_flip_display();
        al_rest(0.005);
    }
    al_draw_tinted_bitmap(caixa_mensagem, al_map_rgba(alfa, alfa, alfa, alfa), BOX_X, BOX_Y, 0);
    f=fopen(arquivo, "r");
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
            passar=false;
            while(!passar){
                while(!al_is_event_queue_empty(fila)){
                    al_wait_for_event(fila, &evento);
                    if(evento.type==ALLEGRO_EVENT_MOUSE_BUTTON_UP){
                        passar=true;
                    }
                }
            }
            bufferingBackground();
            bufferingAvatar();
            bufferingMessageBox();
    }
}

void introducaoJogo();

int main()
{
    inicializar();
    introducaoJogo();
    finalizar();
    return 0;
}

void introducaoJogo(){
    executarMusica(musica, MUSIC_INTRO);
    fadein(5, FUNDO_LAB);
    mostrarAvatar(AVATAR_SERGIO);
    escreverMensagem(DIALOGO_INTRO);
    bufferingBackground();
    mostrarAvatar(AVATAR_OSORIO);
    escreverMensagem(OSORIO_INTRO);
    bufferingBackground();
    mostrarAvatar(AVATAR_JOAO);
    escreverMensagem(JOAO_INTRO);
    bufferingBackground();
    mostrarAvatar(AVATAR_TONHO);
    escreverMensagem(TONHO_INTRO);
    bufferingBackground();
    mostrarAvatar(AVATAR_RAMON);
    escreverMensagem(RAMON_INTRO);
    bufferingBackground();
    al_destroy_audio_stream(musica);
    executarMusica(musica, MUSIC_ENDING);
    int passar;
    passar=false;
        while(!passar){
            while(!al_is_event_queue_empty(fila)){
                al_wait_for_event(fila, &evento);
                if(evento.type==ALLEGRO_EVENT_MOUSE_BUTTON_UP){
                    passar=true;
                }
            }
        }
    al_destroy_audio_stream(musica);
    //exibirMapa();
    exibirHud();
}

void faseBiblioteca(){
    al_destroy_bitmap(fundo);
    fadein(5, FUNDO_BIBLIOTECA);
    exibirHud();
}

void faseSaladeAula(){
    al_destroy_bitmap(fundo);
    fadein(5, FUNDO_SALADEAULA);
    exibirHud();
}

void faseCorredor(){
    al_destroy_bitmap(fundo);
    fadein(5, FUNDO_CORREDOR);
    exibirHud();
}

void faseCantina(){
    al_destroy_bitmap(fundo);
    fadein(5, FUNDO_CANTINA);
    exibirHud();
}

void faseIHS(){
    al_destroy_bitmap(fundo);
    fadein(5, FUNDO_IHS);
    exibirHud();
}

void faseSalaProfessores(){
    al_destroy_bitmap(fundo);
    fadein(5, FUNDO_PROFESSORES);
    exibirHud();
}

void faseLabCom(){
    al_destroy_bitmap(fundo);
    fadein(5, FUNDO_LAB);
    exibirHud();
}

void faseCasa(){
    al_destroy_bitmap(fundo);
    fadein(5, FUNDO_CASA);
    exibirHud();
}
