number = int(input("Enter number to find if it is prime : "))
for i in (range(2,number)):
    if number%i==0:
        print(f"",number," is NOT prime")
        break
else:
    print(f"",number," is prime")
