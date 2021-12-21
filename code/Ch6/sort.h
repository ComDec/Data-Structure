//
// Created by 18113 on 2021/12/12.
//

#ifndef CODE_SORT_H
#define CODE_SORT_H
#include <iostream>
#include <algorithm>
#include <random>

template<class DataType>
class SORT
{
public:
    DataType* data = new DataType[200000];
    SORT(DataType *array);
    ~SORT();
    void display();
    int GetLength();
    void BubbleSort();
    void SelectSort();
    void ShellSort(int gap = 2);
    void ShellSort(int *gap);
    void QuickSort();
    void MergeSort();
    void InsertSort();
    void CountSort();
    void BaseSort();
    void HeapSort();


private:
    void Swap(DataType &x, DataType &y);
    void QuickSortCore(DataType* array, int n);
    void MergeSortCore(DataType* array, int begin, int end);
};

template<typename DataType>
SORT<DataType>::SORT(DataType *array)
{
    data = array;
}

template<typename DataType>
SORT<DataType>::~SORT() {
    delete[] data;
}

template<typename DataType>
void SORT<DataType>::display() {
    int i = 0;
    while(data[i])
    {
        std::cout << data[i] << ' ';
        i++;
    }
    std::cout << std::endl;
}

template<typename DataType>
int SORT<DataType>::GetLength() {
    int i = 0;
    while(data[i])
        i++;
    return i;
}

template<typename DataType>
void SORT<DataType>::Swap(DataType &x, DataType &y) {
    DataType temp = x;
    x = y;
    y = temp;
}



template<typename DataType>
void SORT<DataType>::BubbleSort() {
    for (int i=0; i<GetLength();i++)
        for(int j=i+1;j<GetLength();j++)
        {
            if (data[i] >= data[j])
                Swap(data[i], data[j]);
        }
}

template<typename DataType>
void SORT<DataType>::SelectSort() {
    for (int i=0; i<GetLength(); i++) {
        // *min* has to be reset here
        int min = i;
        for (int j = i + 1; j < GetLength(); j++) {
            if (data[j] <= data[min])
                min = j;
        }
        Swap(data[i], data[min]);
    }
}

template<typename DataType>
void SORT<DataType>::InsertSort() {
    int j=0;
    for (int i=1; i<GetLength(); i++)
    {
        int temp = data[i];
        // j can equal to 0, make sure in the
        // last step, j=-1, that means temp will remove to the head of array
        for (j=i-1; j>=0; j--)
        {
            if (temp <= data[j])
                data[j+1] = data[j];
            else
                break;

        }
        data[j+1] = temp;
    }
}

template<typename DataType>
void SORT<DataType>::ShellSort(int gap) {
    int j = 0;
    for (int step = GetLength()/gap; step >=1; step/=gap)
    {
        // let 1 in Insert Sort becomes "step", we realize Shell Sort
        for(int i=step; i<GetLength(); i++)
        {
            DataType temp = data[i];
            for(j=i-step; j>=0; j-=step)
            {
                if (temp <= data[j])
                    data[j+step] = data[j];
                else
                    break;

            }
            data[j+step] = temp;
        }
    }
}

template<typename DataType>
void SORT<DataType>::ShellSort(int *gap) {
    // We can also personalize gap
    // Default check is not implemented
    int j,k = 0;
    while(gap[k])
    {
        for(int i=gap[k]; i<GetLength();i++)
        {
            DataType temp = data[i];
            for (j=i-gap[k]; j>=0; j-=gap[k])
            {
                if (temp <= data[j])
                    data[j+gap[k]] = data[j];
                else
                    break;

            }
            // outside the j loop, stop change location
            data[j+gap[k]] = temp;
        }
        k++;
    }

}

template<typename DataType>
void SORT<DataType>::QuickSort() {
    QuickSortCore(data, GetLength());
}


template<typename DataType>
void SORT<DataType>::QuickSortCore(DataType* array, int n) {
    if (n<2)
        return;
    int i,j;
    int pivot = array[n/2];
    // Get all the elements, there are more than one elements
    // that bigger or smaller than pivot
    for(i=0,j=n-1;;i++,j--)
    {
        // Find the elements that bigger than pivot
        while(array[i]<pivot)
            i++;
        // Find the elements that smaller than pivot
        while(array[j]>pivot)
            j--;
        if (i>=j)
            break;
        Swap(array[i],array[j]);
    }

    QuickSortCore(array, i);
    QuickSortCore((array + i), n - i);
}

template<typename DataType>
void SORT<DataType>::MergeSort() {
    MergeSortCore(data,0,GetLength()-1);
}

template<typename DataType>
void SORT<DataType>::MergeSortCore(DataType* array, int begin, int end) {
    auto* temp = new DataType[end-begin+1];
    int lp, rp, p, middle;
    if (begin >= end)
        return;
    middle = (begin+end) / 2;
    MergeSortCore(array, begin, middle);
    MergeSortCore(array, (middle+1), end);
    lp = begin;
    rp = middle+1;
    p = 0;
    while(lp <= middle || rp <= end)
    {
        if (lp > middle)
            temp[p++] = array[rp++];
        else if (rp > end)
            temp[p++] = array[lp++];
        else
        {
            if (array[lp] <= array[rp])
                temp[p++] = array[lp++];
            else
                temp[p++] = array[rp++];
        }
    }
    for (int i=0; i<end-begin+1; i++)
        array[begin+i] = temp[i];

    delete[] temp;
}

#endif //CODE_SORT_H
