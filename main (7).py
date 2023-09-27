def is_leap_year(year):
    if (year % 4 == 0 and year % 100 != 0) or (year % 400 == 0):
        return True
    else:
        return False

# Get user input for the year
user_input = input("Enter a year: ")

try:
    year = int(user_input)
    if year > 0:
        if is_leap_year(year):
            print(f"{year} is a leap year.")
        else:
            print(f"{year} is not a leap year.")
    else:
        print("Please enter a positive year.")
except ValueError:
    print("Please enter a valid year (integer).")
