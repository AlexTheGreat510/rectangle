# take cube info from user

cubeWidth = int(input("Enter cube width: "))
cubeHeight = int(input("Enter cube height: "))
cubeAtom = str(input("Enter cube atom: "))

# generate cube based on info

cubeRow = cubeAtom * cubeWidth
for i in range(cubeHeight): print(cubeRow)
