#include <iostream>

using namespace std;

int main (){
    int iniW,iniX,iniY,iniZ,finW,finX,finY,finZ;
    char cad[25];

    cin>>cad>>iniW>>iniX>>cad>>iniY>>cad>>iniZ;
    cin>>cad>>finW>>finX>>cad>>finY>>cad>>finZ;

    int s1,s2,tot,d,h,m,s;
    s1=iniZ+(iniY*60)+(iniX*60*60)+(iniW*60*60*24);
    s2=finZ+(finY*60)+(finX*60*60)+(finW*60*60*24);
    tot=s2-s1;
    d=tot/(60*60*24);
    tot-=(d*60*60*24);
    h=tot/(60*60);
    tot-=(h*60*60);
    m=tot/60;
    tot-=(m*60);
    s=tot;
    cout<<d<<" dia(s)\n";
    cout<<h<<" hora(s)\n";
    cout<<m<<" minuto(s)\n";
    cout<<s<<" segundo(s)\n";

    return 0;

    }
