#!/usr/bin/python3
if __name__ == "__main__":
    import hidden_4

    for file in dir(hidden_4):
        if file[0] != '_':
            print(file)
