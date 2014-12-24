def sqrt(n):
  """ Efficient sqrt Algorithm """
  x = n
  y = (x + n / x) / 2
  while y < x:
    x = y
    y = (x + n / x) / 2
  return x
def isPrime(num):
    """ Primality Test Algorithm """
    if num<=1:
        return 0
    if num==2:
        return 1
    if num%2 == 0:
        return 0
    sRoot = sqrt(num*1.0)
    i=3
    while(i<=sRoot):
        if(num%i==0):
            return 0
	i+=2
    return 1
def removePrimeASCII(s):
	mstr=""
	diff = 0
	for i in s:
		ip = isPrime(ord(i))
		if ip == 1:
			continue;
		else:
			mstr+=i
	if len(mstr) == 0:
		print "NULL"
	else:
		print mstr
t=input()
for i in range(0,t,1):
	s=raw_input()
	removePrimeASCII(s)
	
