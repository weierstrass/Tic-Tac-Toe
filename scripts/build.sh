#!/bin/sh

saveCurrentFolder=$(pwd)

echo "Compilation started."

echo "Step 1: Build folder creation."
if [ ! -d "../build" ]; then
	mkdir ../build;
fi
cd ../build

echo "Step 2: Run CMake."
cmake ..

echo "Step 3: Run make."
make

echo "Compilation ended."

cd $saveCurrentFolder
