n = int(input("n = "))
s = str(input("s = "))
sum = 0
for i in range(0,n):
	if (chr(s[i]) % 2 == 0):
		sum += i+1
	
print(sum)