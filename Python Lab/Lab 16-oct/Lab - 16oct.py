

#scope and life time

# def my_func():
#     x=10
#     print("Value inside function", x)
#
# x=20
# my_func()
# print(x)


def my_func():
    global x; x=10
    print("Value inside function", x)

x=20
print("Value outside function", x)
my_func()
print("Value outside function", x)

# Multiple return values


#keyword Argument
def greet(name,msg):
    print("Hello",name,msg)

greet("Bhola","Good morning")
greet("Bhola") #
greet() #

def greetwithDefault(name, msg = "Good Morning"):
    print("Hello",name,msg)