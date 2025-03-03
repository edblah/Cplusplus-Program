# Cplusplus-Program

# I chose project 2 as my project to submit through this portflio. This project is the investment calculator app to help users forecast the growth of their invvestment over time. The program takes inputs from the user, includes the initial amount of investment, and then calculates the expected balance with and without additional monthly deposits. The results were then displayed in a tabular format to show a clear insight into the investment over time.

# What was done well:
 - a clear user input validation is implemented to ensure no invalid values are entered(negative values)
 - a well structured class to encapsulate the investment reaalted calculations were implemented to ensure OOP principles[InvestmentCalculator].
 - setpricision() was used to ensure the values were displayed with two decimal places
 - Seperated concerns by keeping calculation within InvestmentCalculator class and the UI in main.cpp

# Areas for improvement
  - Error Handling: implementing handling for other invalid user inputs(for instance non-numeric values) would make the program more reliable
  - Scalability: Adding functionality various compounding periods may improve the flexibility of the calculator.

# Challenges and Solutions:
  - Formatting Output: using fixed and setprecision(2) ensured that monetary values were displayed with two decimal places, properly representing the actual banking system.
  - Ensuring Readability: Keeping functions modular helpedf keeping the code more readable also ensuring OOP practices.

# Transferable Skills
  - Objected Oriented Programming [OOP]: Understanding class structure and encapsulation helps reusing the code for other projects and is useful in other senses in future projects.
  - Output Formatting: Displays readablke and well-formatted results is very important in any program to ensure user requirements and when dealing with numerical data

# Maintainability, Readability, and Adaptablity
  - Code is modular: Functions are seperated logically, making it easier to update specific parts of the code without effecting the entire program
  - Well Documented: Code comments make understanding the code much easier, and clarifies function purpose and the implementation of logic.
