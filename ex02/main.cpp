#include "Array.hpp"

int main(){
    // unsigned int size = 10;

    const Array<int> arr(20);
    // arr[0] = 10;
    for (int i = 0; i < arr.getSize(); i++){
        std::cout << arr[i] << std::endl;
    }
    // for (int i = 0; i < arr->getSize(); i++){
    //     std::cout << arr->at(i) << std::endl;
    // }
    // delete arr;
    return 0;
}
// #include <iostream>

// template <typename T>
// class Array {
// private:
//     T* arr;
//     int size;
    
// public:
//     Array(int n) : size(n) {
//         arr = new T[n];
//     }

//     ~Array() {
//         delete[] arr;
//     }

//     T& operator[](int index) {
//         return arr[index];
//     }

//     const T& operator[](int index) const {
//         return arr[index];
//     }

//     int getSize() const { return size; }
// };

// int main() {
//     Array<int> arr(5);  // Create an array of size 5
//     arr[0] = 100;
//     arr[1] = 20;

//     std::cout << arr[0] << std::endl;  // Outputs 10
//     std::cout << arr[1] << std::endl;  // Outputs 20

//     return 0;
// }
