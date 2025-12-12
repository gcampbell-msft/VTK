// SPDX-FileCopyrightText: Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
// SPDX-License-Identifier: BSD-3-Clause
// Precompiled header for VTK CommonCore module
// This header includes frequently used headers to improve build performance

#ifndef vtkCommonCorePCH_h
#define vtkCommonCorePCH_h

// STL headers that are expensive to compile and widely used
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <memory>
#include <algorithm>
#include <cmath>

// Core VTK headers that are included in many files
#include "vtkSystemIncludes.h"
#include "vtkIOStream.h"
#include "vtkType.h"
#include "vtkSetGet.h"
#include "vtkObjectBase.h"
#include "vtkObject.h"
#include "vtkIndent.h"

#endif // vtkCommonCorePCH_h
