#include "template.h"

Node_s *create_simple_node(Node_s *head)
{
    if(head != NULL)
    {
        Node_s *new_node = (Node_s *)malloc(sizeof(Node_s));
        if(new_node == NULL)
        {
            return NULL; // Memory allocation failed
        }
        new_node->data = 0; // Initialize data to 0 or any other value
        new_node->next = NULL;
        head->next = new_node;
        return new_node;
    } else
    {
        Node_s *new_node = (Node_s *)malloc(sizeof(Node_s));
        if(new_node == NULL)
        {
            return NULL; // Memory allocation failed
        }
        new_node->data = 0; // Initialize data to 0 or any other value
        new_node->next = NULL;
        return new_node;
    }
}

Node_d *create_double_node(Node_d *head)
{
    if(head != NULL)
    {
        Node_d *new_node = (Node_d *)malloc(sizeof(Node_d));
        if(new_node == NULL)
        {
            return NULL; // Memory allocation failed
        }
        new_node->data = 0; // Initialize data to 0 or any other value
        new_node->next = NULL;
        new_node->prev = head;
        head->next = new_node;
        return new_node;
    } else
    {
        Node_d *new_node = (Node_d *)malloc(sizeof(Node_d));
        if(new_node == NULL)
        {
            return NULL; // Memory allocation failed
        }
        new_node->data = 0; // Initialize data to 0 or any other value
        new_node->next = NULL;
        new_node->prev = NULL;
        return new_node;
    }
}