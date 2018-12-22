clear

#inc/*.hpp

g++ src/*.cpp inc/*.hpp engine/*.hpp engine/*/*.cpp -o obj/run -lsfml-graphics -lsfml-window -lsfml-system

cd obj

./run

cd ..
