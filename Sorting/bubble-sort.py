arr1 = []
arr1 = eval(input("Enter a list(Use square brackets):- "))
n = len(arr1)
for i in range(n-1):
    for j in range(n-i-1):
        arr1[j],arr1[j+1] = arr1[j+1],arr1[j]

print(arr1)