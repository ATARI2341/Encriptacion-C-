#include<iostream>
using namespace std;
// Algoritmo de ordenamiento GNOME
int main(){
// i es la variable de control tmp es el pibote para cambiar datos de lugar
int i=0,tmp=0;

//a es el arreglo
int a[10] = {2,54,3,2,6,7,4,2,1,23};

//el numero 9 en el while reprecenta el "tamaño del arreglo-1"
while (i<=9){

    if(a[i-1]<=a[i]){
        i++;
    }

    else {
        tmp=a[i-1];
        a[i-1]=a[i];
        a[i]=tmp;
        i--;
    }
    if(i==0){
        i=1;
    }
};
for(int j=0;j<9;j++){
    cout<<a[j]<<" , ";
}

return 0;
}
