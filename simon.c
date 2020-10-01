#include <stdio.h>

struct Soldier
{
    struct Soldier *prev;
    int sequence;
    struct Soldier *next;
};

struct Queue
{
    int nodeCount;
    int k;
    int th;
    char name[50];
    struct Soldier *front;
    struct Soldier *back;
};

// Functions
void enqueue();
void dequeue();
void peek();
int isEmpty();

int main()
{
    
}