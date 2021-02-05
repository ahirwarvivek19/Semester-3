"""

create a list of fruits_list "apple", "banana", "cherry"

add these items to fruits_list - "orange", "kiwi", "melon", "mango"

add item "blackcurrent" in between banana and cherry.

Remove banana from fruits_list

Print the second and last  item of the list:

which element will be printed with list_name[-1] ?

returns the items from "cherry" and to the end of list:

print all the fruits_name using for loop


Check if Item Exists or not  - like "custard apple" is present or not ?

print total numbers of items or fruits in the list.

remove the items from the list - (a) last item (b) item at specific index

copy the fruits_list to new_fruits_list using copy() method
copy the fruits_list to old_fruits_list using list() method

delete the fruits_list completely using del command

"""

fruits_list = ["apple","banana","cherry"]
print(fruits_list)
# ['apple', 'banana', 'cherry']
fruits_list.extend(["orange", "kiwi", "melon", "mango"])
print(fruits_list)
# ['apple', 'banana', 'cherry', 'orange', 'kiwi', 'melon', 'mango']
fruits_list.insert(2,"blackcurrent" )
print(fruits_list)
# ['apple', 'banana', 'blackcurrent', 'cherry', 'orange', 'kiwi', 'melon', 'mango']
fruits_list.remove("banana")
print(fruits_list)
# ['apple', 'blackcurrent', 'cherry', 'orange', 'kiwi', 'melon', 'mango']
print(fruits_list[1])
# 'blackcurrent'
print(fruits_list[-1])
# 'mango'
print(fruits_list[2:])
# ['cherry', 'orange', 'kiwi', 'melon', 'mango']

print("\n")
for i in fruits_list:
	print(i)
print()

# Check if Item Exists or not  - like "custard apple" is present or not ?
if("custard apple" in fruits_list):
  print("custard apple Found")
else:
  print("custard apple Not found")
print()

# print total numbers of items or fruits in the list.
print("Size = ",fruits_list.__len__())

print()

# remove the items from the list - (a) last item (b) item at specific index
print(fruits_list)
fruits_list.pop()
print(fruits_list)
fruits_list.pop(3)
print(fruits_list)
print()
# copy the fruits_list to new_fruits_list using copy() method
# copy the fruits_list to old_fruits_list using list() method
new_fruits_list = fruits_list.copy()
print(new_fruits_list)
old_fruits_list = list(fruits_list)
print(old_fruits_list)
print()
# delete the fruits_list completely using del command
del fruits_list
