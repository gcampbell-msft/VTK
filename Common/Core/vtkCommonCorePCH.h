// SPDX-FileCopyrightText: Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
// SPDX-License-Identifier: BSD-3-Clause
// Precompiled header for VTK CommonCore module
// This header includes frequently used headers to improve build performance

#ifndef vtkCommonCorePCH_h
#define vtkCommonCorePCH_h

// STL headers that are expensive to compile and widely used
#include <algorithm>
#include <cmath>
#include <fstream>
#include <iostream>
#include <map>
#include <memory>
#include <sstream>
#include <string>
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

#endif // vtkCommonCorePCH_h
