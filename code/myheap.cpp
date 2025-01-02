#include "myheap.h"

MyHeap::MyHeap() {
    heap.resize(20005);
    size = 0;
}

MyHeap::~MyHeap(){
}

void MyHeap::HeapDown(int x){
    while(true)
    {
        int ls = 2*x+1;
        int rs = 2*x+2;
        int smallest = x;
        if(rs<size&&heap[rs].dis<heap[smallest].dis){
            smallest = rs;
        }
        if(ls<size&&heap[ls].dis<heap[smallest].dis){
            smallest = ls;
        }
        if(smallest ==x)
            break;
        qSwap(heap[x],heap[smallest]);
        x = smallest;
    }
}

void MyHeap::HeapUp(int x){
    while(x>0&&heap[x].dis<heap[(x-1)/2].dis){
        qSwap(heap[x],heap[(x-1)/2]);
        x = (x-1)/2;
    }
}

void MyHeap::pop(){
    heap[0] = heap[size - 1];
    size--;
    HeapDown(0);
}

edge MyHeap::top(){
    return heap[0];
}

void MyHeap::push(edge x){
    heap[size++] = x;
    HeapUp(size-1);
}

int MyHeap::Size(){
    return size;
}
