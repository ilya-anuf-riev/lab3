#include <iostream>
using namespace std;
void func(int array[], int length)
{
    int c = 0;
    for(int i = 0; i<length; i++)
    {
        c = c + array[i];
    }
    cout<<c<<endl;
}
void sum(int* x, int* y)
{
     int sum =0;
     sum = (*x + *y);
     cout<<sum;
}
void razn(int* x, int* y)
{
    int raz =0;
    raz = (*x - *y);
    cout<<raz;
}

void cha(char* z, int* yX, int* yY)
{
    if (*z == '+')
    {
        sum(yX, yY);
    }
    if (*z == '-')
    {
        razn(yX, yY);
    }
}

int main() {
    
    int a[] = {1,2,3,4,5};
    int length = sizeof(a) / sizeof(a[0]);
    
    func(a, length);

    int x = 1;
    int y = 3;

    int* yX = &x;
    int* yY = &y;
    char z = '+';
    cha(&z,yX,yY);

    float* f = new float[2];
    cout << f << endl;
    delete[] f;
    return 0;
}
