# Mode COnvertion and filters

from PIL import Image
from PIL import ImageFilter
nature = Image.open('nature3.jpg')

blur = nature.filter(ImageFilter.BLUR)
detail = nature.filter(ImageFilter.DETAIL)
edges = nature.filter(ImageFilter.FIND_EDGES)

#blur.show()
#detail.show()
#edges.show()

emboss = nature.filter(ImageFilter.EMBOSS)
gaussian_blur = nature.filter(ImageFilter.GaussianBlur)


#emboss.show()
#gaussian_blur.show()
