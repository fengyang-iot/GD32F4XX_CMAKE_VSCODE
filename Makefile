update:
	cmake -B build -G "Ninja"
# update:
# 	cmake -B build -G "MinGW Makefiles"
build: update
	cmake --build build

clean:
	rm -rf build
download:
	openocd -f  ./03cmsis-dap.cfg -c  "program  build/rtthread.bin 0x08000000 verify reset exit"

