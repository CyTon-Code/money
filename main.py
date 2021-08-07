FILE = "db"
list = []

import lib

list = lib.get()
lib.echo(list)
lib.set(list)
list = lib.get()
lib.echo(list)
