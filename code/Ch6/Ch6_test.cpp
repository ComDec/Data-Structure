//
// Created by 18113 on 2021/12/12.
//

#include <iostream>
#include "sort.h"
#include <time.h>

using namespace std;

int main()
{
    int array[10] = {9,7,8,6,3,2,1,4,5};
    SORT<int> Sorter(array);
    Sorter.display();

//    // Bubble Sort, O(n^2)
//    Sorter.BubbleSort();
//    Sorter.display();

//    // Select Sort, O(n^2)
//    Sorter.SelectSort();
//    Sorter.display();

//    // Insert Sort
//    Sorter.InsertSort();
//    Sorter.display();

//    // Shell Sort
//    Sorter.ShellSort(2);
//    Sorter.display();
//    int gap[6] = {8,1};
//    Sorter.ShellSort(gap);
//    Sorter.display();



    return 0;
}