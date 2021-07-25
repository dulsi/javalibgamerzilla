# Create the header with javac -h . ClassName.java
JAVA_HOME=`java -XshowSettings:properties -version 2>&1 > /dev/null | grep 'java.home' | awk '{print $3}'`
GAMERZILLA_INCLUDE=`pkg-config --cflags gamerzilla`
GAMERZILLA_LIBS=`pkg-config --libs gamerzilla`
g++ -c -fPIC -I${JAVA_HOME}/include -I${JAVA_HOME}/include/linux ${GAMERZILLA_INCLUDE} com_identicalsoftware_javalibgamerzilla_Gamerzilla.cpp -o com_identicalsoftware_javalibgamerzilla_Gamerzilla.o
g++ -shared -fPIC -o ../../../native/linux_x86_64/libjavagamerzilla.so ${GAMERZILLA_LIBS} com_identicalsoftware_javalibgamerzilla_Gamerzilla.o
