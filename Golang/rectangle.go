package main

import "fmt"

/* function to be run by program */

func main() {

    /* default cube info */

    var cubeWidth int = 5
    var cubeHeight int = 5
    var cubeAtom string = "*"

    /* take user input for cube info */

    fmt.Print("Enter cube width: ")
    fmt.Scanln(&cubeWidth)

    fmt.Print("Enter cube height: ")
    fmt.Scanln(&cubeHeight)

    fmt.Print("Enter cube atom: ")
    fmt.Scanln(&cubeAtom)

    /* generate cube row based on info */

    var cubeRow string

    for i:=1; cubeWidth>=i; i++ {
        cubeRow += cubeAtom
    }

    /* generate cube based on info */

    for i:=1; cubeHeight>=i; i++ {
        fmt.Println(cubeRow)
    }
}
