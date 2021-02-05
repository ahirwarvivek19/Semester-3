Python 3.8.6 (tags/v3.8.6:db45529, Sep 23 2020, 15:52:53) [MSC v.1927 64 bit (AMD64)] on win32
Type "help", "copyright", "credits" or "license()" for more information.
>>> fruits_list = ["apple","banana","cherry"]
>>> fruits_list
['apple', 'banana', 'cherry']
>>> fruits_list.extend(["orange", "kiwi", "melon", "mango"])
>>> fruits_list
['apple', 'banana', 'cherry', 'orange', 'kiwi', 'melon', 'mango']
>>> fruits_list.insert(2,"blackcurrent" )
>>> fruits_list
['apple', 'banana', 'blackcurrent', 'cherry', 'orange', 'kiwi', 'melon', 'mango']
>>> fruits_list.remove("banana")
>>> fruits_list
['apple', 'blackcurrent', 'cherry', 'orange', 'kiwi', 'melon', 'mango']
>>> fruits_list[1]
'blackcurrent'
>>> fruits[-1]
Traceback (most recent call last):
  File "<pyshell#9>", line 1, in <module>
    fruits[-1]
NameError: name 'fruits' is not defined
>>> fruits_list[-1]
'mango'
>>> fruits_list[2:]
['cherry', 'orange', 'kiwi', 'melon', 'mango']
>>> for i in fruits_list
SyntaxError: invalid syntax
>>> for i in fruits_list:
	print(i)
	;
	
SyntaxError: invalid syntax
>>> for i in fruits_list:
	print(i)

apple
blackcurrent
cherry
orange
kiwi
melon
mango
>>> help(list)
Help on class list in module builtins:

class list(object)
 |  list(iterable=(), /)
 |  
 |  Built-in mutable sequence.
 |  
 |  If no argument is given, the constructor creates a new empty list.
 |  The argument must be an iterable if specified.
 |  
 |  Methods defined here:
 |  
 |  __add__(self, value, /)
 |      Return self+value.
 |  
 |  __contains__(self, key, /)
 |      Return key in self.
 |  
 |  __delitem__(self, key, /)
 |      Delete self[key].
 |  
 |  __eq__(self, value, /)
 |      Return self==value.
 |  
 |  __ge__(self, value, /)
 |      Return self>=value.
 |  
 |  __getattribute__(self, name, /)
 |      Return getattr(self, name).
 |  
 |  __getitem__(...)
 |      x.__getitem__(y) <==> x[y]
 |  
 |  __gt__(self, value, /)
 |      Return self>value.
 |  
 |  __iadd__(self, value, /)
 |      Implement self+=value.
 |  
 |  __imul__(self, value, /)
 |      Implement self*=value.
 |  
 |  __init__(self, /, *args, **kwargs)
 |      Initialize self.  See help(type(self)) for accurate signature.
 |  
 |  __iter__(self, /)
 |      Implement iter(self).
 |  
 |  __le__(self, value, /)
 |      Return self<=value.
 |  
 |  __len__(self, /)
 |      Return len(self).
 |  
 |  __lt__(self, value, /)
 |      Return self<value.
 |  
 |  __mul__(self, value, /)
 |      Return self*value.
 |  
 |  __ne__(self, value, /)
 |      Return self!=value.
 |  
 |  __repr__(self, /)
 |      Return repr(self).
 |  
 |  __reversed__(self, /)
 |      Return a reverse iterator over the list.
 |  
 |  __rmul__(self, value, /)
 |      Return value*self.
 |  
 |  __setitem__(self, key, value, /)
 |      Set self[key] to value.
 |  
 |  __sizeof__(self, /)
 |      Return the size of the list in memory, in bytes.
 |  
 |  append(self, object, /)
 |      Append object to the end of the list.
 |  
 |  clear(self, /)
 |      Remove all items from list.
 |  
 |  copy(self, /)
 |      Return a shallow copy of the list.
 |  
 |  count(self, value, /)
 |      Return number of occurrences of value.
 |  
 |  extend(self, iterable, /)
 |      Extend list by appending elements from the iterable.
 |  
 |  index(self, value, start=0, stop=9223372036854775807, /)
 |      Return first index of value.
 |      
 |      Raises ValueError if the value is not present.
 |  
 |  insert(self, index, object, /)
 |      Insert object before index.
 |  
 |  pop(self, index=-1, /)
 |      Remove and return item at index (default last).
 |      
 |      Raises IndexError if list is empty or index is out of range.
 |  
 |  remove(self, value, /)
 |      Remove first occurrence of value.
 |      
 |      Raises ValueError if the value is not present.
 |  
 |  reverse(self, /)
 |      Reverse *IN PLACE*.
 |  
 |  sort(self, /, *, key=None, reverse=False)
 |      Sort the list in ascending order and return None.
 |      
 |      The sort is in-place (i.e. the list itself is modified) and stable (i.e. the
 |      order of two equal elements is maintained).
 |      
 |      If a key function is given, apply it once to each list item and sort them,
 |      ascending or descending, according to their function values.
 |      
 |      The reverse flag can be set to sort in descending order.
 |  
 |  ----------------------------------------------------------------------
 |  Static methods defined here:
 |  
 |  __new__(*args, **kwargs) from builtins.type
 |      Create and return a new object.  See help(type) for accurate signature.
 |  
 |  ----------------------------------------------------------------------
 |  Data and other attributes defined here:
 |  
 |  __hash__ = None

>>> if("custard apple" in fruits_list):
  print("custard apple Found")
else:
  print("custard apple Not found")

custard apple Not found
>>> print("Size = ",fruits_list.__len__())
Size =  7
>>> print(fruits_list)
fruits_list.pop()
print(fruits_list)
fruits_list.pop(3)
print(fruits_list)
SyntaxError: multiple statements found while compiling a single statement
>>> fruits_list.pop()
'mango'
>>> fruits_list.pop(3)
'orange'
>>> 
KeyboardInterrupt
>>> fruits_list
['apple', 'blackcurrent', 'cherry', 'kiwi', 'melon']
>>> new_fruits_list = fruits_list.copy()
print(new_fruits_list)
old_fruits_list = fruits_list
print(old_fruits_list)
SyntaxError: multiple statements found while compiling a single statement
>>> new_fruits_list = fruits_list.copy()
>>> old_fruits_list = fruits_list
>>> fruit_list
Traceback (most recent call last):
  File "<pyshell#29>", line 1, in <module>
    fruit_list
NameError: name 'fruit_list' is not defined
>>> fruits_list
['apple', 'blackcurrent', 'cherry', 'kiwi', 'melon']
>>> del fruits_list
>>> fruits_list
Traceback (most recent call last):
  File "<pyshell#32>", line 1, in <module>
    fruits_list
NameError: name 'fruits_list' is not defined
>>> fruits_list
Traceback (most recent call last):
  File "<pyshell#33>", line 1, in <module>
    fruits_list
NameError: name 'fruits_list' is not defined
>>> old_fruits_list = list(fruits_list)
Traceback (most recent call last):
  File "<pyshell#34>", line 1, in <module>
    old_fruits_list = list(fruits_list)
NameError: name 'fruits_list' is not defined
>>> old_fruits_list = list(new_fruits_list)
>>> old_fruits_list
['apple', 'blackcurrent', 'cherry', 'kiwi', 'melon']
>>> 