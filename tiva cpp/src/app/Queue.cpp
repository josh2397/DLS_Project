#include "Queue.h"
#include "helpers.h"
#include "serial.h"

// Constructor to initialize queue
Queue::Queue()
{
    front = 0;
    rear = -1;
    count = 0;
}

// Utility function to remove front element from the queue
void Queue::dequeue()
{
    // check for queue underflow
    if (isEmpty())
    {
        Serial::WriteString(EMPTY_QUEUE);
    }
    memset(arr[front], 0, strlen(arr[front]));
    front = (front + 1) % capacity;
    count--;
}

// Utility function to add an item to the queue
void Queue::enqueue(char* item)
{
    // check for queue overflow
    if (isFull())
    {
        Serial::WriteString(FULL_QUEUE);
        return;
    }

    rear = (rear + 1) % capacity;
    strcpy(arr[rear], item);
    count++;
}

// Utility function to return front element in the queue
char* Queue::peek()
{
    if (isEmpty())
    {
        return NULL;
    }
    return arr[front];
}

/**
 * Prints out all instructions within the queue. Used for debugging.
 */
void Queue::printToSerial(){
    Serial::WriteString("Queue:\n\r");
    for (int i = front; i <= rear; i++){
        char * nextInstruction = get(i);
        
        Serial::WriteString(nextInstruction);
        Serial::WriteChar('\r');
    }
}

char* Queue::get(int i){
    return arr[i];
}

void Queue::clear(){
    for (int i = front; i <= rear; i++){
        dequeue();
    }
}

// Utility function to return the size of the queue
int Queue::size()
{
    return count;
}

// Utility function to check if the queue is empty or not
bool Queue::isEmpty()
{
    return (size() == 0);
}

// Utility function to check if the queue is full or not
bool Queue::isFull()
{
    return (size() == capacity);
}