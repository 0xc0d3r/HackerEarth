for t in range(input()):
	a=raw_input()
	b=raw_input()
	print ''.join(map(str,[ord(a[i])^ord(b[i]) for i in range(len(a))]))
