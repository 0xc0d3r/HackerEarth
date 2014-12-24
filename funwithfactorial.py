def Factorial(num):
	if num == 0 or num == 1:
		return 1
	else:
		return num*Factorial(num-1)
t=input()
for i in range(t):
	n=input()
	if n > 24:
		print "00000"
	else:	
		a=Factorial(n)
		print str(a%100000).zfill(5)
