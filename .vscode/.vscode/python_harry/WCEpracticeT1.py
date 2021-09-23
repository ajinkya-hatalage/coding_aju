'''
a=b=c="ai"
print(a,b,c)
----------------
a,b,c=3.4,2,"aju"
print(a,b,c)
'''

x=3.3
print(id(x))
y=3.3
print(id(y))
y=2
print(id(y))
print(x,"is of type",type(x))
a=1+2j
print(a,"is a complex no?")
print(isinstance(1+2j, complex))
a=True
print(type(a))
print('''aju is good boy
but he is not to much good
as you really think ''')
s='this is online life'
print(s)
print(s[0])
#tuple
a=(1,1.5,"aju")
print(a[1])
c=float(5)
print(int(4.567))
#if-else
num = 10

#Find product of all numbers present in a list

lst = [10, 20, 30, 40, 50]

product = 1
#iterating over the list
for aj in lst:
    #print(type(ele))
    product *= aj

print("Product is: {}".format(product))
index1 = 20
index2 = 50

print("Prime numbers between {0} and {1} are :".format(index1, index2))

for num in range(index1, index2+1):      #default step size is 1
    if num > 1:
        isDivisible = False;
        for index in range(2, num):
            if num % index == 0:
                isDivisible = True;
        if not isDivisible:        
            print(num);
    
