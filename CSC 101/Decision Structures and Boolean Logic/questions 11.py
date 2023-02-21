#get user input to get the number of books purchased and store in variable books
books = int(input("Enter the number of books you purchased this month\nNumber of books purchased: "))
# if the user enters less than 2 books they earn 0 points
if books <= 1:
    print("You have earned 0 points")
# if the user enters 2 or more, but less then 4 they earn 5 points
elif books >= 2 and books <= 3:
    print("You have earned 5 points")
# if the user enters 4 or more, but less then 6 they earn 15 points
elif books >= 4 and books <= 5:
    print("You have earned 15 points")
# if the user enters 6 or more, but less then 8 they earn 30 points
elif books >= 6 and books <= 7:
    print("You have earned 30 points")
# if the user enters 8 or more they earn 60 points
elif books >= 8:
    print("You have earned 60 points")
