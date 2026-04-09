#include <iostream>
using namespace std;
class BinaryHeap
{
    public:
    int capacity;       //max capacity of the heap
    int size;           //the no. of elements placed in the heap
    int* arr;           //It's an array for storing all the keys
    BinaryHeap(int cap)
    {    
        capacity=cap;
        size=0;
        arr =new int[capacity];  
    }
    int parent(int i)
    {   
        return (i-1)/2;
    }
    int left(int i)
    {
        return 2*i+1;
    }
    int right(int i)
    {
        return 2*i+2;
    }
    void Insert(int x)
    {
        if(size==capacity)
        {
            cout<<"Heap Overflow"<<endl;
            return;
        }
        arr[size]=x;
        int k=size;
        size++;
        while(k!=0 && arr[parent(k)]>arr[k])            //Checking MinHeap property Bottom-Top
        {
            swap(arr[parent(k)],arr[k]);
            k=parent(k);
        }
    }
    void Heapify(int ind)                               //Top-Bottom
    {
        int ri=right(ind);
        int li=left(ind); 
        int smallest=ind;
        if(li<size && arr[li]<arr[smallest])
            smallest=li;
        if(ri<size && arr[ri]<arr[smallest])
            smallest=ri;
        if(smallest!=ind)
        {
            swap(arr[ind],arr[smallest]);
            Heapify(smallest);
        }
    }
    int getMin()
    {
        return arr[0];
    }
    int ExtractMin()
    {
        if(size<=0)
            return 1e9;
        if(size==1)
        {
            size--;
            return arr[0];
        }
        int mini=arr[0];
        arr[0]=arr[size-1];
        size--;
        Heapify(0);
        return mini;
    }
    void DecreaseKey(int i, int val)
    {
        arr[i]=val;
        while(i!=0 && arr[parent(i)]>arr[i])
        {
            swap(arr[parent(i)],arr[i]);
            i=parent(i);
        }
    }
    void Delete(int i) 
    {
        DecreaseKey(i,-1e9);
        ExtractMin();
    }
};
int main()
{
    return 0;
}