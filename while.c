/*
      Program that test function "while"

    Author: Ryan Alves
    Course: CS50 - 2024 - Week 1
*/

#include <stdio.h>
#include <cs50.h>

int main(void)
{
   char resposta = 'a';
   while (resposta != 'y' && resposta != 'n')
   {
    resposta = get_char("Do you agree? (y/n):\n ");
   }
   printf("voce respondeu: %c\n", resposta);
}