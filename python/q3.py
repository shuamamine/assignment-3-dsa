n=int(input("Enter the limit:"))
a=[]
ar=[]
for i in range(0,n):
    l=[]
    for j in range(0,n):
        num=int(input("Enter the elements:"))
        l.append(num)
    arr.append(l)
z=0
for i in range(0,n):
    for j in range(0,n):
        print(a[i][j]," ",end="")
    print("\n")
for i in range(0,n):
    l=[]
    for j in range(0,n):
        l.append(a[(n-1)-j][i])
    ar.append(l)
print("Rotated Matrix:")
for i in range(0,n):
    for j in range(0,n):
        print(ar[i][j]," ",end="")
    print("\n")
