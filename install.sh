#!/bin/bash

product=$1
root=`pwd`

MAKE=make
if command -v python > /dev/null ; then
  MAKE="make -j $(python -c 'import multiprocessing as mp; print(int(mp.cpu_count()))')"
fi

echo $MAKE


function makeAndInstall() {
    rm -rf build
    mkdir build
    cd build
    cmake -DBUILD_PRODUCT="$1" -DSKIP_CORE="$2" -DCMAKE_BUILD_TYPE=Debug -DCMAKE_PREFIX_PATH=/usr/local ..
    $MAKE
    make install
    cd ..
}

if [ "$product" == "" ]
then
  makeAndInstall "" ""
  for file in `ls $root`
      do
          if [[ "$file" =~ "volcengine-cpp-sdk-" ]]; then
             product=${file/"volcengine-cpp-sdk-"/""}
             if [[ "$product" != "example" ]]; then
                 echo "$product start build"
                 makeAndInstall "$product" "skip"
             fi
          fi
      done
else
  makeAndInstall "$product"
fi


