arr1 = []
n = len(arr1)
for i in range(n):
    value = arr1[i]
    j = i-1
    while (j>=0 and value<arr1[j]):
        arr1[j+1] = arr1[j]
        j-=1