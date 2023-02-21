num = int(input("Enter the number of people attending the hotdog cookout\nAmount of poeple atteneding: "))
amount = int(input("Enter the the number of hotdogs given to each person\nNumber of hotdogs each person will be given: "))
hotdogs = 10
buns = 8
totalHotDogs = (num*amount)/hotdogs
totalBuns = (num*ammount)/buns
print("The minimum number of packages of hotdogs requried: ",totalHotDogs)
print("The minimum number of packages of hotdogs buns requried: ",totalBuns)
if hotdogs*buns <= num*amount:
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
