a=input("enter a string: ")
b=[]
for i in range(0,len(a)-1):
	if(a[i]==a[i+1] and a[i]==" "):
		continue
	else:
		b.append(a[i])
b.append(a[-1])
for i in b:
	print(i,end="")
