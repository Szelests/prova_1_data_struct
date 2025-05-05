/*
    4) Esscreva uma função para verificar se uma lista simplesmente encadeada de números inteiros está ordenada em ordem crescente. A função deve retornar 1 se a lista estiver ordenada e 0 caso contrário.
*/

#include "template.h"

int sorted(Node_s *head)
{
    if((head == NULL) || (head->next == NULL)) return 1; // Lista com nenhum ou um elemento está ordernada? 

    Node_s *current = head->next;
    Node_s *current_ant = head;

    while(current != NULL) {
        if(current->data < current_ant->data) return 0; // verifica se o próximo é menor que o anterior

        current_ant = current;
        current = current->next;
    }

    return 1; //Lista está ordenada
}

int main(void)
{
    Node_s *List = NULL; 

    // Create a linked list with six nodes
    List = create_simple_node(List); // Create the first node
    List = create_simple_node(List); // Create the second node
    List = create_simple_node(List); // Create the third node
    List = create_simple_node(List); // Create the fourth node
    List = create_simple_node(List); // Create the fifth node
    List = create_simple_node(List); // Create the sixth node

    // Set data for each node
    Node_s *temp = List;
    temp->data = 1; // Set the data of the first node to 1
    temp = temp->next;
    temp->data = 5; // Set the data of the second node to 5
    temp = temp->next;
    temp->data = 10; // Set the data of the third node to 10
    temp = temp->next;
    temp->data = 11; // Set the data of the fourth node to 11
    temp = temp->next;
    temp->data = 12; // Set the data of the fifth node to 12
    temp = temp->next;
    temp->data = 15; // Set the data of the sixth node to 15

    // Calling function
    int sorted_list = sorted(List);
    printf("%d", sorted_list);

    return 0;
}