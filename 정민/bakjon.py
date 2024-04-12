def prime_factors(n):
    b=[]
    a=2
    while n>1:
        if (n%a==0):
            b.append(a)
            n//=a
        else:
            a+=1
    return b

a=int(input())
b=prime_factors(a)
for i in range(len(b)):
    print(b[i])
