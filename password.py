n=input()
dic={}
for i in range(n):
	passwd = raw_input()
	dic[passwd] = 1
	try:
		if dic[passwd[::-1]] == 1:
			l=len(passwd)
			print l, passwd[l/2]
	except KeyError:
		continue
