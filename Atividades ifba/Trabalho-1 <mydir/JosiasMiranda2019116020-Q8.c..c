#include <stdio.h>
#include <stdlib.h>


//ok

void inicializaTabuleiro(int tabuleiro[][10])
{
    int linha, coluna;
        for(linha=0 ; linha <10  ; linha++ )
            for(coluna=0 ; coluna < 10 ; coluna++ )
                tabuleiro[linha][coluna]=-1;
}

void mostraTabuleiro(int tabuleiro[][10])
{

    int linha, coluna;

        printf("\t1 \t2 \t3 \t4 \t5 \t6 \t7 \t8 \t9 \t10");
        printf("\n");

        for(linha=0 ; linha < 10 ; linha++ ){
            printf("%d",linha+1);
            for(coluna=0 ; coluna < 10 ; coluna++ ){
                if(tabuleiro[linha][coluna]==-1){
                    printf("\t~");
                }else if(tabuleiro[linha][coluna]==0){
                    printf("\t*");
                }else if(tabuleiro[linha][coluna]==1){
                    printf("\tX");
                }

            }
            printf("\n");
        }

    }

void iniciaNavios(int navios[][4]){  // void iniciaNavios(int navios[][4- mudar de acordo com a quantidade o certo e colocar + de 10 em caso de +]) 

        int navio, anterior;

        for(navio=0 ; navio < 5 ; navio++){
            navios[navio][0]= rand()%5;
            navios[navio][1]= rand()%5;
            navios[navio][2]= rand()%5;
            navios[navio][3]= rand()%5;
            
            // tamanho dos navios
          /*  
          
          ----------------------------------------------
          
          
            for(i=1;i<=j;i=i+1)
	{
	printf("Digite o tamanho do navio:%d\n",i);
	scanf("%d",&navio);
	
}

          for(navio=0 ; navio < 5 ; navio++){
            navios[navio][0]= rand()%5;
            navios[navio][1]= rand()%5;
            navios[navio][2]= rand()%5;
            navios[navio][3]= rand()%5;
            
            
            // caso haja ume estrutura de repeti??o al?m dos 5 navios
            if(j>=5)
            {
             for(navio=0,i=0 ; navio < j,i<j-2 ; navio++, i=i+1){
            navios[navio][i]= rand()%5;
       }
   }
   
   
   
       
       // finalizaria aqui------------------------------------------------------------------------
            
          falta colocar as partes da limmita??o relacionada a quantidade
        ------------------------------------------------
          
          
          int tam[30];
          
            for(i=1;i<=j;i=i+1)
	{
	printf("Digite o tamanho do navio:%d\n",i);
	scanf("%d",&navio);
	
}
i[0]=3
i[1]=5
navio 1 tamanho 3
navio 2 tamanho 5

at? chegar a qtd. final de navios.


preencher at? fechar a quantidade


*/
            
            //agora vamos checar se esse par n?o foi sorteado
            //se foi, so sai do do...while enquanto sortear um diferente
        // if(j==5)
            
            for(anterior=0 ; anterior < navio ; anterior++){
                if( (navios[navio][0] == navios[anterior][0])&&(navios[navio][1] == navios[anterior][1])&&(navios[navio][2] == navios[anterior][2])&&(navios[navio][3] == navios[anterior][3]) )
                    do{
                        navios[navio][0]= rand()%5;
                        navios[navio][1]= rand()%5;
                        navios[navio][2]= rand()%5;
                        navios[navio][3]= rand()%5;
                        
                    }while( (navios[navio][0] == navios[anterior][0])&&(navios[navio][1] == navios[anterior][1])&&(navios[navio][2] == navios[anterior][2])&&(navios[navio][3] == navios[anterior][3]) );
            }
            
            // outra possibilidade no caso de aumentar o numero
            
            /*
             else 
             {
            for(anterior=0 ; anterior < navio ; anterior++){
                if( (navios[navio][0] == navios[anterior][0])&&(navios[navio][1] == navios[anterior][1])&&(navios[navio][2] == navios[anterior][2])&&(navios[navio][3] == navios[anterior][3]) )
                        navios[navio][0]= rand()%5;
                        navios[navio][1]= rand()%5;
                        navios[navio][2]= rand()%5;
                        navios[navio][3]= rand()%5;
                        
                      for(anterior=0 ; anterior < navio ; anterior++){
                      {
                     for(navio=0 ; navio < j ; navio++){
            navios[navio][i]= rand()%5;
       }
       
   }
                    }
                }
            }
            
                */
        }
    }

void darTiro(int tiro[2])
{

        printf("Linha: ");
        scanf("%d",&tiro[0]);
        tiro[0]--;

        printf("Coluna: ");
        scanf("%d",&tiro[1]);
        tiro[1]--;

}

int acertou(int tiro[2], int navios[][4])  // void iniciaNavios(int navios[][4- mudar de acordo com a quantidade o certo e colocar + de 10 em caso de +]) 
{
    int navio;

        for(navio=0 ; navio < 5 ; navio++){
            if( tiro[0]==navios[navio][0] && tiro[1]==navios[navio][1]){
                printf("Voc? acertou o tiro (%d,%d)\n",tiro[0]+1,tiro[1]+1);
                return 1;
            }
        }
        return 0;
    }
    
     /*
     
     int acertou(int tiro[2], int navios[][10])  
{
    int navio;

        for(navio=0 ; navio < 5 ; navio++){
            if( tiro[0]==navios[navio][0] && tiro[1]==navios[navio][1]){
                printf("Voc? acertou o tiro (%d,%d)\n",tiro[0]+1,tiro[1]+1);
                // return 1; ideia de tirar esse //
                
                
                k=k+1;
                
                if(k==navios[navio])
                
                {
                
                 return 1;
                
            }
            
            else 
            
            return 0;
            
            }
        }
        return 0;
    }
     
     
     */

void dica(int tiro[2], int navios[][4], int tentativa) // void iniciaNavios(int navios[][4- mudar de acordo com a quantidade o certo e colocar + de 10 em caso de +]) 
{
        int linha=0,
            coluna=0,
            fila;

        //conta quantos navios h? na linha tiro[0]
        for(fila=0 ; fila < 5 ; fila++){
            if(navios[fila][0]==tiro[0])
                linha++;
            if(navios[fila][1]==tiro[1])
                coluna++;
        }

        printf("\nDica %d: \nlinha %d -> %d navios\ncoluna %d -> %d navios\n",tentativa,tiro[0]+1,linha,tiro[1]+1,coluna);
}
 // void iniciaNavios(int navios[][4- mudar de acordo com a quantidade o certo e colocar + de 10 em caso de +]) 
void alteraTabuleiro(int tiro[2], int navios[][4], int tabuleiro[][10]){ // mudar de acordo com a quantidade, como tem uma + poss?bilidade de mudan?a o certo e colocar // mudar de acordo com a quantidade, como tem uma + poss?bilidade de mudan?a o certo e colocar int navios[][4]
        if(acertou(tiro,navios))
            tabuleiro[tiro[0]][tiro[1]]=1;
        else
            tabuleiro[tiro[0]][tiro[1]]=0;
    }

int main() {
        int tabuleiro[10][10];
        int navios[5][4];  // mudar de acordo com a quantidade, como tem uma + poss?bilidade de mudan?a o certo e colocar navios [10][15]
        int tiro[2];
        int tentativas=0,
            acertos=0;
            int qtd,j;
            
        printf("Digite  a quantidade de navios extras que serao colocados:\n");
	    scanf("%d",&qtd);
	
	j=5+qtd;

        inicializaTabuleiro(tabuleiro);
        iniciaNavios(navios);

        printf("\n");

        do{
            mostraTabuleiro(tabuleiro);
            darTiro(tiro);
            tentativas++;

            if(acertou(tiro,navios)){
                dica(tiro,navios,tentativas);
                acertos++;
            }
            else
                dica(tiro,navios,tentativas);

            alteraTabuleiro(tiro,navios,tabuleiro);


        }while(acertos!=j);

        printf("\n\n\nJogo terminado. Jogador 1 acertou os %d navios em %d tentativas",j, tentativas);
        mostraTabuleiro(tabuleiro);
    }
    //       inicio j 2
    
    void inicializaTabuleiro1(int tabuleiro[][10])
{
    int linha, coluna;
        for(linha=0 ; linha <10  ; linha++ )
            for(coluna=0 ; coluna < 10 ; coluna++ )
                tabuleiro[linha][coluna]=-1;
}

void mostraTabuleiro1(int tabuleiro[][10])
{

    int linha, coluna;

        printf("\t1 \t2 \t3 \t4 \t5 \t6 \t7 \t8 \t9 \t10");
        printf("\n");

        for(linha=0 ; linha < 10 ; linha++ ){
            printf("%d",linha+1);
            for(coluna=0 ; coluna < 10 ; coluna++ ){
                if(tabuleiro[linha][coluna]==-1){
                    printf("\t~");
                }else if(tabuleiro[linha][coluna]==0){
                    printf("\t*");
                }else if(tabuleiro[linha][coluna]==1){
                    printf("\tX");
                }

            }
            printf("\n");
        }

    }

void iniciaNavios1(int navios[][4]){  // void iniciaNavios(int navios[][4- mudar de acordo com a quantidade o certo e colocar + de 10 em caso de +]) 

        int navio, anterior;

        for(navio=0 ; navio < 5 ; navio++){
            navios[navio][0]= rand()%5;
            navios[navio][1]= rand()%5;
            navios[navio][2]= rand()%5;
            navios[navio][3]= rand()%5;
            
            // tamanho dos navios
          /*  
          
          ----------------------------------------------
          
          
            for(i=1;i<=j;i=i+1)
	{
	printf("Digite o tamanho do navio:%d\n",i);
	scanf("%d",&navio);
	
}

          for(navio=0 ; navio < 5 ; navio++){
            navios[navio][0]= rand()%5;
            navios[navio][1]= rand()%5;
            navios[navio][2]= rand()%5;
            navios[navio][3]= rand()%5;
            
            
            // caso haja ume estrutura de repeti??o al?m dos 5 navios
            if(j>=5)
            {
             for(navio=0,i=0 ; navio < j,i<j-2 ; navio++, i=i+1){
            navios[navio][i]= rand()%5;
       }
   }
   
   
   
       
       // finalizaria aqui------------------------------------------------------------------------
            
          falta colocar as partes da limmita??o relacionada a quantidade
        ------------------------------------------------
          
          
          int tam[30];
          
            for(i=1;i<=j;i=i+1)
	{
	printf("Digite o tamanho do navio:%d\n",i);
	scanf("%d",&navio);
	
}
i[0]=3
i[1]=5
navio 1 tamanho 3
navio 2 tamanho 5

at? chegar a qtd. final de navios.


preencher at? fechar a quantidade


*/
            
            //agora vamos checar se esse par n?o foi sorteado
            //se foi, so sai do do...while enquanto sortear um diferente
        // if(j==5)
            
            for(anterior=0 ; anterior < navio ; anterior++){
                if( (navios[navio][0] == navios[anterior][0])&&(navios[navio][1] == navios[anterior][1])&&(navios[navio][2] == navios[anterior][2])&&(navios[navio][3] == navios[anterior][3]) )
                    do{
                        navios[navio][0]= rand()%5;
                        navios[navio][1]= rand()%5;
                        navios[navio][2]= rand()%5;
                        navios[navio][3]= rand()%5;
                        
                    }while( (navios[navio][0] == navios[anterior][0])&&(navios[navio][1] == navios[anterior][1])&&(navios[navio][2] == navios[anterior][2])&&(navios[navio][3] == navios[anterior][3]) );
            }
            
            // outra possibilidade no caso de aumentar o numero
            
            /*
             else 
             {
            for(anterior=0 ; anterior < navio ; anterior++){
                if( (navios[navio][0] == navios[anterior][0])&&(navios[navio][1] == navios[anterior][1])&&(navios[navio][2] == navios[anterior][2])&&(navios[navio][3] == navios[anterior][3]) )
                        navios[navio][0]= rand()%5;
                        navios[navio][1]= rand()%5;
                        navios[navio][2]= rand()%5;
                        navios[navio][3]= rand()%5;
                        
                      for(anterior=0 ; anterior < navio ; anterior++){
                      {
                     for(navio=0 ; navio < j ; navio++){
            navios[navio][i]= rand()%5;
       }
       
   }
                    }
                }
            }
            
                */
        }
    }

void darTiro1(int tiro[2])
{

        printf("Linha: ");
        scanf("%d",&tiro[0]);
        tiro[0]--;

        printf("Coluna: ");
        scanf("%d",&tiro[1]);
        tiro[1]--;

}

int acertou1(int tiro[2], int navios[][4])  // void iniciaNavios(int navios[][4- mudar de acordo com a quantidade o certo e colocar + de 10 em caso de +]) 
{
    int navio;

        for(navio=0 ; navio < 5 ; navio++){
            if( tiro[0]==navios[navio][0] && tiro[1]==navios[navio][1]){
                printf("Voc? acertou o tiro (%d,%d)\n",tiro[0]+1,tiro[1]+1);
                return 1;
            }
        }
        return 0;
    }
    
     /*
     
     int acertou(int tiro[2], int navios[][10])  
{
    int navio;

        for(navio=0 ; navio < 5 ; navio++){
            if( tiro[0]==navios[navio][0] && tiro[1]==navios[navio][1]){
                printf("Voc? acertou o tiro (%d,%d)\n",tiro[0]+1,tiro[1]+1);
                // return 1; ideia de tirar esse //
                
                
                k=k+1;
                
                if(k==navios[navio])
                
                {
                
                 return 1;
                
            }
            
            else 
            
            return 0;
            
            }
        }
        return 0;
    }
     
     
     */

void dica1(int tiro[2], int navios[][4], int tentativa) // void iniciaNavios(int navios[][4- mudar de acordo com a quantidade o certo e colocar + de 10 em caso de +]) 
{
        int linha=0,
            coluna=0,
            fila;

        //conta quantos navios h? na linha tiro[0]
        for(fila=0 ; fila < 5 ; fila++){
            if(navios[fila][0]==tiro[0])
                linha++;
            if(navios[fila][1]==tiro[1])
                coluna++;
        }

        printf("\nDica %d: \nlinha %d -> %d navios\ncoluna %d -> %d navios\n",tentativa,tiro[0]+1,linha,tiro[1]+1,coluna);
}
 // void iniciaNavios(int navios[][4- mudar de acordo com a quantidade o certo e colocar + de 10 em caso de +]) 
void alteraTabuleiro1(int tiro[2], int navios[][4], int tabuleiro[][10]){ // mudar de acordo com a quantidade, como tem uma + poss?bilidade de mudan?a o certo e colocar // mudar de acordo com a quantidade, como tem uma + poss?bilidade de mudan?a o certo e colocar int navios[][4]
        if(acertou(tiro,navios))
            tabuleiro[tiro[0]][tiro[1]]=1;
        else
            tabuleiro[tiro[0]][tiro[1]]=0;
    }

int main1() {
        int tabuleiro[10][10];
        int navios[5][4];  // mudar de acordo com a quantidade, como tem uma + poss?bilidade de mudan?a o certo e colocar navios [10][15]
        int tiro[2];
        int tentativas=0,
            acertos=0;
            int qtd,j;
            
        printf("Digite  a quantidade de navios extras que serao colocados:\n");
	    scanf("%d",&qtd);
	
	j=5+qtd;

        inicializaTabuleiro(tabuleiro);
        iniciaNavios(navios);

        printf("\n");

        do{
            mostraTabuleiro(tabuleiro);
            darTiro(tiro);
            tentativas++;

            if(acertou(tiro,navios)){
                dica(tiro,navios,tentativas);
                acertos++;
            }
            else
                dica(tiro,navios,tentativas);

            alteraTabuleiro(tiro,navios,tabuleiro);


        }while(acertos!=j);

        printf("\n\n\nJogo terminado. Jogador 2 acertou os %d navios em %d tentativas",j, tentativas);
        mostraTabuleiro(tabuleiro);
    }
    
    /* ou
    
    #include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

// Constantes nomeadas
const int SIZE=15;
const int BOAT_SIZE_1=2;
const int BOAT_SIZE_2=4;
const int TOTAL_POS=8;
const int CARA=1;
const int COROA=0;

// Classe Jogador
class Jogador {

public:

// Atributos publicos
string nome;
char tabuleiro[SIZE][SIZE];
char tabuleiro_visto[SIZE][SIZE];
int posicoes_restantes;

// Construtor
Jogador(){
    posicoes_restantes=TOTAL_POS;
    for(int cont1=0;cont1<SIZE;cont1++){
        for(int cont2=0;cont2<SIZE;cont2++){
            tabuleiro[cont1][cont2]='~';
            tabuleiro_visto[cont1][cont2]='~';
        }
    }
}

// Exibir tabuleiro
    void exibir_tabuleiro(){
        cout<<"Este ? o tabuleiro de "<<nome<<"\n\n";
        for(int cont1=0;cont1<SIZE;cont1++){
            for(int cont2=0;cont2<SIZE;cont2++){
                cout<<tabuleiro[cont1][cont2]<<" ";
            }
            cout<<"\n";
        }
        cout<<"\n";
        cout<<"Legnda:\n";
        cout<<"~ [?GUA]\n";
        cout<<"0 [Navio posicionado]\n";
        cout<<"\n";
    }

// Exibir tabuleiro visto
    void exibir_tabuleiro_visto(){
        cout<<nome<<" sua vez de jogar\n";
        cout<<"Este ? o tabuleiro do seu oponente\n\n";
        for(int cont1=0;cont1<SIZE;cont1++){
            for(int cont2=0;cont2<SIZE;cont2++){
                cout<<tabuleiro_visto[cont1][cont2]<<" ";
            }
            cout<<"\n";
        }
        cout<<"\n";
        cout<<"Legnda:\n";
        cout<<"~ [?GUA]\n";
        cout<<"# [Errou]\n";
        cout<<"X [Alvo abatido]\n";
        cout<<"\n";
    }

// Posicionar barcos com 2 casas
    void posicionar_barco_2(){

        // Variaveis locais
        int linha;
        int coluna;
        char pos;
        bool flag=false;

        // Posicionar barco
        do{
            system("cls");
            exibir_tabuleiro();
            cout<<"------------------------\n";
            cout<<"POSICIONAR BARCO 2 CASAS\n";
            cout<<"------------------------\n";
            cout<<"Posicao linha (0-14):";
            cin>>linha;
            if(linha < SIZE && linha >=0){
                cout<<"Posicao coluna (0-14):";
                cin>>coluna;
                if(coluna < SIZE && coluna >=0){
                    cout<<"Deseja posicionar o barco na vertical ou horizontal(V/H) ?";
                    cin>>pos;
                    if(pos == 'V'){

                        // Verificar se ? possivel posicionar um barco
                        if(SIZE-linha!=1){

                            // Verificar se n?o h? outros barcos l?
                            int times=0;
                            for(int cont=linha;cont<linha+BOAT_SIZE_1;cont++){
                                if(tabuleiro[cont][coluna]=='~'){
                                    times++;
                                }
                            }

                            // Se o n?mero de espa?o com ?gua for igual ao tamaho do barco, ent?o ? possivel posicionar o barco
                            if(times==BOAT_SIZE_1){

                                // Posi??o legal
                                for(int cont=linha;cont<linha+BOAT_SIZE_1;cont++){
                                    tabuleiro[cont][coluna]='O';
                                }
                                flag=true;
                            }
                        }
                    }else{
                        if(pos == 'H'){

                            // Verificar se ? possivel posicionar um barco
                            if(SIZE-coluna!=1){

                                // Verificar se n?o h? outros barcos l?
                                int times=0;
                                for(int cont=coluna;cont<coluna+BOAT_SIZE_1;cont++){
                                    if(tabuleiro[linha][cont]=='~'){
                                        times++;
                                    }
                                }

                                // Se o n?mero de espa?o com ?gua for igual ao tamaho do barco, ent?o ? possivel posicionar o barco
                                if(times==BOAT_SIZE_1){

                                    // Posi??o legal
                                    for(int cont=coluna;cont<coluna+BOAT_SIZE_1;cont++){
                                        tabuleiro[linha][cont]='O';
                                    }
                                    flag=true;
                                }
                            }
                        }
                    }
                }
            }

            if(flag==false){
                cout<<"BARCO N?O PODE SER POSICIONADO, TENTE NOVAMENTE\n";
                cout<<"Pressione enter para continuar...";
                getch();
            }else{
                cout<<"BARCO POSICIONADO COM SUCESSO\n";
                cout<<"Pressione enter para continuar...";
                getch();
            }

        }while(flag==false);
    }

// Posicionar barcos com 4 casas
    void posicionar_barco_4(){

        // Variaveis locais
        int linha;
        int coluna;
        char pos;
        bool flag=false;

        // Posicionar barco
        do{
            system("cls");
            exibir_tabuleiro();
            cout<<"------------------------\n";
            cout<<"POSICIONAR BARCO 4 CASAS\n";
            cout<<"------------------------\n";
            cout<<"Posicao linha (0-14):";
            cin>>linha;
            if(linha < SIZE && linha >=0){
                cout<<"Posicao coluna (0-14):";
                cin>>coluna;
                if(coluna < SIZE && coluna >=0){
                    cout<<"Deseja posicionar o barco na vertical ou horizontal(V/H) ?";
                    cin>>pos;
                    if(pos == 'V'){

                        // Verificar se ? possivel posicionar um barco
                        if(SIZE-linha>2){

                            // Verificar se n?o h? outros barcos l?
                            int times=0;
                            for(int cont=linha;cont<linha+BOAT_SIZE_2;cont++){
                                if(tabuleiro[cont][coluna]=='~'){
                                    times++;
                                }
                            }

                            // Se o n?mero de espa?o com ?gua for igual ao tamaho do barco, ent?o ? possivel posicionar o barco
                            if(times==BOAT_SIZE_2){

                                // Posi??o legal
                                for(int cont=linha;cont<linha+BOAT_SIZE_2;cont++){
                                    tabuleiro[cont][coluna]='O';
                                }
                                flag=true;
                            }
                        }
                    }else{
                        if(pos == 'H'){

                            // Verificar se ? possivel posicionar um barco
                            if(SIZE-coluna>2){

                                // Verificar se n?o h? outros barcos l?
                                int times=0;
                                for(int cont=coluna;cont<coluna+BOAT_SIZE_2;cont++){
                                    if(tabuleiro[linha][cont]=='~'){
                                        times++;
                                    }
                                }

                                // Se o n?mero de espa?o com ?gua for igual ao tamaho do barco, ent?o ? possivel posicionar o barco
                                if(times==BOAT_SIZE_2){

                                    // Posi??o legal
                                    for(int cont=coluna;cont<coluna+BOAT_SIZE_2;cont++){
                                        tabuleiro[linha][cont]='O';
                                    }
                                    flag=true;
                                }
                            }
                        }
                    }
                }
            }

            if(flag==false){
                cout<<"BARCO N?O PODE SER POSICIONADO, TENTE NOVAMENTE\n";
                cout<<"Pressione enter para continuar...";
                getch();
            }else{
                cout<<"BARCO POSICIONADO COM SUCESSO\n";
                cout<<"Pressione enter para continuar...";
                getch();
            }

        }while(flag==false);
    }

// Verificar posi??es(quantas posi??es j? foram destru?das)
bool verificar_pos(){
    if(posicoes_restantes==0){
        return false;
    }else{
        return true;
    }
}

// Jogar
bool jogar(Jogador *atacado){

    // Vari?vei locais
    int linha;
    int coluna;
    bool flag=false;
    do{
        system("cls");
        exibir_tabuleiro_visto();
        cout<<"\n";
        cout<<"---------------\n";
        cout<<"ATACAR OPONENTE\n";
        cout<<"---------------\n";
        cout<<"Posicao linha (0-14):";
        cin>>linha;
        if(linha < SIZE && linha >=0){
            cout<<"Posicao coluna (0-14):";
            cin>>coluna;
            if(coluna < SIZE && coluna >=0){

                // Verificar se h? um barco na posi??o
                if(atacado->tabuleiro[linha][coluna]=='O' && tabuleiro_visto[linha][coluna]=='~'){
                    tabuleiro_visto[linha][coluna]='X';
                    atacado->posicoes_restantes--;
                    cout<<"ACERTOU\n";
                    cout<<"Pressione enter para continuar...";
                    getch();
                    return true;
                }else{
                    if(atacado->tabuleiro[linha][coluna]=='~' && tabuleiro_visto[linha][coluna]=='~'){
                        tabuleiro_visto[linha][coluna]='#';
                        cout<<"ERROU\n";
                        cout<<"Pressione enter para continuar...";
                        getch();
                        return false;
                    }
                }
            }
        }
        cout<<"ATAQUE N?O PODE SER EFETUADO, TENTE NOVAMENTE\n";
        cout<<"Pressione enter para continuar\n";
        getch();
    }while(flag==false);
    return false;
}
};

int main(){

    // Gerar n?mero randicos
    srand(time(NULL));

    // Vari?veis
    string nome_1;
    string nome_2;
    int vez;
    int cont;
    int jogador_op;
    bool flag=false;
    bool fim=false;
    string op;

    // Criando jogadores

    cout<< "Nome do jogador 1:";
    cin>>nome_1;

    cout<< "Nome do jogador 2:";
    cin>>nome_2;

    Jogador *j1 = new Jogador();
    j1->nome=nome_1;

    Jogador *j2 = new Jogador();
    j2->nome=nome_2;

    // Jogador 1 posiciona as pe?as
    cout<<"Jogador 1 hora de posicionar os barcos\n";
    cout<<"Pressione enter para come?ar...";
    getch();
    for(cont=0;cont<2;cont++){
        j1->posicionar_barco_2();
    }
    j1->posicionar_barco_4();


    // Jogador 2 posiciona os barcos
    cout<<"Jogador 2 hora de posicionar os barcos\n";
    cout<<"Pressione enter para come?ar...";
    getch();
    for(cont=0;cont<2;cont++){
        j2->posicionar_barco_2();
    }
    j2->posicionar_barco_4();

    system("cls");

    // Cara ou coroa para decidir quem come?a
    do{
        cout<<"Vamos decdir quem come?a...\n";
        cout<<"Jogador 1 cara ou coroa (cara/coroa)?";
        cin>>op;
        if(op=="cara"){
            jogador_op=CARA;
            flag=true;
        }else{
            if(op=="coroa"){
                jogador_op=COROA;
                flag=true;
            }
        }

    }while(flag==false);

    if(rand()%2==jogador_op){
        vez=1;
        cout<<"O jogador 1("<<j1->nome<<") come?a...";
    }else{
        vez=2;
        cout<<"O jogador 2("<<j2->nome<<") come?a...";
    }

    cout<<"Pressione enter para come?ar o jogo\n";
    getch();

    // Objetos
    Jogador *atacante = new Jogador();
    Jogador *atacado = new Jogador();
    Jogador *vencedor = new Jogador();
    Jogador *perdedor = new Jogador();

    // Jogar at? atingir o fim, ou seja, fim=true
    do{
        if(vez==1){
            atacante=j1;
            atacado=j2;
        }else{
            atacante=j2;
            atacado=j1;
        }

        while(atacante->jogar(atacado)){
            if(!atacado->verificar_pos()){
                vencedor=atacante;
                perdedor=atacado;
                fim=true;
                break;
            }
        }

        if(vez==1){
            vez++;
        }else{
            vez--;
        }

    }while(fim==false);

    // Exibir resultado final
    system("cls");
    cout<<"-----------\n";
    cout<<"FIM DE JOGO\n";
    cout<<"-----------\n\n";
    cout<<"O vencedor foi "<<vencedor->nome<<" e o perdedor foi "<<perdedor->nome;
    return 0;
}

*/

    
