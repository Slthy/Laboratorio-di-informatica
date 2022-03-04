#include <iostream>
#include <array>
class Hotel {
  private:
    float netTotal, IVA, finalPrice;
  public: 
    std::array<float, 3> getTotals(){return {netTotal, IVA, finalPrice};}
    Hotel(unsigned short int smallRoomPrice, unsigned short int doubleRoomPrice, unsigned short int smallRooms, unsigned short int doubleRooms){
      netTotal = smallRoomPrice * smallRooms + doubleRoomPrice * doubleRooms;
      IVA = 0.22 * netTotal;
      finalPrice = netTotal + IVA;
    }
};
int main(){//g++ -std=c++11 main2.cpp
  unsigned short int smallRoomPrice, doubleRoomPrice, smallRooms, doubleRooms;
  std::cin>>smallRoomPrice>>doubleRoomPrice>>smallRooms>>doubleRooms;
  Hotel hotel(smallRoomPrice, doubleRoomPrice, smallRooms, doubleRooms);
  std::array<float, 3> totals = hotel.getTotals();
  std::cout<<totals[0]<<'\t'<<totals[1]<<'\t'<<totals[2]<<'\t'<<std::endl;
  return 0;
}