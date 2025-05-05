/*
    6) Escreva uma função que recbe como parâmetro acabeça de uma lista duplamente encadeada de números inteiros e imprima os três últimos elementos da lista, na ordem inversa. Se algum dos elementos não existirem na ista, imprimir a palavra "Nulo" no seu lugar.
*/
#include "template.h"

void three_last(Node_d *head) {
    if(head == NULL)
    {
        for(uint8_t i = 0; i < 3; i++)
        {
            printf("Nulo\n");
        }
        return;
    }

    Node_d *last = head;

    //Pegar último nó
    while(last->next != NULL) 
    {   
        last = last->next;
    }

    for(uint8_t i = 0; i < 3; i++)
    {
        if(last != NULL) 
        {
            printf("%d\n", last->data);
            last = last->prev; //Voltar para o anterior
        } else 
        {
            printf("Nulo\n");
        }
    }
}

//==================================MAIN===================================
int main(void) {
    Node_d *List = NULL;

    // Criando uma lista duplamente encadeada com cinco nós
    List = create_double_node(List);
    List = create_double_node(List);
    List = create_double_node(List);
    List = create_double_node(List);
    List = create_double_node(List);

    // Atribuindo valores à lista
    Node_d *temp = List;
    temp->data = 1;
    temp = temp->next;
    temp->data = 5;
    temp = temp->next;
    temp->data = 10;
    temp = temp->next;
    temp->data = 3;
    temp = temp->next;
    temp->data = 7;

    // Chamando a função three_last
    printf("Os tres ultimos elementos da lista sao:\n");
    three_last(List);

    return 0;
}