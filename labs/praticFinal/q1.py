import math

def volume(r,h):
    return (math.pi * r**2*h)

print(volume(2,4))

cylinders = [(1,2),(2,4), (1,3)]
volume_of_cylinders= [volume(c[0],c[1]) for c in cylinders]
print(volume_of_cylinders)
