#pragma once

#define INITIAL_CAPACITY 5
#define MULTIPLY_CAPACITY_FACTOR 2
#define ADD_CAPACITY_ADDEND 100

class Stack {
private:
    int* stack;
    int top;
    int capacity;

public:
    Stack();

    ~Stack();

    Stack(const Stack& secondStack); 

    Stack& operator=(const Stack& other);

    void push(int element);

    int pop();

    bool isEmpty() const;
};
