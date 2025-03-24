# take cube info from user

rectangle_width = int(input("Enter rectangle width: "))
rectangle_height = int(input("Enter rectangle height: "))
rectangle_atom = str(input("Enter rectangle atom: "))

# generate rectangle based on info

rectangle_row = rectangle_atom * rectangle_width
for i in range(rectangle_height): print(rectangle_row)
