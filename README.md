# 此为linux版本的，使用dl库，统一API，链接不同的实现方式的动态库的demo

## 源码存放在loadlibdemo下

## 目录结构如下：

realfun.h 
是统一的API接口名称

loadAdapter.h
loadAdapter.cpp 
这两个是封装的类，用来动态加载所需要的库

demo.cpp
是main函数的入口，用来测试之前封装的类，动态加载需要的库

loadlibdemo/demolib1
是实现realfun.h的功能的实例动态库1
（demolibone.dll 其实就是这个实例生成的动态库，用于测试）

loadlibdemo/demolib1
是实现realfun.h的功能的实例动态库2
（demolibtwo.dll 其实就是这个实例生成的动态库，用于测试）

## 注意事项

根据目前的使用来看，需要注意的有三点

1. 统一API的时候，在头文件里，需要对要导出的API，用“extern c"

2. 另外就是，可以动态加载的，需要封装成动态库

3. windows下用Kernel32.lib库，头文件是Windows.h；

4. windows下要记得把接口导出来！

## PS：

如有描述不对之处，欢迎大家指正 
