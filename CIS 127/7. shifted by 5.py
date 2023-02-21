#Name:  Jeremy Leung
#Email: jeremy.leung59@myhunter.cuny.edu
#Date: September 7, 2021
#This program shift each character in a string by 5 using the ASC table

#get user input and assign to the varrible user
user = input("Enter a message: ")

#initialize a variable to hold the modified version of the string
modString = ""

#for loop to get the ord value of the current letter, add 5 to it
#and print the char value of the modified ord value
for i in range(len(user)):
    temp = ord(user[i])
    temp = temp + 5
    modString = modString + chr(temp)

#Print the modded string
for i in range(len(user)):
    print(user[i], "shifted by 5 characters is: ", modString[i])
