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
//defines de background
#define FUNDO_LAB "imagens/lab_com.jpg"

//defines de avatares
#define AVATAR_X 250
#define AVATAR_Y 45
#define AVATAR_SERGIO "imagens/sergio_face.png"
#define AVATAR_OSORIO "imagens/osorio_face.png"
#define AVATAR_JOAO "imagens/joao_face.png"
#define AVATAR_TONHO "imagens/tonho_face.png"
#define AVATAR_RAMON "imagens/ramon_face.png"

//musicas
#define MUSIC_INTRO "audio/sarradness.ogg"

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
ALLEGRO_BITMAP *fundo, *face, *caixa_mensagem, *buffer;
ALLEGRO_AUDIO_STREAM *musica;
ALLEGRO_FONT *fonte;
ALLEGRO_EVENT_QUEUE *fila;
ALLEGRO_EVENT evento;

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
    fila=al_create_event_queue();
    return 0;
}

void executarMusica(ALLEGRO_AUDIO_STREAM* audio, char som[]){
    audio=al_load_audio_stream(som, 4, 1240);
    al_attach_audio_stream_to_mixer(audio, al_get_default_mixer());
    al_set_audio_stream_playing(audio, true);
}

void colocarFundo(char caminho[], int alfa){
    fundo=al_load_bitmap(caminho);
    al_draw_tinted_bitmap(fundo, al_map_rgba(alfa, alfa, alfa, alfa), 0, 0, 0);
    al_flip_display();
}

void mostrarAvatar(char caminho[]){
    face=al_load_bitmap(caminho);
    al_draw_bitmap(face, AVATAR_X, AVATAR_Y, 0);
    al_flip_display();
}

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
    //destruicoes
    al_destroy_display(janela);
    al_destroy_bitmap(fundo);
    al_destroy_bitmap(face);
    al_destroy_bitmap(caixa_mensagem);
    al_destroy_font(fonte);
    al_destroy_audio_stream(musica);
    //al_destroy_event_queue(fila);
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
}
