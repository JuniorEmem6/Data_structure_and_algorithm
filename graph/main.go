package main

import "fmt"

func main() {
	adjList := make(map[string][]string)

	joinClass("Bayo", adjList)
	joinClass("Kunle", adjList)
	joinClass("Esther", adjList)
	joinClass("Amaka", adjList)
	joinClass("Bayo", adjList)

	BreadthFirstSearch("Bayo", adjList)

	// makeFriend("Kunle", "Esther", adjList)

	// joinClass("Ahmed", adjList)
	// makeFriend("Esther", "Bayo", adjList)

	// makeFriend("Bayo", "Kunle", adjList)

	// makeFriend("Amaka", "Ahmed", adjList)

	// unFriend("Kunle", "Esther", adjList)

}

func joinClass(user string, class map[string][]string) {
	var friends []string

	_, ok := class[user]

	if !ok {
		class[user] = friends
		fmt.Printf("%s just joined the class and have no friends yet\n", user)
		return

	}

	fmt.Printf("%s already a student\n", user)
}

func makeFriend(user1 string, user2 string, class map[string][]string) {
	_, ok := class[user1]
	_, ok1 := class[user2]

	fmt.Println(class)

	if ok && ok1 {
		class[user1] = append(class[user1], user2)
		class[user2] = append(class[user2], user1)

		fmt.Printf("%s and %s are now frineds\n", user1, user2)

	} else {
		fmt.Println("You have to join class to make friends")
	}

	fmt.Println(class)
}

func unFriend(user1 string, user2 string, class map[string][]string) {
	us1, ok := class[user1]
	us2, ok1 := class[user2]

	if ok && ok1 {
		for index, user := range us1 {
			if user == user2 {
				us1 = append(us1[:index], us1[index+1:]...)
			}
		}

		for index, user := range us2 {
			if user == user1 {
				us2 = append(us2[:index], us2[index+1:]...)

			}
		}
		fmt.Printf("%s and %s no longer friends\n", user1, user2)
	}

	fmt.Println(class)

}

func BreadthFirstSearch(start string, class map[string][]string) {
	var queue []string
	visited := make(map[string]bool)
	var student []string

	queue = append(queue, start)
	visited[start] = true

	var node string = queue[0]
	edges, ok := class[node]

	if ok && visited[node] != true {
		queue = append(queue, edges...)
		student = append(student, node)
		visited[node] = true
	}

	fmt.Println(student)

}
