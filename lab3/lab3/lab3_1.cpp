#include <iostream>
using namespace std;
int main() {
    int x = 5;
    int *p;
    p = &x;
    cout<<"p = "<<p<<endl;
    cout<<"*p = "<<*p<<endl;
    *p = 3;
    cout<<"*p = "<<*p<<endl;
    cout<<"x = "<<x<<endl;
    int arr[] = {1,2,3,4};
    int i = 0;
    int *o;
   while(i<4)
   {
       o = &arr[i];
       cout<<*o<<endl;
       i = i+1;
   }

   int f = 2;
   int* const F = &f;
   cout<< "F = "<<F<<endl;
   cout<< "*F = "<<*F<<endl;
   *F = 5;
   cout<< "*F = "<<*F<<endl;
   //F = 0x16d74f97c;
    return 0;
}
