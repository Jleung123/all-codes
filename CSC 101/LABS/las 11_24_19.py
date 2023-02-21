#functions_demo.py
def message():
    print("I am king Arthur,")
    print("king of britons.")
message()
#---------------------------------------------------------#
#two_functions_py
def main():
    print("I have a message fr you.")
    message()
    print("Goodbye")
def message():
    print("I am king Arthur,")
    print("king of britons.")
main()
#---------------------------------------------------------#
#acme_dryer.py
def main2():
    startup_message()
    input("Press Enter to see step 1.")
    step1()
    input("Press Enter to see step 2.")
    step2()
    input("Press Enter to see step 3.")
    step3()
    input("Press Enter to see step 4.")
    step4()
def startup_messgae():
    print("This program tells you how to")
    print("dissemble an ACME laundry dryer")
    print("There are 4 steps in the process.")
    print()
def step1():
    print("Step1; Unplug the dryer and")
    print("move it away from the wall.")
def step2():
    print("Step2: Remove the six screws")
    print("from the back of the dryer.")
def step3():
    print("Step1; Remove the back panel")
    print("from the dryer.")
def step4():
    print("Step1; Pull the top of the")
    print("dryer straight up.")
#---------------------------------------------------------#
#bad_local.py
def main3():
    #get_name()
    name = get_name()
    print("Hello", name)
def get_name():
    name = input("Enter you name: ")
main3();
#---------------------------------------------------------#
#birds.py
def main4():
    texas()
    california()
def texas():
    birds = 5000
    print("texas has", birds, "birds")
def california():
    birds = 8000
    print("california has", birds, "birds")
main4()
