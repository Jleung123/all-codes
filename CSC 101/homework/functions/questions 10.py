# main function get the feet from user input
# and passes the var feet to the funtion feet_to_inches
def main():
    feet = float(input("Enter an distance in feet to get it converted into inches\nFeet: "))
    inches = feet_to_inches(feet)
    print(str(feet) + " Feet = "+ str(inches)+ " Inches")
# feet_to_inches function to accept the variable feet as a argument
# and caculates the inches by mutiplying by 12
# use the round fucntion to round inches to the nearest 2 decimals places
# and returning the total to the variable inches in the main function
def feet_to_inches(feet):
    inches = feet * 12
    inches = round(inches, 2)
    return inches
# calls the main function
main()
