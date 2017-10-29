//Esses são alguns defines, das condições iniciais do personagem.
#define ENERGIA_INICIAL 100
#define ESTRESSE_INICIAL 30
#define LEVEL_INICIAL 1
#define EXP_INICIAL 0
#define NUM_CONHECIMENTO 6
#define NUM_HABILIDADES 4

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
//Esses fundos são da tela de status, de menu(inventario) e do mapa
#define FUNDO_STATUS "imagens/status.png"
#define FUNDO_MENU "imagens/menu.png"
#define FUNDO_MAPA "imagens/mapa.png"

//defines das posições dos avatares e das imagens de cada personagem
#define AVATAR_X 250
#define AVATAR_Y 45
#define AVATAR_SERGIO "imagens/faces/sergio_face.png"
#define AVATAR_OSORIO "imagens/faces/osorio_face.png"
#define AVATAR_JOAO "imagens/faces/joao_face.png"
#define AVATAR_TONHO "imagens/faces/tonho_face.png"
#define AVATAR_RAMON "imagens/faces/ramon_face.png"

//defines de imagens de alguns icones, como icone do mapa (eu acho que esse icone do mapa não está sendo mais usado, porque coloquei ele direto na
//imagem da HUD, mas o icone_local são os icones vermelhos dentro da tela de mapa
#define MAP_ICON "imagens/icones/icone_mapa.png"
#define LOCAL_ICON "imagens/icones/icone_local.png"

//defines de algumas musicas. Nem levem isso a sério por enquanto.
#define MUSIC_INTRO "audio/sarradness.ogg"
#define MUSIC_ENDING "audio/arnold.ogg"

//Defines de alguns arquivos, no caso, das listas de habilidades e de itens
#define LISTA_HABILIDADES "itens/lista_de_habilidades.txt"
#define LISTA_ITENS "itens/lista_de_itens.txt"
//define as posições das caixinhas azuis onde ficam as imagems dos itens no inventário
#define ITEM_BOX_X 49
#define ITEM_BOX_Y 47

//defines dos dialogos. Pensei em colocar no padrão "Nome do Personagem_Situação" pra facilitar na hora de chamar os diálogos
#define DIALOGO_INTRO "mensagens/intro_dialogo_sergio.txt"
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

//Aqui nós temos algumas estructs com ponteiros.
ALLEGRO_DISPLAY *janela; //O ponteiro que representa a janela do jogo.
//ALEEGRO_BITMAP são os ponteiros das imagens. Cada ponteiro representa um tipo de imagem em especifico
ALLEGRO_BITMAP *fundo, *menu, *status, *face, *caixa_mensagem, *icone, *pos1, *pos2, *pos3, *pos4, *pos5, *pos6, *hud, *barra_estresse, *barra_energia;
ALLEGRO_AUDIO_STREAM *musica; //ponteiro para receber uma musica
ALLEGRO_FONT *fonte, *fontehud; //ponteiros para receber fontes. Usei dois porque a fonte na HUD é pequena, mas eles usam o mesmo arquivo de fonte
ALLEGRO_EVENT_QUEUE *fila; //ponteiro para receber uma fila de eventos.
ALLEGRO_EVENT evento; //uma struct evento, onde nos usamos pra definir qual evento estamos esperandoa acontecer, fica mais claro abaixo.

//STRUCTS
typedef struct habilidade { //Struct que guarda as habilidades do herói
    int id; //ID da habilidade. Por enquanto acho que é inútil, mas fica aqui por enquanto por precaução
    char nome[30]; //Nome da habilidade
    char efeito[50]; //Efeito da habilidade
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
    float sorte; //a sorte será usada em alguns calculos, como se o personagem encontrará um item no caminho, acertará um ataque ou conseguirá colar
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
    struct ALLEGRO_BITMAP *img; //o ponteiro que receberá a imagem do item
    struct item *prox; //próximo item da lista encadeada de itens
} Item;
Item *i;

typedef struct dia{ //essa struct define os status do dia e do turno
    int turno; //turno em que o personagem está durante o dia
    int dia; // dia da semana em que o personagem está
    char semana[20]; //string para armazenar o dia da semana, de Segunda a Sexta
} Dia;
Dia *d;
//FUN플O DE INICIALIZA플O DO JOGO
void inicializarHeroi(){ //Essa função incializa as características do herói, usamos defines pra sruct heroi e Conhecimento e arquivos para Habilidades
    int i, j, num;
    char aux[50];
    FILE *f;
    f=fopen(LISTA_HABILIDADES, "r");
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
            while(!feof(f)){
                        fscanf(f, "%50[^;]", aux);
                        if(strcmp(h->c[i].nome, aux)==0){
                            fgetc(f);
                            fscanf(f, "%d", &num);
                            if(num==j){
                                fgetc(f);
                                fscanf(f, "%50[^;]", h->c[i].h[j].nome);
                                fgetc(f);
                                fscanf(f, "%50[^;]", h->c[i].h[j].efeito);
                                fgetc(f);
                                fscanf(f, "%d", &h->c[i].h[j].dano);
                                fgetc(f);
                                fscanf(f, "%d", &h->c[i].h[j].acerto);
                                fgetc(f);
                                h->c[i].h[j].habilitada=0;
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
        }
    }
}

bool inicializar(){ //Essa função inicializa outras coisas, além de coisas do allegro
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
    al_reserve_samples(1); //define o numero de musicas, algo assim
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
    d->dia=0; //define o primeiro dia como 0

    al_get_backbuffer(janela); //nao lembro porque isso está aqui.

    fonte=al_load_font("arial_narrow_7.ttf", 20, 0); //define a fonten normal do jogo
    fontehud=al_load_font("arial_narrow_7.ttf", 12, 0); //define a fonte da HUD dojogo (apenas tem um tamanho menor)

    fila=al_create_event_queue(); //cria uma fila de eventos no ponteiro fila


    //carregamento de algumas imagens
    hud=al_load_bitmap(HUD); //carrega a iamgem da HUD
    menu=al_load_bitmap(FUNDO_MENU); //carrega fundo do menu de itens
    status=al_load_bitmap(FUNDO_STATUS); //caregga fundo do status

    //carrega todos os icones de localizaçao no mapa. Eu acho isso um pouco inutil por enquanto, porque podemos simplesmente colar eles na imagem
    //de fundo do mapa, sem precisar de novas imagems pra isso
    pos1=al_load_bitmap(LOCAL_ICON);
    pos2=al_load_bitmap(LOCAL_ICON);
    pos3=al_load_bitmap(LOCAL_ICON);
    pos4=al_load_bitmap(LOCAL_ICON);
    pos5=al_load_bitmap(LOCAL_ICON);
    pos6=al_load_bitmap(LOCAL_ICON);

    inicializarHeroi(); //chama a função de inicializar herói, que vimos acima

    srand(time(NULL)); //alimenta o rand()

    return 0;
}

int adicionarItem(int id){ //função que adiciona um item à lista de itens do heroi. Os itens são buscados em um arquivo.
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
            nova->aplicado=0;
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

//FUN플O DE FINALIZA플O DO JOGO
void finalizar(){
    //destruicoes dos ponteiros utilizados. Ainda existem muitos ponteiros para destruir.
    al_destroy_display(janela);
    al_destroy_bitmap(fundo);
    al_destroy_bitmap(face);
    al_destroy_bitmap(caixa_mensagem);
    al_destroy_font(fonte);
    al_destroy_audio_stream(musica);
    al_destroy_event_queue(fila);
}

//todas as fases (cenarios) do jogo, em funções que estão explicitadas depois da main
void faseBiblioteca(); //id1, pos1

void faseSaladeAula(); //id2, pos2

void faseLabCom(); //id3, pos3

void faseSalaProfessores(); //id4, pos4

void faseIHS(); //id5, pos5

void faseCantina(); //id6, pos6

void faseCorredor(); //id7

void faseCasa(); //id8

int checarDia(){ //essa função checa em qual dia o personagem está. Ela existe porque, para melhor ituição, coloquei para o personagem ir para
                //casa apois clicar no icone de mapa. Assim, o personagem pode ver em qual turno ele está depoos de feitas as coisas
    if(d->turno==3){
        d->turno=0;
        faseCasa();
        return 1;
    }
    return 0;
}

int passarTurno(){ //função de passar o turno, que é chamada quando o personagem troca de local
    int luck;
    Item *aux;
    if(d->turno==0){
        d->dia++;
        switch(d->dia){
        case 1:
            strcpy(d->semana, "Segunda"); break;
        case 2:
            strcpy(d->semana, "Terca"); break;
        case 3:
            strcpy(d->semana, "Quarta"); break;
        case 4:
            strcpy(d->semana, "Quinta"); break;
        case 5:
            strcpy(d->semana, "Sexta"); break;
        }
        if(d->dia==6){
            fprintf(stderr, "Hora das provas, vacilao\n");
        }
        d->turno++;
        h->energia-=5;
        h->estresse+=5;
        return 1;
    }
    if((rand()%10)*h->sorte>=8){ //aqui, chamaremos a fase do Corredor,onde o personagem recebe itens do veterano, dependendo de sua sorte
        luck=(rand()%11)*h->sorte;
        aux=i;
        while(aux!=NULL){
            if(luck==aux->id){
                return 1;
            }
            aux=aux->prox;
        }
        faseCorredor(luck);
        return 1;
    }
    else{
        d->turno++;
        h->energia-=5;
        h->estresse+=5;
    }
    return 0;
}

//FUN합ES DE EXECUTAR MUSICA OU EXIBIR IMAGEM
void executarMusica(ALLEGRO_AUDIO_STREAM* audio, char som[]){ //essa função executa alguma musica, sendo passados um ponteiro de musica e o caminho dela
    audio=al_load_audio_stream(som, 4, 1240);
    al_attach_audio_stream_to_mixer(audio, al_get_default_mixer());
    al_set_audio_stream_playing(audio, true);
}

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
    al_draw_bitmap(face, AVATAR_X, AVATAR_Y, 0);
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
        if(con->habilitada==1){ //checa se a habilidade está habilitada
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
                            exibirConhecimento(0);

                    }
                    else if(evento.mouse.x >= 124&&
                        evento.mouse.x <= 184&&
                        evento.mouse.y >= 48 &&
                        evento.mouse.y <= 108){
                            bufferingStatus();
                            exibirConhecimento(1);

                    }
                    else if(evento.mouse.x >= 205&&
                        evento.mouse.x <= 302&&
                        evento.mouse.y >= 44 &&
                        evento.mouse.y <= 110){
                            bufferingStatus();
                            exibirConhecimento(2);
                    }
                    else if(evento.mouse.x >= 315&&
                        evento.mouse.x <= 405&&
                        evento.mouse.y >= 43 &&
                        evento.mouse.y <= 114){
                            bufferingStatus();
                            exibirConhecimento(3);
                    }
                    else if(evento.mouse.x >= 419&&
                        evento.mouse.x <= 491&&
                        evento.mouse.y >= 44 &&
                        evento.mouse.y <= 111){
                            bufferingStatus();
                            exibirConhecimento(4);
                    }
                    else if(evento.mouse.x >= 513&&
                        evento.mouse.x <= 586&&
                        evento.mouse.y >= 38 &&
                        evento.mouse.y <= 119){
                            bufferingStatus();
                            exibirConhecimento(5);
                    }
                    else if(evento.mouse.x >= 0&&
                        evento.mouse.x <= 130&&
                        evento.mouse.y >= 433 &&
                        evento.mouse.y <= 480){
                            sair=true;
                }
            }
        }
    }
    bufferingBackground();
    bufferingHud();
}

void exibirMochila(){ //Exibe os itens do heroi
    bool sair=false;
    bufferingBackground();
    al_draw_bitmap(menu, 0, 0, 0);
    Item *aux;
    aux=i;
    while(aux!=NULL){
        aux->img=malloc(sizeof(ALLEGRO_BITMAP*));
        aux->img=al_load_bitmap(aux->imagem);
        al_draw_bitmap(aux->img, aux->coorx, aux->coory, 0);
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
                            sair=true;
                }
                else{
                    aux=i;
                    while(aux!=NULL){
                        if(evento.mouse.x >= aux->coorx&&
                        evento.mouse.x <= aux->coorx+ITEM_BOX_X&&
                        evento.mouse.y >= aux->coory &&
                        evento.mouse.y <= aux->coory+ITEM_BOX_Y){
                            bufferingBackground();
                            bufferingMenu();
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
                            fadeout(5);
                            passarTurno();
                            faseBiblioteca();
                    }
                    else if(evento.mouse.x >= POS2X&&
                        evento.mouse.x <= POS2X+40&&
                        evento.mouse.y >= POS2Y &&
                        evento.mouse.y <= POS2Y+40){
                            //sair=true;
                            fadeout(5);
                            passarTurno();
                            faseSaladeAula();
                    }
                    else if(evento.mouse.x >= POS3X&&
                        evento.mouse.x <= POS3X+40&&
                        evento.mouse.y >= POS3Y &&
                        evento.mouse.y <= POS3Y+40){
                            //sair=true;
                            fadeout(5);
                            passarTurno();
                            faseLabCom();
                    }
                    else if(evento.mouse.x >= POS4X&&
                        evento.mouse.x <= POS4X+40&&
                        evento.mouse.y >= POS4Y &&
                        evento.mouse.y <= POS4Y+40){
                            //sair=true;
                            fadeout(5);
                            passarTurno();
                            faseSalaProfessores();
                    }
                    else if(evento.mouse.x >= POS5X&&
                        evento.mouse.x <= POS5X+40&&
                        evento.mouse.y >= POS5Y &&
                        evento.mouse.y <= POS5Y+40){
                            //sair=true;
                            fadeout(5);
                            passarTurno();
                            faseIHS();
                    }
                    else if(evento.mouse.x >= POS6X&&
                        evento.mouse.x <= POS6X+40&&
                        evento.mouse.y >= POS6Y &&
                        evento.mouse.y <= POS6Y+40){
                            //sair=true;
                            fadeout(5);
                            passarTurno();
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
    fadein(5, caminho);
}

//FUN합ES DE HUD
void exibirHud(char caminho[]){
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
                            fadeout(5);
                            if(!checarDia()){
                                exibirMapa(caminho);
                            }
                        }
                    else if(evento.mouse.x >= 543&&
                        evento.mouse.x <= 577&&
                        evento.mouse.y >= 422 &&
                        evento.mouse.y <= 474){
                            exibirMochila();
                        }
                    else if(evento.mouse.x >= 479&&
                        evento.mouse.x <= 528&&
                        evento.mouse.y >= 427 &&
                        evento.mouse.y <= 476){
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
    if(inicializar()){
        fprintf(stderr, "Erro!");
        return 0;
    }
    introducaoJogo();
    finalizar();
    return 0;
}

void introducaoJogo(){
    executarMusica(musica, MUSIC_INTRO);
    fadein(5, FUNDO_LAB);
    /*mostrarAvatar(AVATAR_SERGIO);
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
    bufferingBackground();*/
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
    exibirHud(FUNDO_LAB);
}

void faseBiblioteca(){
    al_destroy_bitmap(fundo);
    fadein(5, FUNDO_BIBLIOTECA);
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
    exibirHud(FUNDO_BIBLIOTECA);
}

void faseSaladeAula(){
    al_destroy_bitmap(fundo);
    fadein(5, FUNDO_SALADEAULA);
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
    exibirHud(FUNDO_SALADEAULA);
}

void faseCorredor(int luck){
    al_destroy_bitmap(fundo);
    fadein(5, FUNDO_CORREDOR);
    adicionarItem(luck);
    exibirHud(FUNDO_CORREDOR);
}

void faseCantina(){
    al_destroy_bitmap(fundo);
    fadein(5, FUNDO_CANTINA);
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
    exibirHud(FUNDO_CANTINA);
}

void faseIHS(){
    al_destroy_bitmap(fundo);
    fadein(5, FUNDO_IHS);
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
    exibirHud(FUNDO_IHS);
}

void faseSalaProfessores(){
    al_destroy_bitmap(fundo);
    fadein(5, FUNDO_PROFESSORES);
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
    exibirHud(FUNDO_PROFESSORES);
}

void faseLabCom(){
    al_destroy_bitmap(fundo);
    fadein(5, FUNDO_LAB);
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
    exibirHud(FUNDO_LAB);
}

void faseCasa(){
    al_destroy_bitmap(fundo);
    fadein(5, FUNDO_CASA);
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
    exibirHud(FUNDO_CASA);
}

void batalha(){


}
