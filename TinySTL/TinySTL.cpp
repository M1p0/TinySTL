#include "mmvector.h"
#include <iostream>
#include <vector>
using namespace std;


struct Point 
{
    int x=1;
};

int main()
{
    //MVector<int> array(10);
    //for (int i = 0; i < 10; i++)
    //{
    //    array[i] = i;
    //}
    //cout << array[4] << endl;
    //cout << array << endl;


    vector<int> a(1024);
    cout << a[0] << endl;
    return 0;
}

