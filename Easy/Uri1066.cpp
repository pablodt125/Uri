#include <iostream>

using namespace std;

int main () {
    int num,p=0,i,n=0,pr=0,ip=0;

    for(i=0;i<5;i++){
        cin>>num;
        if (num%2==0){
            pr++;
            if(num>0)
                p++;
            else if (num<0)
                n++;
        }
        else{
            ip++;
            if(num>0)
                p++;
            else if(num<0)
                n++;
        }

    }
    cout<<pr<<" valor(es) par(es)\n";
    cout<<ip<<" valor(es) impar(es)\n";
    cout<<p<<" valor(es) positivo(s)\n";
    cout<<n<<" valor(es) negativo(s)\n";

    return 0;
}
