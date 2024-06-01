
from conans import ConanFile, CMake

class MatrixMultLibConan(ConanFile):
    name = "matrix_mult_lib"
    version = "0.1.0"
    license = "MIT"
    url = "https://github.com/divin3circle/matrix_mult_lib"
    description = "A simple C library for 3x3 matrix multiplication"
    settings = "os", "compiler", "build_type", "arch"
    exports_sources = "src/*", "include/*", "CMakeLists.txt"
    generators = "cmake"

    def build(self):
        cmake = CMake(self)
        cmake.configure()
        cmake.build()

    def package(self):
        self.copy("*.h", dst="include", src="include")
        self.copy("*.a", dst="lib", keep_path=False)
        self.copy("*.so", dst="lib", keep_path=False)

    def package_info(self):
        self.cpp_info.libs = ["matrix_mult"]
