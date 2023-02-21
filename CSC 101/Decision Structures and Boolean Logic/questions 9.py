pocket = int(input("Enter a pocket number in the range of 1 - 36\nPocket Number: "))
if pocket >= 1 and pocket <=10:
    if pocket%2==0:
        print("This pocket is", pocket ,"black")
    else:
        print("this pocket is", pocket ,"red")
elif pocket >= 11 and pocket <=18:
    if pocket%2==0:
        print("This pocket is", pocket ,"red")
    else:
        print("this pocket is", pocket ,"black")
elif pocket >= 19 and pocket <=28:
    if pocket%2==0:
        print("This pocket is", pocket ,"black")
    else:
        print("this pocket is", pocket ,"red")
elif pocket >= 29 and pocket <= 36:
    if pocket%2==0:
        print("This pocket is", pocket ,"red")
    else:
        print("this pocket is", pocket, "black")
else:
    print("Input out of bounds")
