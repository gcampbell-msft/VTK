// SPDX-FileCopyrightText: Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
// SPDX-License-Identifier: BSD-3-Clause
// Precompiled header for VTK CommonCore module
// This header includes frequently used headers to improve build performance

#ifndef vtkCommonCorePCH_h
#define vtkCommonCorePCH_h

// STL Headers
#include <algorithm>
#include <cmath>
#include <fstream>
#include <functional>
#include <iostream>
#include <list>
#include <map>
#include <memory>
#include <mutex>
#include <sstream>
#include <string>
#include <tuple>
#include <unordered_map>
#include <vector>

// Core VTK headers that are included in many files
#include "vtkIOStream.h"
#include "vtkIndent.h"
#include "vtkObject.h"
#include "vtkObjectBase.h"
#include "vtkSetGet.h"
#include "vtkSystemIncludes.h"
#include "vtkType.h"

// Expensive VTK headers frequently included across the module
#include "vtkAbstractArray.h"
#include "vtkDataArray.h"
#include "vtkMath.h"
#include "vtkSmartPointer.h"

#endif // vtkCommonCorePCH_h
