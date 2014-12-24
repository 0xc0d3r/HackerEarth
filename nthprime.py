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
num = input()
count,i = 1,3
if num == count:
	print 2
while count != num:
	if isPrime(i) == 1:
		count += 1
	i+=2
print i-2
