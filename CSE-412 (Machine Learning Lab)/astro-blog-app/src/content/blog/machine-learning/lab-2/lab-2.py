income = int(input())

def calcParcent(income, p):
    return income * p

def tax(prev, curr):
    print(prev + curr)
    return None

if income < 0:
    print("Wrong Input")
else:
    if income <= 10000:
        tax = calcParcent(10000, .05)
        print(tax)
    elif income <= 50000:
        prev = calcParcent(10000, .05)
        curr = (income - 10000) * .10
        tax(prev, curr)
    elif income <= 100000:
        prev = calcParcent(10000, .05) + calcParcent(40000, .10)
        curr = (income - 50000) * .20
        tax(prev, curr)
    else:
        prev = calcParcent(10000, .05) + calcParcent(40000, .10) + calcParcent(50000, .20)
        curr = (income - 100000) * .30
        tax(prev, curr)