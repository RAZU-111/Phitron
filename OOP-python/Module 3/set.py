# list ----> []
# tuple---->()
# set------>{}

numbers=[10,50,100,30,20,80,70]

print(numbers)
num_set=set(numbers)
print(num_set)
num_set.add(60)

print(num_set)


A={1,3,5,7}
B={3,4,8,9}
print(A&B)
print(A|B)