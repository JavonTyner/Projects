# Javon Tyner - 900006625
# Python Lab 4 
# June 20th, 2023



number = int(input("Enter a nonnegative integer: "))

if number < 0:
    print("Invalid input. Please enter a nonnegative integer.")
else:
    factorial = 1
    for i in range(1, number + 1):
        factorial *= i

    print("The factorial of", number, "is:", factorial)
