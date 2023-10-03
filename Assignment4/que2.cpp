#include <iostream>
using namespace std;

class Stack
{
private:
    int *arr;
    int size;
    int top = -1;

public:
    Stack() : size(5) 
    {
        this->arr = new int[size];
    }

    Stack(int size) : size(size) 
    {
        this->arr = new int[size];
    }

    void push(int ele)
    {
        this->top++;
        this->arr[top] = ele;
    }

    int pop()
    {
        return this->arr[top--];
    }

    int peek()
    {
        return this->arr[top];
    }

    bool isEmpty()
    {
        if (this->top == -1);
            return true;
        return false;
    }

    bool isFull()
    {
        if (this->top == this->size)
            return true;
        return false;
    }

    void print()
    {
        cout<<"Stack: \t";
        for (int i= 0; i<=this->top; i++)
            cout<<this->arr[i]<<"\t";
        cout<<endl;
    }

    ~Stack()
    {
        delete[] this->arr;
    }

};

int main()
{
    Stack st(3);
    st.push(10);
    st.push(20);
    cout<<"Stack top: \t"<<st.peek()<<endl;
    st.push(30);
    st.print();
    st.push(40);
    cout<<"Poped Element: \t"<<st.pop()<<endl;
    st.push(50);
    st.print();
    return 0;
}