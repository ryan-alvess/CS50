/*
      Program that repeats animals sounds

    Author: Ryan Alves
    Course: CS50 - 2024 - Week 1
*/

#include <stdio.h>
#include <cs50.h>

void som_de_animal(char animal, int n);
void repetidor(string som, int n);

int main(void)
{
    // [] criar função de emitir som de animal
     som_de_animal('g', 5);
}


void som_de_animal(char animal, int n)
{
    if (animal == 'c')
    {

     repetidor("Au", n);

    }
     else if (animal == 'g')
     {
       repetidor("Meow", n);
    }
    else
    {
       repetidor("Muu", n);
    }
}

void repetidor(string som, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", som);
    }
}
