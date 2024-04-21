# GET_NEXT_LINE
get_next_line function written using C.


The goal of this function is to retun a line from a file every time you call the get_next_line(fd) function.


it take the file descriptor of our file as an argument then return the each time if exist, it returns NULL if you reach the end of file or an error has eccured

you may add -D BUFFER_SIZE=42  option to your compiler s (a buffer size of 42 is used as an example), and change the buffer size macro which is used to specifie how many bytes function read will read every time its called.

### The bonus part:
the bonus part is done to let the function handle multiple file decriptors which means multiple files.

### used fumctions:

read, malloc and free
