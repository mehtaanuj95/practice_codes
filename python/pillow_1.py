# A simple program to display the dimentions of an image and to perform crop operation on it.

from PIL import Image

image = Image.open('butterfly.jpg')
print(image.size)
print(image.format)

area = (50, 50, 400, 300)
cropped_image = image.crop(area)

image.show()
cropped_image.show()