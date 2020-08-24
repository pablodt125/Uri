#include <iostream>

using namespace std;

int main (){
    int x,cont=0,i;

    for (i=0;i<5;i++){
        cin>>x;
        if (x%2==0)
            cont++;

    }
    cout<<cont<<" valores pares\n";
    return 0;
}
