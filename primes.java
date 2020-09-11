class primes{
	public static boolean checkPrimes(int x){
		int facts = 0;
		for (int i = 1;i<x+1;i++){
			if (facts < 4 && x % i == 0)
				facts+=1;
		}
		if (facts < 3) return true;
		else return false;
	}
	public static void main(String args[]){
		int last = 100000;
		int tot_primes = 0;
		for (int i = 2; i < last; i++){
			if (checkPrimes(i))
				tot_primes += 1;
		}
		System.out.println("total no of primes till "+last+" is "+tot_primes);
	}
}
