/*
      Program that simulates a bank

    Author: Ryan Alves
    Course: CS50 - 2024 - Week 1
*/

/*
[x] inicializar saldo 1000 reais
[x] mostrar saldo
[x] mostrar menu de opções sacar (1) ou depositar (2)
[x] pegar escolha do usúario
[x] processar baseado na opção escolhida

    se usúario escolheu opção 1
    [x] pedir valor para usuario
    [x] se o valor escolhido for maior ou igual ao saldo e o valor for maior que 0, decremente no saldo
    [x] imprimir mensagem de saque realizado
    [x] se o valor for menor ou igual a 0, imprimir o valor será invalido
    [x] se o valor for maior que o saldo, irá dizer saldo insuficente

    se o usúario escolher opção 2
    [x] pedir valor do usúario
    [x] se o valor for maior que 0, incremente no saldo
    [x] inprimir mensagem de deposito realizado
    [x] se o valor for menor que 0, valor sera invalido

    [x] se escolher outra opçaõ, será invalido

[x] mostrar saldo final
*/

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // inicia saldo
    float saldo = 1000;
    // mostra saldo
    printf("Seu saldo atual é de %.2f\n", saldo);

    // menu de opções
    printf("Menu de opções:\n");
    printf("Sacar [1]\n");
    printf("Depositar [2]\n");

    // escolha do usúario
    int opcao = get_int("Escolha uma opção: ");

    
    if (opcao == 1)
    {
        float valor = get_float("Insira o valor para saque: ");

     //[x] se o valor escolhido for maior ou igual ao saldo e o valor for maior que 0, decremente no saldo
        if (valor <= saldo && valor > 0)
        {
           saldo -= valor;
           printf("Saque Realizado com Sucesso!\n");
        }
        else if (valor <= 0)
        {
            printf("Valor Invalido\n");
        }
        else if (valor > saldo)
        {
            printf("Saldo Invalido\n");
        }
        printf("Saldo final de: %.2f\n", saldo);
    }

    else if (opcao == 2)
    {
        float valor = get_float("Insira o valor para deposito: ");

        if (valor > 0)
        {
            saldo += valor;
            printf("Deposito realizado com sucesso!\n");
        }
        else if (valor < 0)
        {
            printf("valor invalido");
        }
        printf("Saldo final de: %.2f\n", saldo);
    }
    else
    {
        printf("opção invalida\n");
    }



}
