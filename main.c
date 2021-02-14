#include <stdio.h>

/*
3 - Escreva um programa que receba via teclado um tempo em segundos e converta
    para horas, minutos e segundos. 
    Ex.: recebe 3850 segundos que converte para 1h 4min 10s.


argc = é um valor inteiro que indica a quantidade de argumentos que foram passados ao chamar o programa.

argv = é um vetor de char que contém os argumentos, um para cada string passada na linha de comando.

argv[0] = armazena o nome do programa que foi chamado no prompt, sendo assim, argc é pelo menos igual a 1, pois no mínimo existirá um argumento.
*/

int main()
{
   int tempo, horas, horas_seg, minutos, segundos;
   horas_seg=3600;//horas em segundos
   printf("Entre com o número de segundos: ");
   scanf("%d", &tempo);
   horas = (tempo/horas_seg); //resultado da hora
   minutos = (tempo -(horas_seg*horas))/60;
   segundos = (tempo -(horas_seg*horas)-(minutos*60));
   printf("Recebe %d segundos que converte para %dh %dmin %ds \n", tempo,horas,minutos,segundos);
   
   return 0;
}