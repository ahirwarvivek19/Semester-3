# 1) write a program to enter name, branch , section and print them as below.
#
# Sample input -
#
# What is your name ?  Bhola
# What is Branch  ?  CSE
# What is your section ? section 1
#
# Sample output -
#
# Hello Bhola.
# Welcome to CSE department.
# Have you make any new friends in section 1 ?

# print("What is your name ?")
name = input("What is your name ? \n")
# print("What is your branch")
branch = input("What is your branch ? \n")
# print("What is your section ? ")
sec = int(input("What is your section ? \n"))

print()
print("Hello "+name+".")
print("Welcome to "+branch+" department.")
print("Have you made any new friends in section "+str(sec))
