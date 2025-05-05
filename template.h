#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>

// Listas simplesmente encadeadas
typedef struct Node_s {
    uint8_t data; // Data of the node
    struct Node_s* next; // Pointer to the next node
} Node_s;

// Listas duplamente encadeadas
typedef struct Node_d {
    uint8_t data;
    struct Node_d *next;
    struct Node_d *prev;
} Node_d;

Node_s *create_simple_node(Node_s *head);
Node_d *create_double_node(Node_d *head);

