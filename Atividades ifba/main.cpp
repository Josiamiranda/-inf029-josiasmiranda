/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   	int num,num1,op,r;
	
		while(op!=5)
	{
	
	
	printf("Digite um numero:\n");
	scanf("%d",&num);
	
		printf("Digite outro numero:\n");
	scanf("%d",&num1);
	
	
	printf(" \n Soma:1 \n");
	printf(" \n Multiplicacao :2 \n ");
	printf(" \n Divisao:3 \n ");
	printf(" \n Subitracao:4 \n");
	printf(" \n Sair: 5  \n");
	
	printf(" \n Digite a operacao desejada:\n");
	scanf("%d",&op);
	
	
	
	if(op==1)
	{
		r=num+num1;
	}
	
	else if(op==2)
	{
		r=num*num1;
	}
	else if(op==3)
	{
		r=num/num1;
	}
	else if(op==4)
	{
		r=num-num1;
	}
	
	else 
	
	{
	
		
	 printf(" \n Opcao invalida:\n ");
	 
}

	
	printf(" \n O resultado eh: %d \n ",r);
	
}

    return 0;
}
