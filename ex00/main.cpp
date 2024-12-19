#include <iostream>


template <class T> T add(T& t1, T& t2){
    T result = t1 + t2;
    return result;
}

int main(){
    float a = 5.33;
    float b = 5.33;
    float result = add(a, b);
    
    std::cout << result << std::endl;
    return 0;
}