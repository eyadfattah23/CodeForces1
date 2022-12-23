t = int(input())
for k in range(t):
    bin = []

    n = int(input())

    while n!=0:
        num = n%2
        bin.append(num)
        n=int(n/2)

    bin.reverse()
    bin = [x for x in bin if x != 0]
    conv = 1
    dec=0
    for i in range(len(bin)):

        dec += bin[i] * conv
        conv=conv*2
    
    print(dec)    
    
