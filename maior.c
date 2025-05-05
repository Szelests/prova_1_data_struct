/*
    3) Escreva uma função que retorne o maior valor armazenado em uma lista simplesmente encadeada. Se a lista estiver vazia, retornar -1. 
*/

#include "template.h"

int maior(Node_s *head) 
{
    if(head == NULL) return -1;

    Node_s *current = head;
    int biggest = 0;

    while(current != NULL) 
    {
        if(current->data > biggest)
        {
            biggest = current->data;
        }

        current = current->next;
    }

    printf("%d", biggest);
    return biggest; // Retorna o maior valor
}

int main(void)
{
    Node_s *List = NULL; 

    // Create a linked list with three nodes
    List = create_simple_node(List); // Create the first node
    List = create_simple_node(List); // Create the second node
    List = create_simple_node(List); // Create the third node

    // Set data for each node
    Node_s *temp = List;
    temp->data = 1; // Set the data of the first node to 1
    temp = temp->next;
    temp->data = 5; // Set the data of the second node to 5
    temp = temp->next;
    temp->data = 10; // Set the data of the third node to 10

    // Calling function
    int biggest = maior(List);

    return 0;
}