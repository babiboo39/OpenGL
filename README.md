OpenGL
======
Open Graphics Library is a cross-language, cross-platform application programing interface (API) for rendering 2D and 3D vector graphics.
The API is typically used to interact with a graphics processing unit (GPU), to achieve hardware-accelerated rendering.
[Detail][wiki].

 [wiki]: https://en.wikipedia.org/wiki/OpenGL


## Compiling
To compile the program, open the terminal on the directory where you save the file and type :
```
g++ [FileName].cpp -lglut -lGLU -lGL
```
Change the [FileName].cpp with your program's name.

For Example, your file name is OpenGL_Point.cpp, then just type:
```
g++ OpenGL_Point.cpp -lglut -lGLU -lGL
```
It will generate an ```ELF``` file named ```a.out``` by default. If you wish to change the output name, just use ```-o [outputName]```

So it will become
```
g++ [FileName].cpp -o [outputName] -lglut -lGLU -lGL
```
