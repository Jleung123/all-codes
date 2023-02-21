mass = int(input("Enter the mass of a object\Mass: "))
weight = mass* 9.8
if weight <100:
    print("The objects weight is too light")
else:
    if weight > 500:
        print("The objects weight is too heavy")
    else:
        if weight >= 100 and weight <= 500:
            print("The weight of the object is: ", weight, "newtons")
        else:
            print("input our of bounds")
