#pragma once
#include <iostream>
using namespace std;
template<class T>
class MVector
{
public:
    MVector(int64_t num);
    T& operator[](int pos);
    friend ostream& operator<<(ostream &os,const MVector<T> &mmvector)
    {
        os << "operator <<" << endl;
        return os;
    };
private:
    T * _Buffer;
};

template<class T>
MVector<T>::MVector(int64_t num)
{
    _Buffer = new T[num];
}

template<class T>
T& MVector<T>::operator[](int pos)
{
    return _Buffer[pos];
}
