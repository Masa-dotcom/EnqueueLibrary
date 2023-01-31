//
// Created by masay on 1/24/2023.
//

#ifndef LINKEDLIST_QUEUE_H
#define LINKEDLIST_QUEUE_H
#include <stdbool.h>

typedef struct Node1{
    void **value;
    struct Node1 *next;
    struct Node1 *previous;
} NODE1;

typedef struct queue{
    NODE1* head;
    NODE1* tail;
    int count;
} QUEUE;

QUEUE *Iniialize();

void Enqueue(QUEUE *list, void *val);

void Dequeue(QUEUE *list);

void Clear(QUEUE *list);

bool isEmpty();

#endif //LINKEDLIST_QUEUE_H


