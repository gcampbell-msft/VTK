set(classes
  vtkAggregateToPartitionedDataSetCollection
  vtkAlgorithm
  vtkAlgorithmOutput
  vtkAnnotationLayersAlgorithm
  vtkArrayDataAlgorithm
  vtkCachedStreamingDemandDrivenPipeline
  vtkCastToConcrete
  vtkCellGridAlgorithm
  vtkCompositeDataPipeline
  vtkCompositeDataSetAlgorithm
  vtkDataObjectAlgorithm
  vtkDataSetAlgorithm
  vtkDemandDrivenPipeline
  vtkDirectedGraphAlgorithm
  vtkEndFor
  vtkEnsembleSource
  vtkExecutionAggregator
  vtkExecutionRange
  vtkExecutive
  vtkExplicitStructuredGridAlgorithm
  vtkExtentRCBPartitioner
  vtkExtentSplitter
  vtkExtentTranslator
  vtkFilteringInformationKeyManager
  vtkForEach
  vtkGraphAlgorithm
  vtkHierarchicalBoxDataSetAlgorithm
  vtkHyperTreeGridAlgorithm
  vtkImageAlgorithm
  vtkImageInPlaceFilter
  vtkImageProgressIterator
  vtkImageToStructuredGrid
  vtkImageToStructuredPoints
  vtkInformationDataObjectMetaDataKey
  vtkInformationExecutivePortKey
  vtkInformationExecutivePortVectorKey
  vtkInformationIntegerRequestKey
  vtkMoleculeAlgorithm
  vtkMultiBlockDataSetAlgorithm
  vtkMultiTimeStepAlgorithm
  vtkParallelReader
  vtkPartitionedDataSetAlgorithm
  vtkPartitionedDataSetCollectionAlgorithm
  vtkPassInputTypeAlgorithm
  vtkPiecewiseFunctionAlgorithm
  vtkPiecewiseFunctionShiftScale
  vtkPointSetAlgorithm
  vtkPolyDataAlgorithm
  vtkProgressObserver
  vtkReaderAlgorithm
  vtkRectilinearGridAlgorithm
  vtkSMPProgressObserver
  vtkScalarTree
  vtkSelectionAlgorithm
  vtkSimpleImageToImageFilter
  vtkSimpleReader
  vtkSimpleScalarTree
  vtkSpanSpace
  vtkSphereTree
  vtkStreamingDemandDrivenPipeline
  vtkStructuredGridAlgorithm
  vtkTableAlgorithm
  vtkThreadedCompositeDataPipeline
  vtkThreadedImageAlgorithm
  vtkTimeRange
  vtkTreeAlgorithm
  vtkTrivialConsumer
  vtkTrivialProducer
  vtkUndirectedGraphAlgorithm
  vtkUniformGridPartitioner
  vtkUnstructuredGridAlgorithm
  vtkUnstructuredGridBaseAlgorithm

  # New AMR classes
  vtkNonOverlappingAMRAlgorithm
  vtkOverlappingAMRAlgorithm
  vtkUniformGridAMRAlgorithm)

set (template_classes
  vtkTemporalAlgorithm)

# Hand written (de)serialization routines
set(serialization_helper_sources)
if (VTK_WRAP_SERIALIZATION)
  list(APPEND serialization_helper_sources
    vtkAlgorithmSerDesHelper.cxx)
endif ()

vtk_module_add_module(VTK::CommonExecutionModel
  CLASSES ${classes}
  SOURCES ${serialization_helper_sources}
  TEMPLATE_CLASSES ${template_classes})
vtk_add_test_mangling(VTK::CommonExecutionModel)

# Reuse the CommonCore precompiled header to improve build performance
if(CMAKE_VERSION VERSION_GREATER_EQUAL "3.16")
  target_precompile_headers(CommonExecutionModel REUSE_FROM CommonCore)
endif()
