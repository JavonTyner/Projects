# Javon Tyner - 900006625
# June 17th, 2023
# Lab 3


# Get user inputs for month, day, and year
month = int(input("Enter the month (numeric form): "))
day = int(input("Enter the day: "))
year = int(input("Enter the two-digit year: "))

# Calculate the product of month and day
product = month * day

# Check if the product equals the year
if product == year:
    print("This date is magic!")
else:
    print("This date is not magic.")
