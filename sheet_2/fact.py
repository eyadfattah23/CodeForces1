from math import factorial
len=int(input())
arr=[]

for i in range(len):
    score=int(input())
    arr.append(score)
for i in range(len):
    arr[i]=factorial(arr[i])
    
for j in range(len):
    print(arr[j])    