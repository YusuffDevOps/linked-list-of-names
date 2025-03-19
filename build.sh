#build.sh

INCLUDE_DIR=/home/course_ps/u00/public/cxtra
UTILITIES_O=/home/course_ps/u00/public/cxtra/utilities.o
g++ names_list.o functions.cpp -I$INCLUDE_DIR $UTILITIES_O -o names_list

