// stdafx.h : 标准系统包含文件的包含文件，
// 或是经常使用但不常更改的
// 特定于项目的包含文件
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>



// TODO: 在此处引用程序需要的其他头文件
#include <osg/Node>
#include <osg/Geode>  
#include <osg/Geometry>
#include <osg/Group>

#include <osg/Camera>

#include <osg/Light> //继承自osg::StateAttribute，保存灯光的模式与属性参数信息
#include <osg/LightSource> //继承自osg::Group，灯光管理类，继承了osg::Group类的管理节点的接口，将灯光作为一个节点加入到场景图中进行渲染

#include <osg/BoundingSphere>
#include <osg/BoundingBox>

#include <osgDB/ReadFile>
#include <osgDB/WriteFile>

#include <osgViewer/ViewerEventHandlers> //事件监听
#include <osgGA/StateSetManipulator> //事件响应类，对渲染状态进行控制，按w在体/线/点模式间切换，按l在照明与非照明模式下切换，按b在是否开启背面剔除模式下切换，按t在是否开启纹理的情况下切换

#include <osgUtil/Optimizer>
#include <osgViewer/Viewer>