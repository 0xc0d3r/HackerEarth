def coinGroup(n):
	fact=[]
	d=2
	while n>1:
		if n%d ==0:
			fact.append(d)
			n/=d;
		else:
			d+=1
	return fact
t=input()
for i in range(0,t,1):
	nf={}
	n=input()
	fact= coinGroup(n)
	num_fact=1
	for i in range(0,len(fact),1):
		if fact[i] in nf.keys():
			nf[fact[i]] += 1
		else:
			nf[fact[i]] = 1
	print nf
	val = nf.values()
	for i in range(0,len(val),1):
		num_fact *= (val[i]+1)
	print num_fact
