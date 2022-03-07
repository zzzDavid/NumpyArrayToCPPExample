# NumpyArrayToCPPExample

This is a minimal example to write a multi-dimensional numpy array to file and read it on C++'s side.

## Compile
Just do:
```bash
$ g++ main.cpp
```
You should see an `a.out` in the current directory.

## Run

First, write a random 4D numpy array to file:

```bash
$ python output_4d_array.py
```

You should see a file `./array.bin` in the current directory.
Also, the random array is printed out.

```bash
$ ./a.out
```

It reads the `./array.bin` to a 4D array and then prints it out.
We see that the results are same.
