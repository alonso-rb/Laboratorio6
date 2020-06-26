#include <iostream>
using namespace std;
int main(){
    int num=1;
 
    int a[100];
    int b[50];
    for (int i = 0; i < 100; i++)
    {
      a[i]=num++;
      if(a[i]%2!=0){
        b[i]=a[i];
        cout<<100-b[i]<<endl;
      }
    }
     return 0;
}