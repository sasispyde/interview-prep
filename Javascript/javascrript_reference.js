// VARIABLE DECLARATION
// using the var, let, const to make ana variable;
// like 
// these are the valid variables;
var variableUsingVar = 10;
let variableUsingLet = 10;
const variableUsingConst = 10;

// their is no need to initialize the values for let and var but const values must be intialized;
// and it is initialized as undefined (var and let);
var temp;
let temp2;
const temp3 = 10;

// this is also a valid variables but some cases it shows the undefined behaviour
// x = 10;

// some examples like ;
var a;
var b;

console.log('Value of a is ' + a);
console.log('Value of b is ' + b);

try{
	console.log('Value of c is ' + c);
} catch {
	console.log('c is not defined');
}

let x;
let y;

console.log('Value of x is ' + x);
console.log('Value of y is ' + y);

try{
	console.log('Value of z is ' + z);
} catch {
	console.log('z is not defined');
}

// we can use the undefined property to ensure weather it has a values or not;
// undefinded is refered as FALSE 

if( y == undefined ) {
	console.log('y is not defined');
} else {
	console.log('the value of y is ' + z);
}

// undefinded value is converted into the NaN when it is used in numeric content;
var firstNumber;
var secondNumber = 10;

console.log( "Addition of two numbers is " ,firstNumber + secondNumber); // it shows the NaN;

// whwn we dealing the NULL values it is refered as 0;
// example 
var n = null;
console.log("Addition with NULL variable" , n * 10); // it returns 0 because 0 * 10 = 0;

// VARIABLE SCOPE
/*
	* when we declare the variable outside the function it is refered as GLOBAL variable;
	
	* variable within the function is called as local variable;

	* by using the var to decalre the variable it will visible globally; ( declared outsde the function );
	
	* by using the let to decalre the variable it will not visible globally; ( declared outsde the function );
*/
// examples : 

if(x == undefined) {
	var globalVariable = 10;
}
console.log('the value of global variable is ',globalVariable);

if(y == undefined) {
	let gVariable = 10;
}
// console.log(gVariable); // it throws an error or considered as a undefined;


// VARIABLE HOISTING;
/*
	definition : 

		* Anathor unusual thing about variables in javascript is that u can refer a variable declared later witout getting any excaptoion;
		* hoisting defines as the variable within the TOP of the function or the statement the hoisted variables will always return the undefined;
		* So even if you declare and initialize after you use or refer to this variable, it still returns undefined;
*/
// example 
if( hoistingVariable == undefined ) {
	console.log('Example of hoistingVariable');
}
var hoistingVariable = 10;

var newHoistedVariable = "new value";

( () => {
	console.log(newHoistedVariable); // it will prints the undefined;
	var newHoistedVariable = 20;
})();

