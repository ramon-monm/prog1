#include <iostream>
#include <array>
using namespace std;

const unsigned t=5;
typedef array <int, t> vector;

void leer_vector(vector &x);
int cima(const vector &x);

int main() {
    vector v;
    leer_vector(v);
    cout<<"La primera cima del vector está en la posición "<<cima(v)<<".";
    return 0;
}

void leer_vector(vector &x) {
    cout<<"Introuzca las componentes del vector: ";
    for(unsigned i=0; i<t; ++i) {
        cin>>x[i];
    }
}

int cima(const vector &x) {
    int pos=-1;
    for(unsigned j=0; j<t; ++j) {
        if(x[j]>x[j+1] && j==0) {
            pos=j; j=t;
        }
        else if(x[j]>x[j-1] && j==t-1) {
            pos=j; j=t;
        }
        else if(x[j]>x[j-1] && x[j]>x[j+1]) {
            pos=j; j=t;
        }
    }
    return pos;
}

/*int cima(const vector &v){
  int pos=-1;
  for(int j=0;j<TAM;j++){
    if(v[j]>v[j+1] and j==0){
      pos=j;
      j=t;
    }
    else if(v[j]>v[j-1] and j==t-1){
      pos=j;
      j=TAM;
    }
    else if(v[j]>v[j+1] and v[j-1]<v[j]){
      pos=j;
      j=TAM;
    }
  }
   

  return pos;
} */