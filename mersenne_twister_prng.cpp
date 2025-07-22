#include <iostream>
#include <random>
using namespace std;

int generate_prime(){

}

int generate_prng(){
  // generate a random number with mersenne
  mt19937 mt{};
  return mt();
}

bool miller_rabin_test(){
  // test if a number is prime
}


int main(){

  cout << generate_prng();
}

