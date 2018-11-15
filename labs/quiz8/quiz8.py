def validate(min,max, msg):
    error= True
    while(error==True):
        try:
            uMin= int(input("what is the min Celsius value?"))
            uMax= int( input("what is the max Celsius value?"))
            if(uMin<min or uMax>max):
                raise ValueError()
            else:
                f= {}
                for i in range(uMin,uMax+1):
                    f[i]=(convert(i))
                print(int(len(f)**.5)+1)
                printF(f)
                error=False
        except ValueError:
            print("invalid input. please enter the "+ msg+ ", from the rage of"+ str(min)+" to" +str(max))

def convert(val):
    return float(format(val*9.0/5.0 + 32, '.2f'))

def printF(f):
    for k in f:
        print(str(k) +"C is " + str(f[k]) + " F")
        

validate(-51,106,"correct value")

