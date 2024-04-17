def find_repeating_character(string):
    input_str = string.upper()
    char_count = {}

    for char in input_str:
        if char.isalpha():
            char_count[char] = char_count.get(char, 0) + 1

    repeat = False

    for char, count in char_count.items():
        if count > 1:
            print(f"{char}{count} times repeated")
            repeat = True

    if not repeat:
        print("No repeated characters in string")

user_input = input()
find_repeating_character(user_input)
