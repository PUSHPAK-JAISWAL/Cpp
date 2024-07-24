#include <iostream>
using namespace std;
class Vector {
    public: 
        int size;
        int capacity;
        int* arr;
        
        Vector() {
            this->size =0;
            this->capacity=1;
            this->arr = new int[1];
        }

        void add(int element) {
            if(this->size== this->capacity) {

                this->capacity*=2;

                int* arr2 = new int(this->capacity);
                for(int i=0;i<size;i++) {
                    arr2[i] = arr[i];
                }

                arr = arr2;

            }
            this->arr[this->size]=element;
            this->size++;
        }

        void print() {
            for(int i=0;i<size;i++) {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }

        int get(int index) {
            if(size == 0) {
                cout<<"Array is Empty"<<endl;
                return -1;
            }

            if(index>=size) {
                cout<<"Invalid Index"<<endl;
                return -1;
            }
            return arr[index];
        }

        void remove() {
             if(size == 0) {
                cout<<"Array is Empty"<<endl;
            }
            size--;
        }
};


int main() {
    Vector v1;
    cout<<v1.size<<" "<<v1.capacity<<endl;    
    v1.add(10);
    v1.print();
    cout<<v1.size<<" "<<v1.capacity<<endl;
    v1.add(20);
    v1.print();
    cout<<v1.size<<" "<<v1.capacity<<endl;
    v1.add(30);
    v1.print();
    cout<<v1.size<<" "<<v1.capacity<<endl;
    v1.add(40);
    v1.print();
    cout<<v1.size<<" "<<v1.capacity<<endl;
    v1.add(50);
    v1.print();

    // cout<<v1.get(4)<<endl;
    v1.remove();
    v1.print();
}
