#include <iostream>
using namespace std;

int main() {
  int amount;
  cout << "Please enter the amount" << endl;
  cin >> amount;

  int banknotes[] = {50, 20, 10, 5, 1};
  int change[] = {0,0,0,0,0};

  for(int i = 0; i <= 5; i++){

    while(amount >= banknotes[i] ){
      amount -= banknotes[i];
      change[i] += 1;
   }
  }

    for(int x = 0; x < 5; x++){
      cout << change[x] << " " << banknotes[x]<<endl;
    }
    
  }
  // for(int x = 0; amount > 0; x++)
  //   while(amount>0)
  // {
  //   for(int i = 0; i <= 5; i++){
  //     if((amount % banknotes[i] == 0) && (amount != 0)){
  //       amount -= banknotes[i];
  //       cout << banknotes[i] << ",";
  //     }
  //   }
  // } 
