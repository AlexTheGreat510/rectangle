-- take user input of rectangle info

io.write("Enter rectangle width: ")
local rectangle_width = io.read()

io.write("Enter rectangle height: ")
local rectangle_height = io.read()

io.write("Enter rectangle atom: ")
local rectangle_atom = io.read()

-- generate rectangle row based on info

local rectangle_row = ""

for i=1, rectangle_width do
    rectangle_row = rectangle_row .. rectangle_atom
end

-- generate rectangle based on info

for i=1, rectangle_height do print(rectangle_row) end
