import numpy as np

a = np.random.rand(4, 4, 5, 5) * 100

a = a.astype(np.int32)
# a = a.astype(np.int8)
print(a)
filename = "array.bin"
a.tofile(filename)
print("saved to " + filename)
