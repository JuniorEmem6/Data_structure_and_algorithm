const number = [3, 7, 1, 2, 8, 4, 5];


const find_sum_of_three = (array, value) => {
    for (let index = 0; index < array.length; index++) {
        const element = array[index];

        for (let j = 1; j < array.length; j++) {
            const element1 = array[j];

            for (let k = 2; k < array.length; k++) {
                const element2 = array[k];

                if ((element + element1 + element2) == value) {
                    return [element, element1, element2, value];
                }
                
            }
            
        }
        
    }

    return -1;
};


const result = find_sum_of_three(number, 21);

console.log(result);