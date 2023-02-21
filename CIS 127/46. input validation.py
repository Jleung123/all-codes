#Name:  Jeremy Leung
#Email: jeremy.leung59@myhunter.cuny.edu
#Date: November 9th, 2021
#This program will tell you if you entered a perfect square with input validation

import math

def is_square(positive_int):
    if positive_int < 0:
        return False
    root = math.sqrt(positive_int)
    return positive_int == int(root + 0.5) ** 2

def perfectSquareChecker(num):
    if not (is_square(num)):
        print("Hey, this number isn't even! Try again next time.")
        return

    print("This number is a perfect square, it is the product of:", math.sqrt(num), "squared.")

def main():
    """
    You are provided the above two functions, your job now is to take
    user input and validate it. In other words, take integer input from
    the user, and make sure that it is a perfect square. If it's not,
    you need to keep asking the user for a perfect square until they
    enter one.
    Hint, you should use a while loop to validate input!
    Another hint, you are provided the function (is_square) which will
    check to see if a positive integer is a perfect square or not!
    """
    #get user input as an int
    num = int(input("Enter a square integer; "))

    #input validation to make sure the user enters a positive number and a perfect square
    while not is_square(num):
        num = int(input("That is not a perfect square. Try again: "))

    #call function perfectSquareChecker to print if the number is a square or not        
    perfectSquareChecker(num)

if __name__ == "__main__":
    main()
