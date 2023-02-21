print("This program displays a list of numbers")
print("(starting at 1) and their squares.")
end = int(input("How high should I go: "))
print("Number\tSquare")
print("--------------")
for number in range( 1, end + 1):
    square = number ** 2
    print(number, "\t", square)
#-------------------------------------------------------------------------------------------#
print("This program displays a list of numbers")
print("and their squares.")
start = int((input("Enter the starting number: "))
end = int(input("How high should I go: "))
print("Number\tSquare")
print("--------------")
for number in range(start, end + 1):
    square = number ** 2
    print(number, "\t", square)
#-------------------------------------------------------------------------------------------#
score = int(input("Enter a test score: "))
while score < 0 or score > 100:
    print("Error: The score can not be negative")
    print("or greater than 100")
    score = int(input("Enter the correct score: "))
#-------------------------------------------------------------------------------------------#
MAX = 5
total = 0.0
print("This program calculates the sum of")
print(MAX, "numbers you will enter.")
for counter in range(MAX):
    numbers = int(input("enter a number: "))
    total = total + numbers
print("The total is", total)
#-------------------------------------------------------------------------------------------#
MARK_UP = 2.5
another = 'y'
while another == 'y' or another == 'Y':
    wholesale = float(input("Enter the correct wholesale cost: "))
    retail = wholesale * MARK_UP
    print("Retail price: #", format(retail, "2f"), sep="")
    another = input("Do you have another item? (Enter Y for yes): ")
#-------------------------------------------------------------------------------------------#
num_students = int(input("how many students do you have? "))
num_test_scores = int(input("How many test scores per student? "))
for student in rant(num_students):
    total = 0.0
    print("Student number", student +1)
    
