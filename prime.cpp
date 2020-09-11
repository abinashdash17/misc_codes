#include<iostream>
bool checkPrime(int x){
	int fact=0;
	for(int i = 1 ; i < x+1;i++){
		if(fact<4 && x%i == 0)
			fact+=1;
	}
	if (fact<3) return true;
	else return false;
}
int main(){
	int last = 100000;
	int tot_primes = 0;
	for(int i = 2 ;i < last ; i++){
		if (checkPrime(i))
			tot_primes+=1;
	}
	std::cout<<"total no of primes till "<<last<<" is "<<tot_primes<<std::endl;
	return 0;
}
