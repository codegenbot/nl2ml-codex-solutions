```cpp
return result.rdbuf()->sbeam() ? result.sputn(result.gptr(), result.gcount()) : "";