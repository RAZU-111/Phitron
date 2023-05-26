# def sum(x,y):
#     return x+y
# res = sum(22,18)
# print(res)

# add = lambda x,y : x+y
# sum = add(16,14)
# print(sum)
# double = lambda x : x*x
# numbers=[10,50,100,30,20]
# double_num = map(double,numbers)
# print(list(double_num))

actors = [
    {'name':'sabana','age':60},
    {'name':'sabnoor','age':35},
    {'name':'sabila noor','age':31},
    {'name':'sabanam faria','age':30},
    {'name':'sadia ayman','age':26}
]
juniors = filter(lambda actors:actors['age']<=30,actors)
print(list(juniors))

