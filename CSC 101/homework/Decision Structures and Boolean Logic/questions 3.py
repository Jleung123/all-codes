age = int(input("Enter a the age of a person\nAge: "))
if age >=0 and age <=1:
    print("He or she is and infant")
else:
    if age >=2 and age <=12:
        print("He or she is a child")
    else:
        if age >=13 and age <=19:
            print("He or she is a teenager")
        else:
            if age >=20:
                print("He or she is a adult")
            else:
                print("input our of bounds")
