const lang = [
  "C",
  "Golang",
  "Javascript",
  "Assembly",
  "Python",
  "Swift",
  "Kotlin",
];
//Function to implement iterative bineary search
function binarySearch(lang, choice) {
  console.log(lang);
  let min = 0;
  let max = lang.length - 1;

  while (min <= max) {
    const mid = (max + min) / 2;


    if (lang[mid] == choice) {
      return `${choice} at index ${mid}`;
    } else if (choice > lang[mid]) {
      min = mid + 1;
    } else {
      max = mid - 1;
    }
  }

  return -1;
}

console.log(binarySearch(lang.sort(), "Golang"));



