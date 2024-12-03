#include<iostream>
using namespace std;

class Heap{
    public:
    int arr[101];
    int size;

    Heap(){
        size = 0;
    }

    void insert(int value){
        // value insert in end
        size = size+1;
        int index = size;
        arr[index] = value;

        // value palces at right position 
        while(index>1){
            int parentindex = index/2;
            if(arr[index]>arr[parentindex]){
                swap(arr[index], arr[parentindex]);
                index = parentindex;
            }else{
                break;
            }
        }
    }
    int delete(){
        int ans = arr[1];
        // replace root node with last node
        arr[1] = arr[size];
        size--;
        // place root node its right position
        int index = 1;
        while(index < size){
            int left = 2*index;
            int right  = 2*index+1;
            int largest = index;
            if(left < size && arr[largest] < arr[left]){
                largest = left;
            }
            if(right < size && arr[largest] < arr[right]){
                largest = left;
            }

            if(largest == index){
                // value is at current position
                return;
            }else{
                swap(arr[index], arr[largest]);
                index = largest;
            }
        }
        return ans;

    }
};
int main() {
    Heap h;
    h.arr[0] = -1;
    h.arr[1] = 100;
    h.arr[2] = 50;
    h.arr[3] = 60;
    h.arr[4] = 40;
    h.arr[5] = 45;
    h.size = 5;
    cout << "Printing the heap: " << endl;
    for(int i=0; i<=h.size; i++){
        cout << h.arr[i] << " ";

    }
    cout << endl;
    h.insert(110);

     cout << "Printing the heap: " << endl;
    for(int i=0; i<=h.size; i++){
        cout << h.arr[i] << " ";

    }
   cout << delete() << endl;
    cout << "Printing the heap: " << endl;
    for(int i=0; i<=h.size; i++){
        cout << h.arr[i] << " ";

    }

    return 0;
}