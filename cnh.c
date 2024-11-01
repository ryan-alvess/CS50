/*
    Program that checks if you are eligible to drive.

    Author: Ryan Alves
    Course: CS50 - 2024 - Week 1
*/

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int idade = get_int("Bem vindo! Informe sua idade para sabermos se pode tirar sua CNH: ");

    if (idade >= 18)
    {
        printf("pode dirigir\n");
    }
    else
    {
        printf("não pode dirigir\n");
    }
}
