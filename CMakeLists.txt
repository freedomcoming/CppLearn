# CMakeList.txt: CMakeProject 的 CMake 项目，在此处包括源代码并定义
# 项目特定的逻辑。
#
cmake_minimum_required (VERSION 3.8)

project ("CMakeProject")

# 将源代码添加到此项目的可执行文件。
#add_executable (CMakeProject "CMakeProject.cpp" "CMakeProject.h"  "MethodOverload.cpp"       "ListUse.cpp" "PointUse.cpp" "PretreatmentUse.cpp" "QuoteUse.cpp"   "TemplateUse.cpp" "StructUse.cpp" "DynamicObj.cpp" "FunctionUse.cpp" "TypesUse.cpp" "ConstTypeUse.cpp" "UnicodeUse.cpp" "CharUse.cpp" "DefineUse.cpp")


file (GLOB files *.cpp)
foreach (file ${files})
    string(REGEX REPLACE ".+/(.+)\\..*" "\\1" exe ${file})
    add_executable (${exe} ${file})
    message (\ \ \ \ --\ src/${exe}.cpp\ will\ be\ compiled\ to\ bin/${exe})
endforeach ()

# TODO: 如有需要，请添加测试并安装目标。
