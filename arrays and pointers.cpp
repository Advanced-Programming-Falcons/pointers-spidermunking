#include <iostream>

using namespace std;

int main (void) {
    int size;
    int w = 0;

    cout << "How many numbers?\n";
    cin >> size;

    // makes the array
    int* array = new  int[size];

     for (int i = 0; i < size; i++){
        array[i] = i*2;
        cout << "Arr[" << w << "] = " << array[w] << endl;
        w++;
    }

    cout << "\n\n";
    //adds 5 to all numbers. 
    w = 0;
    for (int* ptr = array; ptr < array + size; ptr++){
        array[w] = array[w]+5;
        cout << "Arr[" << w << "] = " << array[w] << endl;
        w++;
    }

    // this is the part where it shifts the values in the array
    w = 0;
    int* temp = array;
    int n = array[size-1];//remember first element
    for(int i= size -1 ; i>= 0;i--){
        temp[i] = temp[i-1];
    }
    temp[0] = n;

    cout << "\n\n";//new line to more easily see different parts of output.

    w = 0;
    for (int* ptr = array; ptr < array + size; ptr++ ){
        cout << "Arr[" << w << "] = " << array[w] << endl;
        w++;
    }

    delete[] array;

    return 0;
}
