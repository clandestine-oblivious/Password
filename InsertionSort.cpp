#include "InsertionSort.h"
#include <string>

InsertionSort::InsertionSort()
{
    //ctor
}

InsertionSort::~InsertionSort()
{
    //dtor
}

void InsertionSort::insertion_sort(string* a, int N)
{
    int i=0;
    int j=0;

    string key;
    for (i=0; i<N; i++)
    {
        key=a[i];
        j= i-1;

            while (j>=0 && a[j]> key)
            {a[j+1]=a[j];
            j=j-1;}

             a[j+1]=key;
    }
}
