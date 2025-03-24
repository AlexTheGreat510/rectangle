-- take user input of cube info

io.write("Enter cube width: ")
local cube_width = io.read()

io.write("Enter cube height: ")
local cube_height = io.read()

io.write("Enter cube atom: ")
local cube_atom = io.read()

-- generate cube row based on info

local cube_row = ""

for i=1, cube_width do
    cube_row = cube_row .. cube_atom
end

-- generate cube based on info

for i=1, cube_height do print(cube_row) end
