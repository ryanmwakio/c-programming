/**********************************
Edge cases for the function****
numbers after zero are not added
**********************************/

const integerSummation = (integerList) => {
  //filter the array to get only values before zero if zero exists
  let newList = [];
  for (let i = 0; i < integerList.length; i++) {
    if (integerList[i] === 0) {
      break;
    }
    newList.push(integerList[i]);
  }

  //loop through the integer
  const sum = newList.reduce((x, y) => {
    return x + y;
  }, 0);

  return sum;
};

//Test cases
//console.log(integerSummation([3, 4, 5]));
console.log(integerSummation([3, 4, 5, 8, 8, 0]));
//console.log(integerSummation([5, 4, 6, 0, 12, 43, 2]));
