using System.Collections.Generic;
using System;

namespace Application
{
	public class Primes
	{
		public Primes ()
		{

		}

		public void printPrimes(List<int> primes){
			foreach (int i in primes) {
				Console.WriteLine (i);
			}

		}

		public bool isPrime(int n){
			bool isPrime = true;
			if (n != 1) {
				for (int i = 2; i < n; i++) {
					if (n % i == 0) {
						isPrime = false;
						break;
					}
				}
			} else {
				isPrime = false;
			}

			return isPrime;
		}

		public static int Main(string[] args){
			Primes primes = new Primes ();
			var primesList = new List<int>();

			int n;
			while (true) {
				Console.WriteLine ("Enter a number: ");
				string input = Console.ReadLine();
				n = int.Parse (input);
				if (n == 0) {
					primes.printPrimes (primesList);
					break;
				}

				if (primes.isPrime (n)) {
					primesList.Add (n);
				}
			}
			return 0;
		}
	}
}

