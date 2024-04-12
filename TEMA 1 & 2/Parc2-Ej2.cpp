#include <iostream>
using namespace std;

int main() {
  unsigned N, Div=2, div=2;
  bool poderoso;
  cout<<"Introduzca un número poderoso: ";
  cin>>N;
  while(Div<=N/2) {
    if(Div%div!=0 && div<Div) {
      ++div;
    }
    else if(Div%div==0 && div<Div) {
      ++Div, div=2;
    }
    else if(Div%div==0 && Div==div) {
      if(N%Div!=0) {
        ++Div, div=2;
      }
      else if(N%Div==0 && N%(Div^2)==0) {
        poderoso=true;
      }
      else if(N%Div==0 && N%(Div^2)!=0) {
        poderoso=false; break;
      }
    }
  }
  if(poderoso) {
    cout<<N<<" es un número poderoso."<<endl;
  }
  else {
    cout<<N<<" no es un número poderoso."<<endl;
  }
  return 0;
}