

INT_MIN = -100000000



def maxEvenSum(arr, n):
	
	
	pos_sum = 0
	for i in range(n):
		if (arr[i] > 0):
			pos_sum += arr[i]

	
	if (pos_sum % 2 == 0):
		return pos_sum

	
	
	
	ans = INT_MIN
	for i in range(n):
		if (arr[i] % 2 != 0):
			if (arr[i] > 0):
				ans = max(ans, pos_sum - arr[i])
			else:
				ans = max(ans, pos_sum + arr[i])
	return ans

len = int(input())
arr=[]
for i in range(len):
	a = int(input())
	arr.append(a)
print(maxEvenSum(arr, len))


