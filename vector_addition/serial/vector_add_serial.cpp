#include <iostream>
#include <string>
using namespace std;

string printArray(int arr[], int arrSize) {
    string result = "[";
    for (int i = 0; i < arrSize - 1; i++) {
        result += to_string(arr[i]);
        result += ", ";
    }
    // last element
    result += to_string(arr[arrSize - 1]) + "]";
    return result;
}

int main(int argc, char *argv[]) {
    int size;
    cout << "Please enter any size for two vectors consisting of randomly generated numbers between 0 and 100: ";
    cin >> size;
    
    int vectorA[size];
    int vectorB[size];
    int vectorC[size];

    // Fill both vectors with <size> random numbers
    srand((unsigned int)time(NULL)); // set seed
    for (int i = 0; i < size; i++) {
        vectorA[i]=rand()%100;
        vectorB[i]=rand()%100;
    }

    // Add vectors
    for (int i = 0; i < size; i++) {
       vectorC[i] = vectorA[i] + vectorB[i];
    }

    cout << "\nVector A:" << endl;
    cout << printArray(vectorA, sizeof(vectorA) / sizeof(int)) + "\n"<< endl;
    cout << "Vector B:" << endl;
    cout << printArray(vectorB, sizeof(vectorB) / sizeof(int)) + "\n"<< endl;
    cout << "Vector A + B:" << endl;
    cout << printArray(vectorC, sizeof(vectorC) / sizeof(int)) + "\n"<< endl;
}