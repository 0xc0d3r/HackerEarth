for t in range(input()):
	inp = map(int,raw_input().split())
	k = map(int,raw_input().split())
	l = range(1,inp[0]+1)
	for i in range(len(k)):
		del l[l.index(k[i])]
	print -1 if inp[2]>len(l) else l[inp[2]-1]
