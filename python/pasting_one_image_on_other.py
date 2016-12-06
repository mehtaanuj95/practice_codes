# pasting one image on other

from PIL import Image

butterfly = Image.open('butterfly.jpg')
home = Image.open('home.jpg')

#493,356
#515,384

area = (5, 5, 498, 361)
home.paste(butterfly, area)

home.show()