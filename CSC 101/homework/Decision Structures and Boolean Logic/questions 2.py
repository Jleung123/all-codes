length1 = float(input("Enter a the length of rectange 1\nLength: "))
width1 = float(input("Enter a the width of rectange 1\nWidth: "))
length2 = float(input("Enter a the length of rectange 2\nLength: "))
width2 = float(input("Enter a the width of rectange 2\nWidth: "))
rect1 = length1*width1
rect2 = length2*width2
if rect1 > rect2:
    print("The area of rectangle 1 is greater then rectange 2\n", rect1, "-------------------", rect2)
else:
    if rect1 < rect2:
        print("The area of rectangle 2 is greater then rectange 1\n", rect2, "-------------------", rect1)
    else:
        if rect1 == rect2:
            print("The area of rectangle 1 is equal to rectange 2\n", rect1, "-------------------", rect2)            
