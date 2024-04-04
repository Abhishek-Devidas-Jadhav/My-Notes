x = input("Enter string to find if it is palindrome : ")
y = x[::-1]
if x==y:
    print(f"{x} is a palindrome")
else:
    print(f"{x} is NOT a palindrome")