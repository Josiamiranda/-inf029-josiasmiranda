// #################################################
//  Instituto Federal da Bahia
//  Salvador - BA
//  Curso de Análise e Desenvolvimento de Sistemas http://ads.ifba.edu.br
//  Disciplina: INF029 - Laboratório de Programação
//  Professor: Renato Novais - renato@ifba.edu.br

//  ----- Orientações gerais -----
//  Descrição: esse arquivo deve conter as questões do trabalho do aluno.
//  Cada aluno deve renomear esse arquivo para Aluno<MATRICULA>.c
//  O aluno deve preencher seus dados abaixo, e implementar as questões do trabalho

//  ----- Dados do Aluno -----
//  Nome:Josias Miranda
//  email:jmolima2000@gmailcom
//  Matrícula:2019116020
//  Semestre:2

//  Copyright © 2016 Renato Novais. All rights reserved.
// Última atualização: 20/06/2018 - 19/08/2016

// #################################################

#include <stdio.h>
#include <string.h>
#include<conio.h> 
#include "JosiasLima2019116020.h"  
#include "corretor.c"  


//Josias<MATRICULA>.c
/*
## função utilizada para testes  ##
 somar = somar dois valores
@objetivo
    Somar dois valores x e y e retonar o resultado da soma
@entrada
    dois inteiros x e y
@saida
    resultado da soma (x + y)
 */
int somar(int x, int y)
{
    int soma = 0;
    soma = x + y;
    return soma;
}

/*
## função utilizada para testes  ##
 fatorial = fatorial de um número
@objetivo
    calcular o fatorial de um número
@entrada
    um inteiro x
@saida
    fatorial de x -> x!
 */
int fatorial(int x)
{ //função utilizada para testes
    int fat = 1;
    return fat;
}

int teste(int a)
{
    int val;
    if (a == 2)
        val = 3;
    else
        val = 4;

    return val;
}


 
int q1(char *data)
{
  
int dia,mes,ano;

printf("Entre com a data(dd/mm/aaaa) ou (d/m/aaaa) \n");

printf("Digite o dia:\n");
scanf("%d",&dia);

printf("Digite o mes:\n");
scanf("%d",&mes);

printf("Digite o ano:\n");
scanf("%d",&ano);

printf("%d/%d/%d",dia,mes,ano);



switch(mes)
{
	case 1:
	
	if(dia>31)
	printf(" \n Mes com apenas 31 dias");
	break;
	
	//  return 1 ;
	
	case 2:
	
	if(ano%4==0&&ano%100 !=0|| ano%400==00)
	
	{
		if(dia>29)
		printf(" \n Ano bissexto, fevereiro com maximo de 29 dias:");
		//  return 1 ;
	}
	
	else {
		if(dia>28)
		{
			printf("Fevereiro tem 28 dias");
                        //  return 1 ;
		}
	}
	break;
	//  return 1 ;
	
	case 3:
	
	if(dia<1||dia>31)
	printf("\n Mes com apenas 31 dias");
	break;
	//  return 1 ;
	case 4:
	
	if(dia>30)
	printf("\n Mes com apenas 30 dias");
	break;
	//  return 1 ;
	case 5:
	
	if(dia>31)
	printf("\n Mes com apenas 31 dias");
	break;
	//  return 1;
	case 6:
	
	if(dia>30)
	printf("\n Mes com apenas 30 dias");
	break;
	//  return 1 ;
	case 7:
	
	if(dia>31)
	printf("\n Mes com apenas 31 dias");
	break;
	//  return 1 ;
	case 8:
	
	if(dia>30)
	printf("\n Mes com apenas 30 dias");
	break;
	//  return 1 ;
	case 9:
	
	if(dia>31)
	printf("\n Mes com apenas 31 dias");
	break;
	//  return 1 ;
	
	case 10:
	
	if(dia>30)
	printf("\n Mes com apenas 30 dias");
	break;
	//  return 1 ;
	case 11:
	
	if(dia>30)
	printf("\n Mes com apenas 30 dias");
	break;
	//  return 1 ;
	
	case 12:
	
	if(dia>31)
	printf("\n Mes com apenas 31 dias");
	break;
	//  return 1 ;
	
	default:
	
	printf("\n Mes inexistente");
	break;
	//  return 1 ;
}

if(dia==02&&mes==03&& ano==2015||dia==12&&mes==1&&ano==15||dia==1&&mes==9&&ano==2016)
{
	
	// return 0;
}

else 

{
	// return 1;
}

return 0; 
}


int q2(char *datainicial, char *datafinal, int *qtdDias, int *qtdMeses, int *qtdAnos)
{

    
    
    int ndias,nmes,nano,ndia1,nmes1,nano1;

int anodif,mesdif,diadif,dif;

printf("Entre com a data(dd/mm/aaaa) ou (d/m/aaaa) \n");

printf("Data inicial:\n");

printf("Digite o dia:\n");
scanf("%d",&ndias);

printf("Digite o mes:\n");
scanf("%d",&nmes);

printf("Digite o ano:\n");
scanf("%d",&nano);

printf("%d/%d/%d",ndias,nmes,nano);



switch(nmes)
{
	case 1:
	
	if(ndias>31)
	printf(" \n Mes com apenas 31 dias");
	break;
	
	//  return 1 ;
	
	case 2:
	
	if(nano%4==0&&nano%100 !=0|| nano%400==00)
	
	{
		if(ndias>29)
		printf(" \n Ano bissexto, fevereiro com maximo de 29 dias:");
		//  return 1 ;
	}
	
	else {
		if(ndias>28)
		{
			printf("Fevereiro tem 28 dias");
		}
	}
	break;
	//  return 1 ;
	
	case 3:
	
	if(ndias<1||ndias>31)
	printf("\n Mes com apenas 31 dias");
	break;
	//  return 1 ;
	case 4:
	
	if(ndias>30)
	printf("\n Mes com apenas 30 dias");
	break;
	//  return 1 ;
	case 5:
	
	if(ndias>31)
	printf("\n Mes com apenas 31 dias");
	break;
	//  return 1;
	case 6:
	
	if(ndias>30)
	printf("\n Mes com apenas 30 dias");
	break;
	//  return 1 ;
	case 7:
	
	if(ndias>31)
	printf("\n Mes com apenas 31 dias");
	break;
	//  return 1 ;
	case 8:
	
	if(ndias>30)
	printf("\n Mes com apenas 30 dias");
	break;
	//  return 1 ;
	case 9:
	
	if(ndias>31)
	printf("\n Mes com apenas 31 dias");
	break;
	//  return 1 ;
	
	case 10:
	
	if(ndias>30)
	printf("\n Mes com apenas 30 dias");
	break;
	//  return 1 ;
	case 11:
	
	if(ndias>30)
	printf("\n Mes com apenas 30 dias");
	break;
	//  return 1 ;
	
	case 12:
	
	if(ndias>31)
	printf("\n Mes com apenas 31 dias");
	break;
	//  return 1 ;
	
	default:
	
	printf("\n Mes inexistente");
	break;
	//  return 1 ;
}

if(ndias==02||nmes==03|| nano==2015&&ndias==12||nmes==1|| nano==15&&ndias==1||nmes==9|| nano==2016)
{
	
	// return 0;
}

else 

{
	// return 1;
}

printf("\n Digite o dia atual:\n");
scanf("%d",&ndia1);

printf("Digite o mes atual:\n");
scanf("%d",&nmes1);


printf("Digite o ano atual :\n");
scanf("%d",&nano1);

switch(nmes1)
{
	case 1:
	
	if(ndia1>31)
	printf(" \n Mes com apenas 31 dias");
	break;
	
	//  return 1 ;
	
	case 2:
	
	if(nano1%4==0&&nano1%100 !=0|| nano1%400==00)
	
	{
		if(ndia1>29)
		printf(" \n Ano bissexto, fevereiro com maximo de 29 dias:");
		//  return 1 ;
	}
	
	else {
		if(ndia1>28)
		{
			printf("Fevereiro tem 28 dias");
		}
	}
	break;
	//  return 1 ;
	
	case 3:
	
	if(ndia1<1||ndia1>31)
	printf("\n Mes com apenas 31 dias");
	break;
	//  return 1 ;
	case 4:
	
	if(ndia1>30)
	printf("\n Mes com apenas 30 dias");
	break;
	//  return 1 ;
	case 5:
	
	if(ndia1>31)
	printf("\n Mes com apenas 31 dias");
	break;
	//  return 1;
	case 6:
	
	if(ndia1>30)
	printf("\n Mes com apenas 30 dias");
	break;
	//  return 1 ;
	case 7:
	
	if(ndia1>31)
	printf("\n Mes com apenas 31 dias");
	break;
	//  return 1 ;
	case 8:
	
	if(ndia1>30)
	printf("\n Mes com apenas 30 dias");
	break;
	//  return 1 ;
	case 9:
	
	if(ndia1>31)
	printf("\n Mes com apenas 31 dias");
	break;
	//  return 1 ;
	
	case 10:
	
	if(ndia1>30)
	printf("\n Mes com apenas 30 dias");
	break;
	//  return 1 ;
	case 11:
	
	if(ndia1>30)
	printf("\n Mes com apenas 30 dias");
	break;
	//  return 1 ;
	
	case 12:
	
	if(ndia1>31)
	printf("\n Mes com apenas 31 dias");
	break;
	//  return 1 ;
	
	default:
	
	printf("\n Mes inexistente");
	break;
	//  return 1 ;
}

printf("%d/%d/%d",ndia1,nmes1,nano1);

     dif =   365*nano1 + 30*nmes1 + ndia1
              - 365*nano - 30*nmes - ndias;
  
  anodif = dif/365;
  dif = dif%365;
  
  mesdif = dif/30;
  dif = dif%30;
  
  diadif = dif;
  
  
  if(dif<0)
  {
  	printf("Datainicial > Datafinal");
  }

printf("\n Diferenca:\n");

printf("Ano:%d Meses:%d Dias:%d",anodif,mesdif,diadif);

return 0; 
}


int q3(char *texto, char c, int isCaseSensitive)
{
  
    int N,i,j,k=0;
char text[250],let;



 printf("Digite o texto:\n ");
 gets(text);
 getchar;
 
 if(text[i]>250)
 {
 	return 1;
 }

else {
printf("Digite a primeira letra comparativa:\n");
scanf("%s",&let);
 getchar;
 
  if(isCaseSensitive=1)
  {
  		//diferença
  		for(i = 0; i <=250; i++) {
  			
  			text[i] = toupper(text[i]);
  			text[i] = tolower(text[i]);
  			
  		}
  }
  
  else if(isCaseSensitive=!1)
  
  {
  	//continue
  	
  }
 
for(i=0;i<=250;i++){
	
	
            if(text[i]==let){
            	
            	k=k+1;
               
            }
	
    }
    
    printf("\n O numero total eh:%d",k);
    
}
// return 0;
return 0; 
}

// Questão 3 com a mudança de maiuscula para minuscula e a questão da acentuação..
 
 /*
int q3(char *texto, char c, int isCaseSensitive)
{
    //int qtdOcorrencias = -1;

    //return qtdOcorrencias;
    
    int N,i,j,k=0;
char text[250],let;



 printf("Digite o texto:\n ");
 gets(text);
 getchar;
 
 if(text[i]>250)
 {
 	//return 1;
 }

else {
printf("Digite a primeira letra comparativa:\n");
scanf("%s",&let);
 getchar;
 
 if(let=='á')
 {
 let=a;
}
 else if(let=='é')
 {
 let=e;
}
 else if(let=='í')
 {
 let=i;
}
 else if(let=='ó')
 {
 let=o;
}
 else if(let=='ú')
 {
 let=u;
}
  else if(let=='Á')
 {
 let=A;
}
 else if(let=='É')
 {
 let=E;
}
 else if(let=='Í')
 {
 let=I;
}
 else if(let=='Ó')
 {
 let=O;
}
 else if(let=='Ú')
 {
 let=U;
}
  if(isCaseSensitive=1)
  {
  		//diferença
  		for(i = 0; i <=250; i++) {
  			
  			text[i] = toupper(text[i]);
  			text[i] = tolower(text[i]);
  			
  		}
  }
  
  else if(isCaseSensitive=!1)
  
  {
  	//continue
  }
 
for(i=0;i<=250;i++){
	
	
            if(text[i]==let){
            	
            	k=k+1;
               
            }
	
    }
    
    printf("\n O numero total eh:%d",k);
    
}
// return 0;
return 0; 
}
*/


int q4(char *strTexto, char *strBusca, int posicoes[30])
{
   
    
    int N,i,j,k=0,m=0,f,p,t=0;
char texto[250],palavra[250];


 printf("Digite o texto:\n ");
 gets(texto);
 getchar;
 
 
printf("Digite uma palavra:\n");
scanf("%s",&palavra);
 getchar;
 
 
 printf("%s e %s", texto,palavra);
 
 
 f=strlen(texto);
 p=strlen(palavra);
 
for(j=0,i=0;j<p,i<f;j++,i++){
	

printf(" \n palavra %d: %c",i,palavra[j]);

printf(" texto %d: %c",j,texto[i]);	

}

for(j=0,i=0;j<p,i<f;j++,i++){

if(palavra[j]==texto[i])
{
	k=k+1;
	
	if(k==p)
	{
		j=0;
		
		t=t+1;
		
		

		k=0;
		
		
		//return 0;
	}
}



else 

i=i+1;

//return 1;

}

if(k==1)
{
	
}

       
       printf(" \n Qtd da palavra %d \n ",p);
       
       printf("O numero de repeticoes eh:%d",t);
   
// return 0;
return 0; 
}
    



int q5(int num)
{

   // return num;
   
   char palavra [300];
int f,i,j;

    printf("Digite Uma numero: ");
    gets(palavra);
    f=strlen(palavra);          
       
        for(i=f-1;i>=0;i--){ 
            printf("%c",palavra[i]);
        }
    
    return 0; 
}



int q6(int numerobase, int numerobusca)
{



int N,i,j,k=0,f;
char texto[250],let;



 printf("Digite o numero:\n ");
 scanf("%s",&texto);
 getchar;
 
 
printf("Digite o numero comprativo:\n");
scanf("%s",&let);
 getchar;
 
 printf("Digite a quantidade de digitos colocados no numero comparativo");
 scanf("%d",&j);
 
 
 
f=strlen(texto);
 

 
 //Opção 2
 
  //   j=strlen(let); sem precisar pedir para o usuario colocar o numero comparativo
 

for(i=0;i<f;i++){
	
	if(j==1&&texto[i]  == let) {
		
		printf("\n Numero : n %c",texto[i]);
			k=k+1;
		i++;
	//return 0;
		
	}
	
	else if(j==2&&texto[i]&&texto[i+1]  == let)
	
	{
		printf("\n Numero : n %c",texto[i]);
			k=k+1;
		i++;
		//return 0;
	}
	else if(j==3&&texto[i]&&texto[i+1]&&texto[i+2]  == let)
	
	{
		printf("\n Numero : n %c",texto[i]);
			k=k+1;
		i++;
		//return 0;
	}
	else if(j==4&&texto[i]&&texto[i+1] &&texto[i+2]&&texto[i+3] == let)
	
	{
		printf("\n Numero : n %c",texto[i]);
			k=k+1;
		i++;
		//return 0;
	}
	else if(j==5&&texto[i]&&texto[i+1]&&texto[i+2]&&texto[i+3]&&texto[i+4]  == let)
	
	{
		printf("\n Numero : n %c",texto[i]);
			k=k+1;
		i++;
		//return 0;
	}
	else if(j==6&&texto[i]&&texto[i+1]&&texto[i+2]&&texto[i+3]&&texto[i+4]&&texto[i+5]  == let)
	
	{
		printf("\n Numero : n %c",texto[i]);
			k=k+1;
		i++;
		//return 0;
	}
	
	else 
	
	break;
	
	//return 1;
    }
    
     printf("\n O numero total  de ocorrencias do numero digitado eh:%d",k);
    // obs: tirar, só colocar %d",k
    

// return 0;
return 0; 

}



