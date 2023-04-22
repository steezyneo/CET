n = int(input("Enter the total number of elements: "))
arr = []
for i in range(n):
    ele = int(input(f"Enter element {i+1}: "))
    arr.append(ele)

print(arr)

arr.sort()

print(f"Sorted array {arr}")

if len(arr) < 2:
    print("There is no second largest element.")
else:
    print(f"The second largest element is {arr[-2]}.")
