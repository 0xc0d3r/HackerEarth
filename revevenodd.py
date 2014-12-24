def revEvenOdd(num):
	arr=["EVEN","ODD"]
	print arr[int(num[0]) & 1]
t=input()
for i in range(t):
	num = raw_input()
	revEvenOdd(num)
