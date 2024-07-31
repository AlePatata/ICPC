n = int(input())
a = input()
a.split(' ')
m = int(input())
for k in range(0,m):
	inst = input()
	inst.split()
	if len(inst) == 3:
		lf = int(inst[0])
		rg = int(inst[1])
		minn = 10000000
		imin = -1
		for i in range(abs(lf-rg)):
			if a[i%n] < minn: imin = i%n
		print(imin)