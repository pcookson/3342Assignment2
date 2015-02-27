def prime(numInt)
	isPrime = true
	if numInt !=1 then
		for x in 2..numInt-1
			if numInt % x == 0 then
				isPrime = false
				break
			end
		end
	else
		isPrime = false
	end
	return isPrime	
end

def printPrimes(primes)
	puts "\nPrimes are: "
	primes.each do |i|
		puts i
	end
end

primes = Array.new
while true do
	
	puts "Enter integer"
	numString = gets
	numInt = numString.to_i
	if numInt == 0 then
		break
	end
	isPrime = prime(numInt)
	if isPrime == true then
		primes.push(numInt)
	end
end

printPrimes(primes)
	


