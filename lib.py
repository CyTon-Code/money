from os import system

def get(str: FILE = "db") -> list:
    system(f"touch {FILE}")

    with open(FILE) as f:
        return [i for i in f.read().split()]

def set(list: list, str: FILE = "db"):
    system(f'echo {" ".join(list)} > {FILE}')

def del(list: list):
    pass

#  or
def del(str: list):
    #  replace
    pass


def echo(list):
    print(list)


def bash():
    while True:
        text = input()

        _history()
    pass

def _history(str text, str: FILE = "~/$_history"):
    system(f"echo {text} >> {FILE}")
    pass
