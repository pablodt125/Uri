#include <iostream>

using namespace std;

int main (){
    int i,num,reci,cont1=0,cont2=0;

    scanf("%i",&num);
    for(i=0;i<num;i++){
        scanf("%i",&reci);
        if (reci>=10 &&reci<=20)
            cont1++;
        else
            cont2++;
    }
    printf("%i in\n%i out\n",cont1,cont2);

    return 0;
}
