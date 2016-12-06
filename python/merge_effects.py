'''
In this program, we will be merging channels from different files to create different effects such as those similar to photoshop and Instagram.
Also, we can change the order of merging from rgb to any other.
For it, we need a library called Pillow and python 3 or higher.

Author : Anuj Bhai Mehta
Created on Tuesday, 6 December 2016 at 06:58 AM
'''

from PIL import Image

nature1 = Image.open('nature1.jpg')
nature2 = Image.open('nature2.jpg')

r1, g1, b1 = nature2.split()
r2, g2, b2 = nature1.split()

new_image = Image.merge('RGB', (g1, b1, r1))
nature2.show()
nature1.show()
new_image.show()