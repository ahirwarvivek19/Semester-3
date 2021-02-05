Python 3.8.5 (tags/v3.8.5:580fbb0, Jul 20 2020, 15:43:08) [MSC v.1926 32 bit (Intel)] on win32
Type "help", "copyright", "credits" or "license()" for more information.
>>> nums = {1,23,45,67}
>>> nums
{1, 67, 45, 23}
>>> nums[0]
Traceback (most recent call last):
  File "<pyshell#2>", line 1, in <module>
    nums[0]
TypeError: 'set' object is not subscriptable
>>> nums = [1,23,45,67]
>>> nums[0]
1
>>> nums[-1]
67
>>> nums[0:2}
SyntaxError: closing parenthesis '}' does not match opening parenthesis '['
>>> nums[0:2}
SyntaxError: closing parenthesis '}' does not match opening parenthesis '['
>>> nums[0:2]
[1, 23]
>>> nums[2:}
SyntaxError: closing parenthesis '}' does not match opening parenthesis '['
>>> nums[2:]
[45, 67]
>>> nums.append(50)
>>> nums
[1, 23, 45, 67, 50]
>>> nums.insert(2,30)
>>> nums
[1, 23, 30, 45, 67, 50]
>>> nums.extend([90,49,58])
>>> nums
[1, 23, 30, 45, 67, 50, 90, 49, 58]
>>> names = ['bhola','amit','anil','manoj']
>>> names
['bhola', 'amit', 'anil', 'manoj']
>>> names[0]
'bhola'
>>> students_result = ['bhola',12345,9.2]
>>> mixd_data = [nums,names]
>>> mixd_data
[[1, 23, 30, 45, 67, 50, 90, 49, 58], ['bhola', 'amit', 'anil', 'manoj']]
>>> mixd_data[0]
[1, 23, 30, 45, 67, 50, 90, 49, 58]
>>> mixd_data[1]
['bhola', 'amit', 'anil', 'manoj']
>>> nums
[1, 23, 30, 45, 67, 50, 90, 49, 58]
>>> nums.count(20)
0
>>> nums.count(23)
1
>>> help list
SyntaxError: invalid syntax
>>> help nums
SyntaxError: invalid syntax
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
 |  index(self, value, start=0, stop=2147483647, /)
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

>>> nums.remove(49)
>>> nums
[1, 23, 30, 45, 67, 50, 90, 58]
>>> nums.remove(49)
Traceback (most recent call last):
  File "<pyshell#33>", line 1, in <module>
    nums.remove(49)
ValueError: list.remove(x): x not in list
>>> nums.reverse()
>>> nums
[58, 90, 50, 67, 45, 30, 23, 1]
>>> nums.sort()
>>> nums
[1, 23, 30, 45, 50, 58, 67, 90]
>>> nums.sort(rev = False)
Traceback (most recent call last):
  File "<pyshell#38>", line 1, in <module>
    nums.sort(rev = False)
TypeError: 'rev' is an invalid keyword argument for sort()
>>> nums.sort(reverse = False)
>>> nums
[1, 23, 30, 45, 50, 58, 67, 90]
>>> nums.sort(reverse = True)
>>> nums
[90, 67, 58, 50, 45, 30, 23, 1]
>>> nums.index(1)
7
>>> nums.index(90)
0
>>> nums.append(90)
>>> nums.index(90)
0
>>> nums
[90, 67, 58, 50, 45, 30, 23, 1, 90]
>>> nums.remove(50)
>>> nums
[90, 67, 58, 45, 30, 23, 1, 90]
>>> nums.remove(90)
>>> nums
[67, 58, 45, 30, 23, 1, 90]
>>> nums2 = nums.copy()
>>> num3=num2
Traceback (most recent call last):
  File "<pyshell#53>", line 1, in <module>
    num3=num2
NameError: name 'num2' is not defined
>>> nums3=num
Traceback (most recent call last):
  File "<pyshell#54>", line 1, in <module>
    nums3=num
NameError: name 'num' is not defined
>>> nums3=nums
>>> nums.clear()
>>> nums
[]
>>> mixd_data
[[], ['bhola', 'amit', 'anil', 'manoj']]
>>> 