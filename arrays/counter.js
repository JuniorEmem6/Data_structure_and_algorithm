//Javascript code illustrating a simple counter;

const friuts = ["Apple", "Mango", "Pineapple", "Mango", "Apple", "Kiwi", "Pineapple", "Apple"];
const counterHolder = {};

function counter(friuts){
    for (let i = 0; i < friuts.length; i++) {
        const friut = friuts[i];
        let count = 0;
        
        for (let j = 0; j < friuts.length; j++) {
            
            if(friut == friuts[j]){
                count++;
                counterHolder[friut] = count;
            }
            
        }
    }
}

counter(friuts);

console.log(counterHolder);