#include "template.h"

Node_s *create_simple_node(Node_s *head)
{
    Node_s *new_node = (Node_s *)malloc(sizeof(Node_s));
    if (new_node == NULL)
    {
        printf("Erro ao alocar memória para o novo nó.\n");
        return NULL; // Falha na alocação de memória
    }

    new_node->data = 0; // Inicializa o dado com 0 ou outro valor padrão
    new_node->next = NULL;

    if (head != NULL)
    {
        Node_s *temp = head;
        while (temp->next != NULL) // Encontra o último nó
        {
            temp = temp->next;
        }
        temp->next = new_node; // Adiciona o novo nó ao final da lista
    }
    else
    {
        head = new_node; // Se a lista estiver vazia, o novo nó é o primeiro
    }

    printf("Nodo criado!\n");
    return head; // Retorna o ponteiro para o início da lista
}

Node_d *create_double_node(Node_d *head)
{
    Node_d *new_node = (Node_d *)malloc(sizeof(Node_d));
    if (new_node == NULL)
    {
        printf("Erro ao alocar memória para o novo nó.\n");
        return NULL; // Falha na alocação de memória
    }

    new_node->data = 0; // Inicializa o dado com 0 ou outro valor padrão
    new_node->next = NULL;
    new_node->prev = NULL;

    if (head != NULL)
    {
        Node_d *temp = head;
        while (temp->next != NULL) // Encontra o último nó
        {
            temp = temp->next;
        }
        temp->next = new_node; // Adiciona o novo nó ao final da lista
        new_node->prev = temp; // Define o nó anterior
    }
    else
    {
        head = new_node; // Se a lista estiver vazia, o novo nó é o primeiro
    }

    printf("Nodo duplo criado!\n");
    return head; // Retorna o ponteiro para o início da lista
}