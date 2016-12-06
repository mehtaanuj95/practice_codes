'''
In this program, we will be applying basic transformations on an image.
These include spinning the image about an angle, flipping the image, resizing the image etc.

Author : Anuj Bhai Mehta
Created on Tuesday, 6 December 2016 at 07:14 AM
'''

from PIL import Image

nature = Image.open('nature3.jpg')

# Resizing an image
'''
square_img = nature.resize((400 , 400))
square_img.show()
nature.show()
'''

#Flipping an image
'''
flip_image = nature.transpose(Image.FLIP_LEFT_RIGHT)
flip_image.show()
'''

#Rotating an image
'''
rotate_image = nature.transpose(Image.ROTATE_270)
rotate_image.show()
'''
#ANTIALIAS mode
'''
img = nature.transpose(Image.ANTIALIAS)
img.show()
'''
