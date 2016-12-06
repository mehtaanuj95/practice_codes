# Seperating an image into individual channels (Red channel, blue channel or green channel)

from PIL import Image

fruits = Image.open('fruits.jpg')
r, g, b = fruits.split()

r.show()
g.show()
r.show()