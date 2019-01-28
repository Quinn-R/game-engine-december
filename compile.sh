clear

#inc/*.hpp

g++ src/*.cpp inc/*.hpp engine/*.hpp engine/*/*.cpp -Ilib/SFML-2.5.1/include -o bin/game -Llib/SFML-2.5.1/lib -lsfml-graphics -lsfml-window -lsfml-system

#-Wl,-rpath=$ORIGIN/lib/SFML-2.5.1/lib
#cd obj

#export LD_LIBRARY_PATH=../lib/SFML-2.5.1/lib && ./run
#./run

cd ..
