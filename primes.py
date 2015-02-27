def prime(numInt):
	isPrime = True
	if numInt != 1:
		for x in range(2,numInt):
			if numInt % x == 0:
				isPrime = False
				break
	else:
		isPrime = False
	return isPrime	
	
def print_primes(primes):
		print "\nPrimes are: "
		for p in primes:
			print p
 

def main():
	primes = []
	while True:
		print "Enter a number: "
		numString = raw_input()
		numInt = long(numString)
		if numInt == 0:
			break
		isPrime = prime(numInt)
		if isPrime == True:
			primes.append(numInt)
			
	print_primes(primes)
	
	

if __name__ == '__main__':
	main()

