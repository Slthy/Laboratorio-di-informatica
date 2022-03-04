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

int main(){
  unsigned short int sPrice, dPrice, smalls, doubles;
  cin>>sPrice>>dPrice>>smalls>>doubles;
  Hotel hotel(sPrice, dPrice, smalls, doubles);
  vector<float> totals = hotel.getTotals();
  cout<<totals[0]<<'\t'<<totals[1]<<'\t'<<totals[2]<<'\t'<<endl;

  return 0;
}
