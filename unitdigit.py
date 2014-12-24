power_cycle={0:0,1:1,2:4,3:4,4:2,5:2,6:1,7:4,8:4,9:2}
t=input()
for i in range(t):
	num=raw_input()
	nums = num.split()
	r=int(nums[0][-1])
	pc=power_cycle[r]
	if pc == 0 or pc ==1:
		print r
	else:
		b=int(nums[1])
		p = b%pc
		if p == 0:
			print r**(pc)
		else:
			print r**p

