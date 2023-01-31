//
// Created by masay on 1/24/2023.
//

#include "Queue.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//bool initialized = false;

QUEUE *Initialize(){
    initialized = true;
    return calloc(1, sizeof(QUEUE));
}

void Enqueue(QUEUE *list, void *val){
    NODE1 *pList = calloc(1, sizeof(NODE1));
    pList->value = val;
    if(!initialized){
        return;
    }
    else if(list->count <= 0) {
        list->head = pList;
        list->tail = pList;
    }
    else {
        list->tail->next = pList;
        list->tail = list->tail->next;
    }
    list->count++;
}

void Dequeue(QUEUE *list){
    if(isEmpty(list)){
        // throw exception
    }
    list->head = list->head->next;
    if(list->count <= 0){
        list->tail = list->head;

    }
    list->count--;
}

bool isEmpty(){
    QUEUE *list;
    if(list == NULL){return true;}
    return false;
}


void Clear(QUEUE *list){
    if(!initialized){ return; }
    free(list);
}
