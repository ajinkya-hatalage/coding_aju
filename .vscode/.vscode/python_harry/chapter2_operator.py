#arithmatic operator(+,-,*,/,%)
a=3
b=4
print("the value of a+b",3+4)
print("the value of a-b",3-4)
print("the value of a*b",3*4)
print("the value of a/b",3/4)
print("_________________________________")
#assignment operator
a=34
a+=12
a-=12
a*=2
a/=34
print(a)
#comparision operator(returns boolean value /true false)
# (<,>,<=,>=,!=)
b=(4>7)
print(b)
# logical operator(and,or,not)
bool1=True
bool2=False
print("the value of bool1 and bool2 is",bool1 and bool2)
print("the value of bool1 or bool2 is",bool1 or bool2)
print("the value of not bool1   is", not bool1 )
print("---------------------------------")
'''
type():=used to find the type of data
-->type casting: <--
converting one data type into other type..
a number can converted into string or vice vvers if possible..ex"sg241"wgich is not possible

'''
a="3543"
a=int(a)
print(type(a))
print("___________________________")

# input():=this fun allows to user to take input from  keyboard as a string
a=input("enter your name:=")#take the value as string
a=int(a)  #covert a into integer (if possible)
print(type(a))
#chapter 2 over