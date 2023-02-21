color = input("Enter the name of a primary color\nPrimary color: ")
color2 = input("Enter the name of a second primary color\nSecond primary color: ")
if color == 'red' and color2 == 'blue':
    print(color," and", color2," create purple")
else:
    if color == 'blue' and color2 == 'red':
        print(color," and", color2," create blue")
    else:
        if color == 'yellow' and color2 == 'red':
            print(color," and", color2," create oragne")
        else:
            if color == 'red' and color2 == 'yellow':
                print(color," and", color2," create oragne")
            else:
                if color == 'yellow' and color2 == 'blue':
                    print(color," and", color2," create green")
                else:
                    if color == 'blue' and color2 == 'yellow':
                        print(color," and", color2," create green")
                    else:
                        print("input our of bounds")
