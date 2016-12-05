class Mario():
    def move(self):
        print("I am moving")

class Goku():
    def attack(self):
        print("I am attacking")

class Anime(Mario, Goku):
    pass

anime = Anime()
anime.attack()
anime.move()
