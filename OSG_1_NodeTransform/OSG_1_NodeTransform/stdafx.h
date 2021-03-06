// stdafx.h : 标准系统包含文件的包含文件，
// 或是经常使用但不常更改的
// 特定于项目的包含文件
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>



// TODO: 在此处引用程序需要的其他头文件
#include <osg/AutoTransform> //自动变换节点类，使节点自动对齐于摄像机或屏幕。
#include <osg/MatrixTransform> //移动节点的矩阵类，最常用的移动节点的类。可随动、旋转控制节点。
#include <osg/PositionAttitudeTransform> //位置变换节点类，提供模型的位置变换、大小缩放、原点位置的设置、坐标系的变换
#include <osgViewer/Viewer> //视窗管理库，显示场景。为单独的场景保存一个单独的view，每个单独场景的程序都有一个Viewer
#include <osgDB/ReadFile> //数据读写库