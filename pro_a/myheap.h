#ifndef MYHEAP_H
#define MYHEAP_H
#include <QVector>
#include <edge.h>

class MyHeap
{
private:
    QVector<edge> heap;
    int size;
public:
    MyHeap();
    void HeapDown(int x);
    void HeapUp(int x);
    void push(edge x);
    void pop();
    edge top();
    ~MyHeap();
    int Size();

};

#endif // MYHEAP_H
