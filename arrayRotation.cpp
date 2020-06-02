/*
    To rotate a given array to the LEFT by "num" steps.
*/

#include <iostream>
using namespace std;

void oneStep(int * arr, int size){
    int temp = arr[0];
    for (int i = 0; i < size - 1; i++){
        arr[i] = arr[i + 1];
    }
    arr[size - 1] = temp;
}

void arrayRotation(int * arr, int size, int num){
    for(int i = 0; i < num; i++){
        oneStep(arr, size);
    }
}


void printFunc(int * arr, int size){
    for (int i = 0; i < size; i++){
        cout << arr[i] << "\t";
    }
}

int main(){
    int array[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(array) / sizeof(array[0]);
    cout << "Before Rotation: " << endl;
    printFunc(array, size);
    cout << endl;
    cout << "Size: " << size << endl;
    arrayRotation(array, size, 2);
    cout << "After Rotation: " << endl;
    printFunc(array, size);
    cout << endl;   
}