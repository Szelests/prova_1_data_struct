/*
    5) Implementar uma função que checa se duas listas simples encadeadas são iguais. Em caso positivo, retornar 1, caso contrário, retornar 0. 
*/

#include "template.h"

int equal(Node_s *list_1, Node_s *list_2)
{
    if((list_1 == NULL && list_2 == NULL)) return 1;
    
    if(((list_1 == NULL) && (list_2 != NULL)) || ((list_1 != NULL) && (list_2 == NULL))) return 0;
    
    Node_s *current_1 = list_1;
    Node_s *current_2 = list_2;

    while(current_1 != NULL && current_2 != NULL) 
    {
        if(current_1->data != current_2->data) return 0;

        current_1 = current_1->next;
        current_2 = current_2->next;
    }

    if(current_1 == NULL && current_2 == NULL) return 1;

    return 1;
}

//===============================MAIN========================================

int main(void)
{
    Node_s *List_1 = NULL;
    Node_s *List_2 = NULL;

    // Criando a primeira lista encadeada com cinco nós
    List_1 = create_simple_node(List_1);
    List_1 = create_simple_node(List_1);
    List_1 = create_simple_node(List_1);
    List_1 = create_simple_node(List_1);
    List_1 = create_simple_node(List_1);

    // Atribuindo valores à primeira lista
    Node_s *temp = List_1;
    temp->data = 1;
    temp = temp->next;
    temp->data = 5;
    temp = temp->next;
    temp->data = 10;
    temp = temp->next;
    temp->data = 3;
    temp = temp->next;
    temp->data = 7;

    // Criando a segunda lista encadeada com cinco nós
    List_2 = create_simple_node(List_2);
    List_2 = create_simple_node(List_2);
    List_2 = create_simple_node(List_2);
    List_2 = create_simple_node(List_2);
    List_2 = create_simple_node(List_2);

    // Atribuindo valores à segunda lista
    temp = List_2;
    temp->data = 1;
    temp = temp->next;
    temp->data = 5;
    temp = temp->next;
    temp->data = 10;
    temp = temp->next;
    temp->data = 3;
    temp = temp->next;
    temp->data = 4;

    // Chamando a função equal
    int are_equal = equal(List_1, List_2);
    printf("As listas sao iguais? %s\n", are_equal ? "Sim" : "Nao");

    return 0;
}