package main

import "fmt"

/* function to be run by program */

func main() {

    /* default rectangle info */

    var rectangleWidth int = 5
    var rectangleHeight int = 5
    var rectangleAtom string = "*"

    /* take user input for rectangle info */

    fmt.Print("Enter rectangle width: ")
    fmt.Scanln(&rectangleWidth)

    fmt.Print("Enter rectangle height: ")
    fmt.Scanln(&rectangleHeight)

    fmt.Print("Enter rectangle atom: ")
    fmt.Scanln(&rectangleAtom)

    /* generate rectangle row based on info */

    var rectangleRow string

    for i:=1; rectangleWidth>=i; i++ {
        rectangleRow += rectangleAtom
    }

    /* generate rectangle based on info */

    for i:=1; rectangleHeight>=i; i++ {
        fmt.Println(rectangleRow)
    }
}
