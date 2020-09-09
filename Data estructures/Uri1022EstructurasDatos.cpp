#include <bits/stdc++.h>
#include <cstdlib>
#include <string>

using namespace std;

//Toma el valor de la cadena y lo convierte en un vector de enteros
void sacarNumeros(string &cadena,vector <int> &storeDate){
    string st;
    int j=0,k=0;
        for (int i = 0; i < 4; i++)
        {
            
            for(;int(cadena[j])>=48 && int(cadena[j])<=57;j++);
            
            storeDate[i]=(stoi(string (cadena,k,j)));

            st="";
            j+=3;
            k=j;
        }
        
}
//En esta funcion se encuentra la operacion de la cada, si el metodo find no encuentra lo que se esta buscando en la cadena
//lo que hace es devolver un numero muy grande.
char encontrarOperacion(string cadena){
    char s;
    int j=0;
    if (cadena.find('+')<30)
        return '+';
    else if (cadena.find('-')<30)
        return '-';
    else if (cadena.find ('*')<30)
        return '*';
    else
        return '/';

}
//Guardamos en un nuevo vector los resultados de las operaciones entre fracciones
void hacerOperacion(char s,vector <int> storeDate,vector <int> &storeDate2){
    if (s=='+'){
        storeDate2[0]=((storeDate[0]*storeDate[3])+(storeDate[1]*storeDate[2]));
        storeDate2[1]=(storeDate[1]*storeDate[3]);
    }else if (s=='-'){
        storeDate2[0]=((storeDate[0]*storeDate[3])-(storeDate[1]*storeDate[2]));
        storeDate2[1]=(storeDate[1]*storeDate[3]);
    }else if (s=='*'){
        storeDate2[0]=(storeDate[0]*storeDate[2]);
        storeDate2[1]=(storeDate[1]*storeDate[3]);
    }
    else{
        storeDate2[0]=(storeDate[0]*storeDate[3]);
        storeDate2[1]=(storeDate[1]*storeDate[2]);
    }

}
//Se simplifican los anteriores numeros, si se simplifica una vez cambia el numero mayor, aunque se haria mas optimo si se divide mayor entre 2
void simplificar(vector <int> &storeDate2){
    int n=storeDate2[0],m=storeDate2[1],mayor=(n>m)?n:m,i=2;

    while (i<=mayor){
        if ((n%i==0) && (m%i==0)){
            n/=i;
            m/=i;
            mayor=(n>m)?n:m;
            i=2;
        }else
        {
            i++;
        }
    }
    storeDate2[2]=(n);storeDate2[3]=(m);
}

int main(){
    int n,j=0;
    char m;
    string cadena,numero;
    vector <int> storeDate(4),storeDate2(4);
    cin>>n;
    cin.ignore();
    

    for (int i=0;i<n;i++){
        
        getline(cin,cadena);
        sacarNumeros(cadena,storeDate);
        m=encontrarOperacion(cadena);
        hacerOperacion(m,storeDate,storeDate2);
        simplificar(storeDate2);
        cout<<storeDate2[0]<<"/"<<storeDate2[1]<<" = "<<storeDate2[2]<<"/"<<storeDate2[3]<<'\n';
        cadena="";
    }
   
    return 0;
    }
