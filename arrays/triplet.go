// Find a triplet that sum to a given value
package main

import (
	"fmt"
	"runtime"
)

func main() {
	var m runtime.MemStats
	fmt.Println(runtime.NumCPU())

	runtime.ReadMemStats(&m)

	fmt.Println(m.Sys)
}
