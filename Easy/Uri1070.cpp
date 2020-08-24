#include <iostream>

using namespace std;

int main(){
    int x,cont=0;
    cin>>x;
    while(cont!=6){
        if (x%2!=0){
            cout<<x<<"\n";
            cont++;
        }
        x++;
    }
    return 0;
}
