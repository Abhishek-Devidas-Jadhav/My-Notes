import os


def introduction():
    """Python Introduction :
    1. Python was created by Guido van Rossum, and released in 20 February 1991
    2.
    """


Options = ["Exit", "Document", "Dictionary","text_file"]
while True:
    print(f"Choice => ", end="")
    for i in Options:
        print(f"{Options.index(i)} {i}", end="\t")

    choice = int(input(f"Enter your choice : "))
    if choice == 1:
        print(introduction.__doc__)
    elif choice == 2:
        os.system("python3 dict.py")
    elif choice == 3:
        os.system("ls ../")
        os.system("cat ../python_basics.txt")
    else:
        exit()
