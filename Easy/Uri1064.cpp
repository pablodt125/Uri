#include <iostream>

using namespace std;

int main (){
    float x,prom;
    int i,cont=0;
    for(i=0;i<6;i++){
        cin>>x;
        if (x>0){
            cont++;
            prom+=x;
        }
    }
    cout<<cont<<" valores positivos\n";
    printf("%.1f\n",prom/cont);

    return 0;
}
