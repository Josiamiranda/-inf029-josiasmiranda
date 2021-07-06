#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<conio.h>

char jogo[3][3];
char jogador1[50], jogador2[50];
char s[3];
int f;

void inicializarMatriz() {
    int i,j;
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            jogo[i][j] = ' ';
        }
    }
}

int eValido(char letra) {
    if(letra == 'x' || letra == '0')
        return 1;
    else
        return 0;// falso
}

int coordenadaEhValida(int x, int y) {
    if(x >= 0 && x < 3) {
        if(y >= 0 && y < 3)
            return 1;
    }
    return 0;// falso
}

int posicaVazia(int x, int y) {
    if(jogo[x][y] != 'x' && jogo[x][y] != '0')
        return 1;
    return 0;// falso
}

int ganhouLinhas() {
    int i, j, igual = 1;
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 2; j++) {
            if(eValido(jogo[i][j]) && jogo[i][j] == jogo[i][j+1])
                igual++;
        }
        if(igual == 3)
            return 1;
        igual = 1;
    }
    return 0;//falso
}

int ganhouColunas() {
    int i, j, igual = 1;
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 2; j++) {
            if(eValido(jogo[j][i]) && jogo[j][i] == jogo[j+1][i])
                igual++;
        }
        if(igual == 3)
            return 1;
        igual = 1;
    }
    return 0;
}

int ganhoudiagPrincipal() {
    int i, igual = 1;
    for(i = 0; i < 2; i++) {
        if(eValido(jogo[i][i]) && jogo[i][i] == jogo[i+1][i+1])
            igual++;
    }
    if(igual == 3)
        return 1;
    else
        return 0;
}

int ganhoudiagSecundaria() {
    int i, igual = 1;
    for(i = 0; i < 2; i++) {
        if(eValido(jogo[i][3-i-1]) && jogo[i][3-i-1] == jogo[i+1][3-i-2])
            igual++;
    }
    if(igual == 3)
        return 1;
    else
        return 0;
}

void imprimir() {
    int lin, col;
    int f;
    
   // melhorar  printf("Digite as 3 letras em seguida da coluna:\n");
    // gets(s);
     // getchar;
     
    // f=strlen(s);
    
     //printf("\n 1=%c, 2=%c, 3=%c",s[0],s[1],s[2]);
 
// Amostra as linhas e colunas

printf("\nLetras %c,%c,%c= 0,1,2\n",s[0],s[1],s[2]);

    printf("\n\t    0  1  2 \n");
    for(lin = 0; lin < 3; lin++) {
        printf("\t%c", s[lin]);       // melhoria
        for(col = 0; col < 3; col++) {
            if(col < 2)
                printf(" %c |", jogo[lin][col]);
            else
                printf(" %c ", jogo[lin][col]);
        }
        if(lin < 2)
            printf("\n\t   ---------\n");
    }
}

void jogar() {
    int  y, valida, jogadas = 0, ganhou = 0, ordem = 1;
    int x;
    
    

    do {
        do {
            imprimir();
            
            printf("Obs: so utilize apenas numeros ");
            printf("\nDigite a coordenada que deseja jogar x: %c-0,%c-1,%c-2\n ",s[0],s[1],s[2]);
            scanf("%d",&x);
            getchar;
            
            
            
            printf("\n Digite a coluna y: \n");
             scanf("%d",&y);
             getchar;
             
             // validação para repetição
             
        
             
            valida = coordenadaEhValida(x, y);
            if(valida == 1)
                valida += posicaVazia(x, y);
        } while(valida != 2);
        if(ordem == 1)
            jogo[x][y] = 'x';
        else
            jogo[x][y] = '0';
        jogadas++;
        ordem++;
        if(ordem == 3)
            ordem = 1;
        ganhou += ganhouLinhas();
        ganhou += ganhouColunas();
        ganhou += ganhoudiagPrincipal();
        ganhou += ganhoudiagSecundaria();
    } while(ganhou == 0 && jogadas < 9);

    if(ganhou != 0) {
        imprimir();
        if(ordem - 1 == 1)
            printf("\nParabens. Voce venceu %s\n", jogador1);
        else
            printf("\nParabens. Voce venceu %s\n", jogador2);
    } else
        printf("\n Ninguem venceu\n\n");
}

int main() {

    int op;

    printf("Jogar 1 digite seu nome:");
    fgets(jogador1, 50, stdin);
    printf("\nSua peca corresponde ao X:\n");
    
    printf("\nJogar 2 digite seu nome: ");
    fgets(jogador2, 50, stdin);
    printf("\nSua peca corresponde ao 0:\n");
    
      printf("\nDigite as 3 letras em seguida da linha:\n");
      gets(s);
      getchar;
     
     
	 f=strlen(s);
    
     printf("\n 1=%c, 2=%c, 3=%c",s[0],s[1],s[2]);

    do {
        inicializarMatriz();
        jogar();
        printf("Deseja jogar novamente?\n1 - Sim\n2 - Nao\n");
        scanf("%d", &op);
    } while(op == 1);

    return 0;
};
