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
t = input()
su=0
for i in range(0,t,1):
	s=input()
	e=input()
	for j in range(s,e+1,1):
		if j%2!=0 and isPrime(j)==1:
			su+=j
print su
