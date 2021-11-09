//
// Created by 18113 on 2021/9/28.
//

#ifndef CODE_SEQLIST_H
#define CODE_SEQLIST_H
using namespace std;

template <class DataType>
class SeqList
{
public:
    SeqList(DataType a[], int i);
    SeqList():length(0){};
    ~SeqList();
    int len() const;  //Obtain Length
    DataType Get(int i) const; //Obtain Values via index
    int Search(DataType x, int i=0) const; // Search Values
    void Insert(int i, int x); // Insert Data
    void Delete(int i); // Delete Data
    void Show() const;  // Print List
    void DoubleSpace(); // Double Current Space
    void clear();
private:
    int MaxSize = 10;
    DataType *data = new DataType[MaxSize];
    int length;
};

template<class DataType>
int SeqList<DataType>::len() const
{
    return length;
}

template<class DataType>
SeqList<DataType>::SeqList(DataType a[], int n)
{
    if (n > MaxSize)
        throw "Parameters Error On Position 1";
    for (int k=0; k<n; ++k)
        data[k] = a[k];
    length = n;
}

template<class DataType>
SeqList<DataType>::~SeqList()
{
    delete [] data;
}

template<class DataType>
DataType SeqList<DataType>::Get(int i) const
{
    if (i > length)
        throw "Parameters Error";
    else
        return data[i];
}

template<class DataType>
int SeqList<DataType>::Search(DataType x, int i) const
{
    do {
        if (x == data[i])
            return i;
        else
            i++;
    }while(i==length);
    throw "Values Not Found";
}

template<class DataType>
void SeqList<DataType>::Insert(int i, int x)
{
    if(length>=MaxSize)
    {
     DoubleSpace();
    }

    if(i<0 || i>length+1) throw "Insert Location Error";

    for(int k=length;k>i; k--)
        data[k] = data[k-1];

    data[i] = x;
    length ++;
}

template<class DataType>
void SeqList<DataType>::Show() const
{
    if (length == 0)
        throw "No Data Found";
    for (int i=0; i<length; i++)
        cout << data[i] << " ";
    cout << endl;
}

template<class DataType>
void SeqList<DataType>::Delete(int i)
{
    if (i > length)
        throw "Delete Location Error";
    for (int k=i; k < length; k++)
    {
        data[k] = data[k+1];
    }
    length --;

}

template<class DataType>
void SeqList<DataType>::DoubleSpace()
{
    auto * new_data = new DataType [MaxSize*2];
    for (int i=0; i<length; ++i)
        new_data[i] = data[i];
    delete [] data;
    data = new_data;
    MaxSize *= 2;
}

template<class DataType>
void SeqList<DataType>::clear() {
    delete [] data;
}


#endif //CODE_SEQLIST_H
