#include<iostream>

using namespace std;

void swap(int& a, int& b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

void sort(float array[], int size, bool isAscending)
{
    if(!isAscending)
    {
        for(int i = 0; i < size - 1; ++i)
        {
            for(int j = i + 1; j < size; ++j)
            {
                if(array[i] < array[j]) swap(array[i], array[j]);
            }
        }
    }
    else{
        for(int i = 0; i < size - 1; ++i)
        {
            for(int j = i + 1; j < size; ++j)
            {
                if(array[i] > array[j]) swap(array[i], array[j]);
            }
        }
    }
}

int main()
{

}