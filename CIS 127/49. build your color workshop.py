#Name:  Jeremy Leung
#Email: jeremy.leung59@myhunter.cuny.edu
#Date: November 9th, 2021
#This program will play a game of rock paper scissors between the user and the computer

import matplotlib.pyplot as plt #import libraries for plotting
import numpy as np #and for arrays (to hold images)
          
#function to get r,g,b values from user and set the numpy array to that color
def get_values(img):
    #initialize red, green, blue to 1 to enter while loop
    red, green, blue = 1, 1, 1

    #as long as user does not enter all 0's keep asking for new r,g,b values
    while not red == 0 or not green == 0 or not blue ==0:
        #get r,g,b values from user input
        red = float(input("How much do you want to change the red value by? "))
        green = float(input("How much do you want to change the green value by? "))
        blue = float(input("How much do you want to change the blue value by? "))

        #set the numpy array to the r,g,b value from user by checking
        #just the first pizel since all the pizels have the same color value
        #we only need to check just one pixel
        img[:,:,0], img[:,:,1] = img[0,0,0] + (red/255), img[0,0,1] + (green/255)
        img[:,:,2] = img[0,0,2] + (blue/255)

        #thresholds for the red value, if red value is less then 0 set color to 0
        #if red value if greater then 255 set color to 255
        if img[0,0,0] <= 0:
            img[:,:,0] = 0
        elif img[0,0,0] >= 1:
            img[:,:,0] = 1

        #thresholds for the green value, if green value is less then 0 set color to 0
        #if green value if greater then 255 set color to 255    
        if img[0,0,1] <= 0:
            img[:,:,1] = 0
        elif img[0,0,1] >= 1:
            img[:,:,1] = 1

        #thresholds for the blue value, if blue value is less then 0 set color to 0
        #if blue value if greater then 255 set color to 255
        if img[0,0,2] <= 0:
            img[:,:,2] = 0
        elif img[0,0,2] >= 1:
            img[:,:,2] = 1

        #print the current r,g,b values for the numpy array
        print("The current rgb values are: " + str(img[0,0,0]) \
              + "," + str(img[0,0,1]) + ", " + str(img[0,0,2]))
        
    #print ending message when user is done chaning the colors
    print("You're done! Congrats on the color, it looks beautiful!")
        
def main():
    #print intro message
    print("------------------------------------------", 
            "\nWelcome to the Color Maker!"
            "\n------------------------------------------",
            "\nPlease enter for each rbg color the value in which to increase/decrease them.",
            "\nIf all 3 values given are 0, the program will end and save the resulting image.")
    #get name of output file from user
    out = input("Enter outfile name: ")

    #create an numppy array, since: 10x10 with 3 channels for colors
    img = np.zeros((10,10,3))

    #set all the pixels to have a color value of 0
    img[:,:,0], img[:,:,1], img[:,:,2] = 0, 0, 0

    #call get_values funnction and pass the numpy array
    get_values(img)

    #save the image with the user output's desired name
    plt.imsave(out, img)
    
if __name__ == "__main__":
    main()
