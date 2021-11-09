#include <iostream>
using namespace std;

int Max3(int A,int B,int C) {
    return (A > B) ? ((A > C) ? A : C) : ((B > C) ? B : C);
}

int max_sub_sum(int a[], int left, int right)
{

};

int main() {
    int a[10000] = {0};
    int i;
    for (i=0; i < 10000; i++)
    {
        a[i] = rand()%20 +1;
    };

    return 0;
}
