class myStack {
    private:
    int top;
    int *arr;
    int capacity;

  public:
    myStack(int n) {
        top=-1;
        capacity=n;
        arr = new int[n];
    }

    bool isEmpty() {
         return (top==-1);
    }

    bool isFull() {
         return (top==capacity-1);
    }

    void push(int x) {
        if(isFull())    return;
        top++;
        arr[top]=x;
    }

    void pop() {
        if(isEmpty())   return;
            top--;
    }

    int peek() {
        if (isEmpty())  return -1;
        return arr[top];
    }
};