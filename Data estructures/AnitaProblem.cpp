#include <iostream>
#include <math.h>
using namespace std;


int main (){
    int n=1,veces,sum;
    scanf("%i",&n);

    while (n>0){
        veces=((1+(sqrt(1+(8*n))))/2);
        sum=((veces*(veces+1))/2)-n;
        printf("%i %i\n",sum,veces);
        scanf("%i",&n);
    }

    return 0;
}
