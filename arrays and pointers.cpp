#include <iostream>

using namespace std;

int main (void) {
    int size;

    cout << "How many numbers?\n";
    cin >> size;

    int* array = new  int[size];

     for (int i = 0; i < size; i++){
        array[i] = i*2;
    }

    int* temp_array = array;

    int w = 0;
    for (int* ptr = array; ptr < array + size; ptr++ ){
        cout << "Arr[" << w << "] = " << array[w] << endl;
        w++;
    }   

    //adds 5 to all numbers. 
    w = 0;
    for (int* ptr = array; ptr < array + size; ptr++){
        array[w] = array[w]+5;
        w++;
    }

    cout << "\n\n";
    w = 0;
    for (int* ptr = array; ptr < array + size; ptr++ ){
        cout << "Arr[" << w << "] = " << array[w] << endl;
        w++;
    }

    int* temp = array;
    w = array[size-1];
     for (int i = 0; i < size; i++){
        temp[i] = temp[i--];
    }

    cout << "\n\n";//new line to more easily see different parts of output.

    w = 0;
    for (int* ptr = array; ptr < array + size; ptr++ ){
        cout << "Arr[" << w << "] = " << array[w] << endl;
        w++;
    }

    cout << "\n\n";//new line to more easily see different parts of output.

    delete[] array;

    return 0;
}
