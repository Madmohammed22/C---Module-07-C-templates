#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

class Iter{
    public:
        Iter();
        Iter(const Iter& iter);
        Iter& operator=(const Iter& iter);
        ~Iter();
};

template<class T > void check_status_of_data(T &data){
    std::cout << data << std::endl;
    return ;
}


template <class T> void iter(T& t1, int size, void (*f)(int&)){
    for (int i = 0; i < size; i++){
        f(t1[i]);
    }
}

#endif