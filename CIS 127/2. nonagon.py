#Name:  Jeremy Leung
#Email: jeremy.leung59@myhunter.cuny.edu
#Date: August 31, 2021
#This program will draw a nonagon

import turtle #import turtle and name is drawer
drawer = turtle.Turtle()

#for loop to draw each side of the nonagon
for I in range (9):
    drawer.forward(100)
    drawer.left(360/9)

