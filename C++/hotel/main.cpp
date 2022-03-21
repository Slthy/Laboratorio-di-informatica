#include <iostream>
#include <vector>
using namespace std;

class Hotel {
  private:
    unsigned short int smallRoomPrice;
    unsigned short int doubleRoomPrice;
    unsigned short int smallRooms;
    unsigned short int doubleRooms;
  
  public: 
    vector<float> getTotals(){
      vector<float> totals;
      totals.push_back(smallRoomPrice * smallRooms + doubleRoomPrice * doubleRooms); //netTotal
      totals.push_back(0.22 * totals[0]);  //iva
      totals.push_back(totals[0] + totals[1]);  //finalPrice
      return totals;
    }
    Hotel(unsigned short int sPrice, unsigned short int dPrice, unsigned short int smalls, unsigned short int doubles){
      smallRoomPrice = sPrice;
      doubleRoomPrice = dPrice;
      smallRooms = smalls;
      doubleRooms = doubles;
    }
};

void outputHotel(vector<float> totals){
  cout<<"\nImponibile: "<<totals[0]
      <<"\nIVA: "<<totals[1]
      <<"\nCosto totale: "<<totals[2]<<endl;
  return;
}

int main(){
  unsigned short int sPrice, dPrice, smalls, doubles;
  cout<<"Inserire il prezzo per la pulizia di una stanza singola, di doppia e il numero delle camere singole e doppie da calcolare: ";
  cin>>sPrice>>dPrice>>smalls>>doubles;
  Hotel hotel(sPrice, dPrice, smalls, doubles);
  outputHotel(hotel.getTotals());

  return 0;
}
