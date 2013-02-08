#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "InsertionSort.h"

using namespace std;

int main()
{
    int N=100;
    int i =0;
    string arr[N];
    string line;
    InsertionSort pass;

    ifstream myfile;
    myfile.open("top_passwords.txt");
    while(myfile.good()){
        getline(myfile, line);
        arr[i]=line;
        i++;
    }
    pass.insertion_sort(arr, N);
    for (i=0; i<N; i++)
    {
        cout << arr[i] << endl ;
    }
    myfile.close();
    return 0;
}
