# list1= [1,2,3,4]
#
# list2=list1 -----> what is drawback of this method to create copy of a list?
#
# list2=

list1= [1,2,3,4]
print(list1)

list2=list1

print(list2)

# this method a create copy of list internally does not create a copy of list1 but instead lits2 act as alias name for list1
# so this method is not good
# instead we can use list2=list1.copy()