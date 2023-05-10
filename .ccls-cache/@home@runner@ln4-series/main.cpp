#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {


  double count = 0;
  int n;
  cout << "enter number of intervals:";
  cin >> n;

  for (int i=1;i<=n;i++){

    count += (pow(-1,i+1)*pow(1,i))/i;
    
  }
  cout<<  setprecision(10)<< 2*count<<endl;
  double real_value = 1.386294;
  cout<< real_value<<endl;
  
  double error = ((2*count) - real_value)/(2*count);
  cout << error;
  
  
}