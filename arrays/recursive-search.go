package main

import "fmt"

func main() {
	lang := []string{
		"Assembly",
		"C",
		"Golang",
		"Javascript",
		"Kotlin",
		"Python",
		"Swift",
	}

	var result string = recursiveBinarySearch(lang, "CA", 0, len(lang)-1)
	fmt.Println(result)
}

func recursiveBinarySearch(lang []string, value string, min int, max int) string {

	if min <= max {
		var mid int = (max + min) / 2
		fmt.Println(max, min, mid)

		if lang[mid] == value {
			// fmt.Println("Found")
			return fmt.Sprintf("%s found at index %v", value, mid)
		} else if lang[mid] > value {
			recursiveBinarySearch(lang, value, 0, mid-1)
		} else {
			recursiveBinarySearch(lang, value, mid+1, max)
		}
	}

	return "Not found"
}
