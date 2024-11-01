/*
    Program that set the game level

    Author: Ryan Alves
    Course: CS50 - 2024 - Week 1
*/

//[x] pegar opção de usuario
//[x] exibir uma mensagem com opção do usuario
//[x] niveis
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int level = get_int("Selecione uma dificuldade:\n 1-facil\n 2-medio\n 3-dificil\n 4-muito dificil\n");

    if (level == 1)
    {
    printf("level 1 selecionado\n");
    }
    else if (level == 2)
    {
        printf("level 2 selecionado\n");
    }
    else if (level == 3)
    {
        printf("level 3 selecionado\n");
    }
    else
    {
        printf("level 4 selecionado\n");
    }
}
