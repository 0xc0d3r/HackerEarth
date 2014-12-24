def primes(n=50):
    sieve = [True] * n
    for i in xrange(3,int(n**0.5)+1,2):
        if sieve[i]:
            sieve[i*i::2*i]=[False]*((n-i*i-1)/(2*i)+1)
            print sieve
    return [2] + [i for i in xrange(3,n,2) if sieve[i]]
a=primes()
for i in xrange(input()):
	print a[input()-1]
	
