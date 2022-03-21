#include <iostream>
#include <array>
using namespace std;

class Hotel {
  private:
    float netTotal, IVA, finalPrice;
  public: 
    array<float, 3> getTotals(){return {netTotal, IVA, finalPrice};}
    Hotel(unsigned short int smallRoomPrice, unsigned short int doubleRoomPrice, unsigned short int smallRooms, unsigned short int doubleRooms){
      netTotal = smallRoomPrice * smallRooms + doubleRoomPrice * doubleRooms;
      IVA = 0.22 * netTotal;
      finalPrice = netTotal + IVA;
    }
};

void outputHotel(array<float, 3> totals){
  cout<<"\nImponibile: "<<totals[0]
      <<"\nIVA: "<<totals[1]
      <<"\nCosto totale: "<<totals[2]<<endl;
  return;
}
int main(){//g++ -std=c++11 hotelC++11.cpp
  unsigned short int smallRoomPrice, doubleRoomPrice, smallRooms, doubleRooms;
  cout<<"Inserire il prezzo per la pulizia di una stanza singola, di doppia e il numero delle camere singole e doppie da calcolare: ";
  cin>>smallRoomPrice>>doubleRoomPrice>>smallRooms>>doubleRooms;
  Hotel hotel(smallRoomPrice, doubleRoomPrice, smallRooms, doubleRooms);
  outputHotel(hotel.getTotals());
  return 0;
}