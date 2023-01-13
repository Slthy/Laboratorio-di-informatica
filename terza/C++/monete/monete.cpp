#include <iostream>
using namespace std;

struct Scelta{
  int totale;
  char input;
  bool error;
};
int totale;

void outputMonete(int e2, int e1, int c50, int c20, int c10, int c5, int c2, int c1){
  cout<<"Cambio: "<<totale<<" centesimi"
      <<"\n2 euro: "<<e2
      <<"\n1 euro: "<<e1
      <<"\n50 centesimi: "<<c50
      <<"\n20 centesimi: "<<c20
      <<"\n10 centesimi: "<<c10
      <<"\n5 centesimi: "<<c5
      <<"\n2 centesimi: "<<c2
      <<"\n1 centesimo: "<<c1<<endl;
  return;
}

void calcolaMonete(int totale, int &e2, int &e1, int &c50, int &c20, int &c10, int &c5, int &c2, int &c1){ //algoritmo ricorsivo
  cout<<totale;
  if ((totale - 200) >= 0) {e2++; calcolaMonete(totale - 200, e2, e1, c50, c20, c10, c5, c2, c1);}
    else if ((totale - 100) >= 0) {e1++; calcolaMonete(totale - 100, e2, e1, c50, c20, c10, c5, c2, c1);}
    else if ((totale - 50) >= 0) {c50++; calcolaMonete(totale - 50, e2, e1, c50, c20, c10, c5, c2, c1);}
    else if ((totale - 20) >= 0) {c20++; calcolaMonete(totale - 20, e2, e1, c50, c20, c10, c5, c2, c1);}
    else if ((totale - 10) >= 0) {c10++; calcolaMonete(totale - 10, e2, e1, c50, c20, c10, c5, c2, c1);}
    else if ((totale - 5) >= 0) {c5++; calcolaMonete(totale - 5, e2, e1, c50, c20, c10, c5, c2, c1);}
    else if ((totale - 2) >= 0) {c2++; calcolaMonete(totale - 2, e2, e1, c50, c20, c10, c5, c2, c1);}
    else if ((totale - 1) >= 0) {c1++; calcolaMonete(totale - 1, e2, e1, c50, c20, c10, c5, c2, c1);}
  outputMonete(e2,  e1,  c50,  c20,  c10,  c5,  c2,  c1);
  return;
}

void calcolaMoneteModulo(int totale){
  int e2 = 0, e1 = 0, c50 = 0, c20 = 0, c10 = 0, c5 = 0, c2 = 0, c1 = 0;
  do{
    if ((totale % 200) == 0) {e2++; totale -= 200;}
    else if ((totale % 100) == 0) {e1++; totale -= 100;}
    else if ((totale % 50) == 0) {c50++; totale -= 50;}
    else if ((totale % 20) == 0) {c20++; totale -= 20;}
    else if ((totale % 10) == 0) {c10++; totale -= 10;}
    else if ((totale % 5) == 0) {c5++; totale -= 5;}
    else if ((totale % 2) == 0) {c2++; totale -= 2;}
    else if ((totale % 1) == 0) {c1++; totale -= 1;}
  } while (totale != 0);

  outputMonete(e2,  e1,  c50,  c20,  c10,  c5,  c2,  c1);
  return;
}

int main(){
  Scelta opzioneUtente;
  cout<<"Inserire totale: ";
  cin>>totale;
  int safeTotale = totale;  //preservo il valore totale per l'output finale
  do{
    cout<<"Usare il modulo? (y/n): ";
    cin >> opzioneUtente.input;
    switch (opzioneUtente.input){
      case 'y':{
        opzioneUtente.error = false;
        calcolaMoneteModulo(safeTotale);
        break;
      }
      case 'n':{
        opzioneUtente.error = false;
        int e2 = 0, e1 = 0, c50 = 0, c20 = 0, c10 = 0, c5 = 0, c2 = 0, c1 = 0;
        calcolaMonete(safeTotale, e2, e1, c50, c20, c10, c5, c2, c1);
        break;
      }
      default:{
        opzioneUtente.error = true;
        cout<<endl;
        break;
      }
    }
  } while (opzioneUtente.error);

  return 0;
}