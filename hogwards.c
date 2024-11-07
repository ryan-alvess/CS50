/*
Program that verify hogwards grades

    Author: Ryan Alves
    Course: CS50 - 2024 - Week 1
*/

/*
[x] perguntar nota do aluno
[x] colocar constantes
*/

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Pede a nota do N.O.M. para o professor
    int nota = get_int("Nota do N.O.M. de Feiticos: ");

    // Sua classificação mágica vai aqui!
    if (nota >= 90)
    {
        printf("Otimo\n");
    }
     else if (nota >= 70 && nota <=89)
     {
         printf("Excede as espectativas\n");
     }
    else if (nota >= 60 && nota <= 69)
     {
         printf("Aceitavel\n");
     }
     else
     {
         printf("Trasgo\n");
     }

    return 0;
}
