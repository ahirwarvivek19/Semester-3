# list1 = ["a", "b" , "c"]
# list2 = [1, 2, 3]
#
# Append the list2 at the end of list1 using append() and for loop.
#
# Append the list2 at the end of list1 using extend() method

list1 = ["a", "b", "c"]
list2 = [1, 2, 3]

print(list1)
print(list2)
print()
# Append the list2 at the end of list1 using append() and for loop.
for i in list2:
    list1.append(i)

print(list1)
print()

# Append the list2 at the end of list1 using extend() method
list1 = ["a", "b", "c"]
list2 = [1, 2, 3]
list1.extend(list2)
print(list1)
