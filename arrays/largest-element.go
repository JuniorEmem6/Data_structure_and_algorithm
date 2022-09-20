package main

import "fmt"

func main() {
	arr := []int{200, 10, 20, 4, 100, 108}

 largest_element(arr)
}

func largest_element(arr []int) {
	var max int = arr[0]

	for c, _ := range arr {

		if(max < arr[c] ){
			max = arr[c]
			continue
		}
	}
	fmt.Println(max)
}