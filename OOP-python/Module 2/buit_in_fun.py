# from function import fun
# result = fun(10,3)
# print(result)


# highest = max([10,50,100,30,20])
# smallest=min([10,50,100,30,20])

# count = len([20,30,40])


# print(highest)
# print(smallest)
# print(count)

numbers=[10,50,100,30,20]

print(numbers[:])

# print(numbers [:-1])
# print(numbers [1:5])
# print(numbers [1:5:2])

numbers.append(10)
print(numbers[:])

numbers.pop()
print(numbers)

if 20 in numbers:
    index = numbers.index(20)
    print(index)
numbers.reverse()
print(numbers)

numbers.sort()
print(numbers[:])

numbers =[7,8,5,4,3,2,4]
print(numbers[::-1])

numbers =[22,19,19,14,33]
numbers.sort()
print(numbers)
    
