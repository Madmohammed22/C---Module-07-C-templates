#include "iter.hpp"

void Test_function(int &data){
    std::cout << data << std::endl;
}

int main()
{
    int arr[] = {1, 2, 3, -4, 10};
    int size = sizeof(arr) / sizeof(int);
    ::iter(arr, size, ::check_status_of_data);
}
