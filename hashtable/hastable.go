package main

import "fmt"

type Hastable struct {
	table      [117]string
	numOfItems int
	tablesize  byte
}

func main() {
	var h Hastable

	h.setItem("name", "emem")
	h.setItem("fruits", "Mango")
	h.setItem("color", "blue")

	fmt.Println(h)

}

func hashingFunction(key string, tablesize byte) byte {
	var hash byte = 17

	for i := 0; i < len(key); i++ {
		hash = hash * 13 * key[i] % tablesize
	}

	return hash
}

func (h *Hastable) setItem(key string, value string) {
	h.tablesize = 117
	hash := hashingFunction(key, h.tablesize)
	fmt.Println(hash)
	if h.table[hash] != "" {
		fmt.Println("There is a value already")
		return
	}

	h.table[hash] = value
	h.numOfItems++

}

func (h *Hastable) getItem(key string) {
	hash := hashingFunction(key, h.tablesize)

	fmt.Println(hash)

	if h.table[hash] == "" {
		fmt.Println("No value with that key")
		return
	}

	fmt.Println(h.table[hash])
}
