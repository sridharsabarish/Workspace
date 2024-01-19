#include <iostream>
#include <vector>

template <typename T>
class Stack {
private:
    std::vector<T> elements;

public:
    // Push an element onto the stack
    void push(const T& value) {
        elements.push_back(value);
    }

    // Pop the top element from the stack
    void pop() {
        if (!empty()) {
            elements.pop_back();
        }
    }

    // Get the top element of the stack
    T& top() {
        return elements.back();
    }

    // Check if the stack is empty
    bool empty() const {
        return elements.empty();
    }

    // Get the size of the stack
    size_t size() const {
        return elements.size();
    }
};

int main() {
    Stack<int> myStack;

    // Pushing elements onto the stack
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    // Checking if the stack is empty
    if (myStack.empty()) {
        std::cout << "Stack is empty." << std::endl;
    } else {
        std::cout << "Stack is not empty." << std::endl;
    }

    // Accessing the top element of the stack
    std::cout << "Top element: " << myStack.top() << std::endl;

    // Popping elements from the stack
    myStack.pop();
    myStack.pop();

    // Checking the size of the stack
    std::cout << "Size of stack: " << myStack.size() << std::endl;

    return 0;
}
