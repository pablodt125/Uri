#include <iostream>

using namespace std;

int main () {
    int numero1, numero2,i,j,sum=0;
    cin>>numero1;
    cin>>numero2;
    if (numero1<numero2){
        j=numero2;i=numero1;
    }
    else{
        j=numero1; i=numero2;
    }


    for (i+=1;i<j;i++){
        if (i%2!=0)
            sum+=i;
    }
    cout<<sum<<endl;
    return 0;
}
