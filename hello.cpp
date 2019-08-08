#include <iostream>
#include <functional>

int main()
{
// Make require of C++14 instructions, with lambda and net captures    


/* From : https://docs.microsoft.com/en-us/cpp/cpp/lambda-expressions-in-cpp?view=vs-2019
     In C++11 and later, a lambda expression (often called a lambda) is a convenient way 
     of defining an anonymous function object (a closure) right at the location where it
     is invoked or passed as an argument to a function. Typically lambdas are used to
     encapsulate a few lines of code that are passed to algorithms or asynchronous methods. 

     [=] () mutable trow() -> init  { int n x+y; x=y; y=n;  return n; }
     -1- 2- ---3--- --4---  ---5--- ----------------6------------------ 

     1 - capture clause (Also known as the lambda-introducer in the C++ specification.)
           A lambda can introduce new variables in its body (in C++14).
           [&] means all variables that you refer to are captured by reference, and
           [=] means they are captured by value
     2 - input parameter list Optional. (Also known as the lambda declarator)
	 3 - mutable specification Optional.
	 4 - exception-specification Optional.
	 5 - trailing-return-type Optional.
	 6 - lambda body.
	 The return type of a lambda expression is automatically deduced.

   Example with a new variable (in the capture clause) and input parameters: 
	 auto y = [third = 42] (int first, int second) {return first + second + third; };

   Example: pass all var by ref but n by value; pass a = 4
	 int m = 0;   int n = 0;
     [&, n] (int a) mutable { m = ++n + a; }(4);
     cout << m << ", " << n << endl; // Output: "5, 0"
   Because the variable n is captured by value, its value remains 0 after the call to the
   lambda expression. The mutable specification allows n to be modified within the lambda. 

*/

/* 	[out = std::ref(std::cout << "Hello ")]
    Initialising the value out as standard reference wrapper around the result valur of
    calling the insert operator on the C out global variable with the string "Hello "

                                            ()
    Lambda is talinkg no parameters 
											   { out.get() << "World\n"; }
    De-reference the reference wrapper to get back the reference with the .get method and 
    then we will call "World\n"
     																	   ();
    Invoke Lambda
 */
	[out = std::ref(std::cout << "Hello ")] () { out.get() << "World\n"; } ();

}