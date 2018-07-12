#pragma once
#include <new>
#include <cstddef>
#include <cstdlib>
#include <climits>
#include <iostream>
namespace MM
{
    template <class T>
    inline T* _allocate(ptrdiff_t size, T*)
    {
        set_new_handler(0);
        T* tmp = (T*)(::operator new((size_t)(size * sizeof(T))));
        if (tmp==0)
        {
            cerr << "out of memory" << endl;
            exit(1);
        }
        return tmp;
    }

    template <class T>
    inline void _deallocate(T* buffer)
    {
        ::operator delete(buffer);
    }
}