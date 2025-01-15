n=eval(input("enter a list of numbers"))
for i in range(len(n)-1):
    for j in range(len(n)-1):
        if(n[j]>n[j+1]):
            n[j],n[j+1]=n[j+1],n[j]
print(n)
s=set(n)
for i in s:
    if(n.count(i)>1):
        print("The number",i,"has",n.count(i),"occurences")
print("largest number is ",max(n),"and smallest number is ",min(n))