#include <iostream>

using namespace std;

int main (){
    int s,i,sum=0,j,chan;
    cin>>s;
    for(i=0;i<s;i++){
        cin>>chan;
        for(j=0;j<chan;j++){
            if (j%2==0){
                sum+=1;
            }
            else
                sum-=1;
        }
        cout<<sum<<"\n";
        sum=0;
    }
    return 0;
}
