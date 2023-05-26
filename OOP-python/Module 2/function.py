def fun(x,y):
    sum = x+y
    sub =x-y
    mul=x*y
    div=x/y
    rem=x%y
    return sum,sub,mul,div,rem

result = fun(10,3)
print(result)

def friend(*argv):
    for arg in argv:
        print(arg)

friend('roman','shanto','mrinal','Apu')


def info(first,last,**kwarg):
    name=f'{first}{last}'
    print(kwarg['title'])
    return name
name = info(first='Taher',last=' Ali',title='hujur',kwarg='shaik')

print(name)