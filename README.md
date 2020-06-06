Build and run test
==================

	mkdir build
	cd build
	cmake -Dgtest_force_shared_crt=ON ..      
	cmake --build .
	ctest -C Debug
                