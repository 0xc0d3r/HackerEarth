def factorial(n):
	if n==0 or n==1 :
		return 1
	else:
		return n*factorial(n-1)
		
t = input()
for i in range(0,t,1):
	n = input()
	print factorial(n)
