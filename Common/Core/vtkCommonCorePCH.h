// SPDX-FileCopyrightText: Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
// SPDX-License-Identifier: BSD-3-Clause
// Precompiled header for VTK CommonCore module
// This header includes frequently used headers to improve build performance

#ifndef vtkCommonCorePCH_h
#define vtkCommonCorePCH_h

// STL Headers
#include <unordered_map>  
#include <tuple>          
#include <vector>         
#include <list>           
#include <memory>         
#include <functional>     
#include <mutex>          
#include <algorithm>
#include <string>
#include <map>
#include <fstream>
#include <iostream>
#include <sstream>
#include <cmath>

// Core VTK headers that are included in many files
#include "vtkSystemIncludes.h"
#include "vtkIOStream.h"
#include "vtkType.h"
#include "vtkSetGet.h"
#include "vtkObjectBase.h"
#include "vtkObject.h"
#include "vtkIndent.h"

// Expensive VTK headers frequently included across the module
#include "vtkSmartPointer.h"
#include "vtkAbstractArray.h"
#include "vtkDataArray.h"
#include "vtkMath.h"        

#endif // vtkCommonCorePCH_h
