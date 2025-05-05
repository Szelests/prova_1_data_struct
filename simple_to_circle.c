/*
    7) Escreva uma função que recebe como entrada a cabeça de uma lista simplesmente encadeada de inteiros não nula e transforma-a em uma lista circular simplesmente encadeada. A função deve retornar a cabeça da nova lista circular duplamente encadeada. Em seguida, exiba na tela os elementos da lista circular.
*/
#include "template.h"

void simple_to_circle(Node_s *head)
{
    Node_s *first = head;
    Node_s *last = head;
    int count = 0;

    //Pega o último elemento
    while(last->next != NULL)
    {
        last = last->next;
    }

    // Torna a lista circular
    last->next = first;

    //Exibe os elementos
    Node_s *current = last;
    do
    {
        printf("%d\n", current->data);
        current = current->next;
        count++;
    } while(last != current);

    printf("Quantidade: %d", count);
}

//===============================MAIN===========================
int main(void) {
    Node_s *List = NULL;

    // Criando uma lista simplesmente encadeada com cinco nós
    List = create_simple_node(List);
    List = create_simple_node(List);
    List = create_simple_node(List);
    List = create_simple_node(List);
    List = create_simple_node(List);

    // Atribuindo valores à lista
    Node_s *temp = List;
    temp->data = 1;
    temp = temp->next;
    temp->data = 5;
    temp = temp->next;
    temp->data = 10;
    temp = temp->next;
    temp->data = 3;
    temp = temp->next;
    temp->data = 7;

    // Transformando a lista em circular e exibindo os elementos
    simple_to_circle(List);

    return 0;
}