
def bunny_ears(n):
    if(n==0):
        return n
    elif(n==1):
        return 2
    else :
        return 2+bunny_ears(n-1)

print(bunny_ears(6))

l= [(n,bunny_ears(n)) for n in range(100) if n%7==0]
print(l)
