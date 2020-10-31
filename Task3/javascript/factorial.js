//to find factoial of a number 10
function factorial(n){
  let answer = 1;
  if (n == 0 || n == 1){
    return answer;
  }else{
    for(var i = n; i >= 1; i--){
      answer = answer * i;
    }
    return answer;
  }  
}
let n = 10;
answer = factorial(n)
console.log("The factorial of " + n + " is " + answer);
