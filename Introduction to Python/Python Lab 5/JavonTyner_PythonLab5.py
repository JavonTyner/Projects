def calculate_calories_from_fat(fat_grams):
    return fat_grams * 9

def calculate_calories_from_carbs(carb_grams):
    return carb_grams * 4

def main():
    fat_grams = float(input("Enter the number of fat grams consumed: "))
    carb_grams = float(input("Enter the number of carbohydrate grams consumed: "))

    calories_from_fat = calculate_calories_from_fat(fat_grams)
    calories_from_carbs = calculate_calories_from_carbs(carb_grams)

    print("Calories from fat: ", calories_from_fat)
    print("Calories from carbs: ", calories_from_carbs)

if __name__ == "__main__":
    main()
