#include <iostream>

using namespace std;

int main (){
    int i,j=7,a;
    for(i=1;i<10;i+=2){
        a=j;
        for (;j>a-3;j--){
            cout<<"I="<<i<<" J="<<j<<"\n";
        }
        j+=5;
    }
    return 0;
}
