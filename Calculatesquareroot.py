def NR(x):
    i = 0
    y = 0.0
    e = 1.0
    
    while(e>=1e-4):
        if(i == 0):
            y = x / 2.0;
        else:
            y = (y + x /y )/2.0;
        e = abs(y*y - x)
        print("Lap",i, "{:.8f}".format(y), "{:.8f}".format(e))
        i += 1
    return y,e
    
x = input()
print("Enter a real-valued number:", x)
y,e = NR(float(x))
print("The square-root of ", x, "{:.8f}".format(y))
print("The error is:", "{:.8f}".format(e))