g++ -fPIC -c src/Activation.cpp -o lib/Activation.o
g++ -o lib/libActivation.so -shared lib/Activation.o
cp lib/libActivation.so /home/misa2026/lib
g++ ./src/main.cpp -L/home/misa2026/lib -lActivation -o main.exe
