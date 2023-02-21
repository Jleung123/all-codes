days = int(input("Enter a number in the range of 1-7 representing the days of the week\nNumber: "))
if days == 1:
    print("You entered Monday")
else:
    if days == 2:
        print("You entered Tuesday")
    else:
        if days == 3:
            print("You entered Wednesday")
        else:
            if days == 4:
                print("You entered Thursday")
            else:
                if days == 5:
                    print("You entered Friday")
                else:
                    if days == 6:
                        print("You entered Saturday")
                    else:
                        if days == 7:
                            print("You entered Sunday")
                        else:
                            print("You entered a number outside of the range of 1-7")                    
