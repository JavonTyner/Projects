# Javon Tyner
# Python Lab 6
# June 25th, 2023




def calculate_average(numbers):
    total = sum(numbers)
    average = total / len(numbers)
    return average

# Prompt the user for the file name
file_name = input("Enter the name of the file: ")

try:
    # Open the file in read mode
    with open(file_name, 'r') as infile:
        numbers = []  # Create an empty list to store the numbers
        for line in infile:
            for value in line.split():
                numbers.append(int(value))  # Convert each value to an integer and add it to the list

        average = calculate_average(numbers)  # Calculate the average using the numbers list
        print("Average:", average)  # Print the calculated average

except FileNotFoundError:
    print("File not found.")
except ValueError:
    print("Invalid data in the file.")
