price = 99
purchase = int(input("Enter the armount of packages you prucahse\nAmount: "))
if purchase < 10:
    print("your total is: $",price*purchase)
elif purchase >= 10 and purchase <= 19:
    print("Your you recieved a 10% discount ($",(price*purchase)*0.10,")\n Total: $", (price*purchase) - (price*purchase)*0.10)
elif purchase >= 20 and purchase <= 49:
    print("Your you recieved a 20% discount ($",(price*purchase)*0.20,")\n Total: $", (price*purchase) - (price*purchase)*0.20)
elif purchase >= 50 and purchase <= 99:
    print("Your you recieved a 30% discount ($",(price*purchase)*0.30,")\n Total: $", (price*purchase) - (price*purchase)*0.30)
elif purchase >= 100:
    print("Your you recieved a 40% discount ($",(price*purchase)*0.40,")\n Total: $", (price*purchase) - (price*purchase)*0.40)
else:
    print("Input out of bounds")
