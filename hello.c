/*
    Program that prompts the user's name and greets them.

    Author: Ryan Alves
    Course: CS50 - 2024 - Week 1
*/

#include <stdio.h>
#include <cs50.h>

int main(void)
{
   string resposta = get_string("Qual é o seu nome? ");
   printf("olá %s\n", resposta);
}
