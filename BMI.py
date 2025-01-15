x=float(input("enter the weight of the person in kilogram:  "))
y=float(input("enter the height in meteres:  "))
bmi=x/(y**2)
print(bmi)
if(bmi>30):
    print("obessed")
elif(bmi<18):
    print("underweight")
else:
    print("healthy")