#include <iostream>

int main() {
    1)Función que devuelve el elemento máximo del vector
    Int  elementomaximo (int vect[5])
    {
        int max=vect[5];
        int a;
        for(a=1; a<5;a++)
        {
            if (vectr[a]>max)
            {
                max=vect[a];
            }
        }
        cout<<"El elemento máximo es: %a/5”, max;
    }
    int main() {
        int vector [5];
        elementomaximo(vector);
        return  0;
    }
    2)Función que devuelve el elemento mínimo del vector
#include <iostream>
#include <cstdlib>
    using namespace std;
    int mínimo () {
        int min=vector [30]:
        for(int i=1;i<30;i++){
            if(min>vector[i]) {
                min = vector[i];
            }
            Return min;
        }
        Int main(){
            cout<<El valor mínimo es: “<<mínimo () <<endl;
            Return 0
        }
        3)Función que devuelve por referencia el elemento mínimo y máximo del vector
#include <iostream>
        bool myfn(int i, int j) { return i<j; }
        bool operator() (int i,int j) { return i<j; }
    }
    int main () {
        int vect[] = {3,7,2,5,6,4,9};

        cout << "El valor mínimo es" << (vect, vect+7,myobj) << '\n';
        cout << "El valor máximo es “<< (vect, vect+7,myobj) << '\n';

        return 0;
    }
    4)Función que llene el vector con valores aleatorios
    int llenar (int vect [],int tamaño){
        int final=0;
        for(i=0; i<tamaño;i++){
            final=final+rand()%5+1;
            vector[i]=final;
        }
    }
    int aleatorio(int vect[],int tamaño){
        int i, r,aux;
        for(i=0;i<tamaño-1;i++){
            r=rand()%tamaño;
            aux=vect[i];
            vect[i]=vect[r];
            vect[r]=aux;
        }
    }
    Int main(){
        Int vec[8];
        Int tamanio=4;
        srand(time (NULL));
        llenar (vect, tamanio);
        cout<<”Inserte  el orden: ” \n;
        aleatorio(vect, tamanio);


    }
