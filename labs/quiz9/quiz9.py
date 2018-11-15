l=list(range(0,11))

cubed=list(map((lambda i: i**3),l))

print(cubed)


def fv(principal, rate, time):
    curr = principal * ((1 + rate) ** time)
    return curr

tuples =[]
for i in range(5,8):
    tuples.append( (i*1000, 1/i**2, i))

print(list(map(lambda t: fv(t[0],t[1],t[2]),tuples)))


tuples=[]
for i in range(1,101):
    tuples.append( (1,.05, i))

y=1
for r in list(map(lambda t: fv(t[0],t[1],t[2]),tuples)):
    print( str(y)+" Year = "+ str(r))
    y+=1


# 97-122
def getLowerCase(s):
    r=""
    for c in s:
        if(ord(c) >96 and ord(c)<123):
            r+=c
    return r

print(getLowerCase("This IS SomE TeXT"))
