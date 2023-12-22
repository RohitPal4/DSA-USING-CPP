# include<iostream>
using namespace std;

int binarySearch(int a[], int size, int key){
    int start = 0;
    int end =size-1;
    int mid = start + (end - start)/2;
    while(start <= end){
        if(a[mid] == key){
            return mid;
        }
        if(key > a[mid]){
            start = mid +1;
        }
        else{
            end = mid -1;
        }
        mid = start + (end - start)/2;

    }
    return -1;
}
int main() {
    int e[6] = {2, 4, 6, 8, 12, 18};
    int o[5] =  {3, 8, 11, 14, 16};
    int index = binarySearch(e, 6, 18);
    cout << "index of 18 is: " << index << endl;
    int oddIndex = binarySearch(o, 5, 12);
    cout << "index of 12 is: " << oddIndex << endl;
    return 0;
}