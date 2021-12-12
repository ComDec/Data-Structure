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
    SORT(DataType *array);
    ~SORT();
    void display();
    int GetLength();
    void Swap(DataType &x, DataType &y);
    void BubbleSort();
    void SelectSort();
    void ShellSort(int gap = 2);
    void ShellSort(int *gap);
    void QuickSort();
    void MergeSort();
    void InsertSort();
    void CountSort();
    void BaseSort();


private:
    DataType* data = new DataType[200000];

    void begin(DataType *pType);
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
            data[j+gap[k]] = temp;
        }
        k++;
    }

}



#endif //CODE_SORT_H
