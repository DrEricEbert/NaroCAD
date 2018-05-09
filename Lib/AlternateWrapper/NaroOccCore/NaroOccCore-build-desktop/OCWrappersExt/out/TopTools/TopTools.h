// File generated by CPPExt (Package)
//

#ifndef _TopTools_OCWrappers_HeaderFile
#define _TopTools_OCWrappers_HeaderFile

// Include the wrapped header
#include <TopTools.hxx>

#include "TopTools_ShapeMapHasher.h"
#include "TopTools_OrientedShapeMapHasher.h"
#include "TopTools_MapOfShape.h"
#include "TopTools_MapOfOrientedShape.h"
#include "TopTools_IndexedMapOfShape.h"
#include "TopTools_DataMapOfIntegerShape.h"
#include "TopTools_DataMapOfOrientedShapeInteger.h"
#include "TopTools_DataMapOfShapeInteger.h"
#include "TopTools_DataMapOfShapeReal.h"
#include "TopTools_Array1OfShape.h"
#include "TopTools_HArray1OfShape.h"
#include "TopTools_Array2OfShape.h"
#include "TopTools_HArray2OfShape.h"
#include "TopTools_SequenceOfShape.h"
#include "TopTools_HSequenceOfShape.h"
#include "TopTools_ListOfShape.h"
#include "TopTools_Array1OfListOfShape.h"
#include "TopTools_HArray1OfListOfShape.h"
#include "TopTools_DataMapOfIntegerListOfShape.h"
#include "TopTools_DataMapOfShapeListOfShape.h"
#include "TopTools_DataMapOfShapeListOfInteger.h"
#include "TopTools_IndexedDataMapOfShapeShape.h"
#include "TopTools_IndexedDataMapOfShapeListOfShape.h"
#include "TopTools_DataMapOfShapeShape.h"
#include "TopTools_IndexedMapOfOrientedShape.h"
#include "TopTools_DataMapOfShapeSequenceOfShape.h"
#include "TopTools_IndexedDataMapOfShapeAddress.h"
#include "TopTools_DataMapOfOrientedShapeShape.h"
#include "TopTools_LocationSet.h"
#include "TopTools_ShapeSet.h"
#include "TopTools_StdMapNodeOfMapOfShape.h"
#include "TopTools_MapIteratorOfMapOfShape.h"
#include "TopTools_StdMapNodeOfMapOfOrientedShape.h"
#include "TopTools_MapIteratorOfMapOfOrientedShape.h"
#include "TopTools_IndexedMapNodeOfIndexedMapOfShape.h"
#include "TopTools_DataMapNodeOfDataMapOfIntegerShape.h"
#include "TopTools_DataMapIteratorOfDataMapOfIntegerShape.h"
#include "TopTools_DataMapNodeOfDataMapOfOrientedShapeInteger.h"
#include "TopTools_DataMapIteratorOfDataMapOfOrientedShapeInteger.h"
#include "TopTools_DataMapNodeOfDataMapOfShapeInteger.h"
#include "TopTools_DataMapIteratorOfDataMapOfShapeInteger.h"
#include "TopTools_DataMapNodeOfDataMapOfShapeReal.h"
#include "TopTools_DataMapIteratorOfDataMapOfShapeReal.h"
#include "TopTools_SequenceNodeOfSequenceOfShape.h"
#include "TopTools_ListNodeOfListOfShape.h"
#include "TopTools_ListIteratorOfListOfShape.h"
#include "TopTools_DataMapNodeOfDataMapOfIntegerListOfShape.h"
#include "TopTools_DataMapIteratorOfDataMapOfIntegerListOfShape.h"
#include "TopTools_DataMapNodeOfDataMapOfShapeListOfShape.h"
#include "TopTools_DataMapIteratorOfDataMapOfShapeListOfShape.h"
#include "TopTools_DataMapNodeOfDataMapOfShapeListOfInteger.h"
#include "TopTools_DataMapIteratorOfDataMapOfShapeListOfInteger.h"
#include "TopTools_IndexedDataMapNodeOfIndexedDataMapOfShapeShape.h"
#include "TopTools_IndexedDataMapNodeOfIndexedDataMapOfShapeListOfShape.h"
#include "TopTools_DataMapNodeOfDataMapOfShapeShape.h"
#include "TopTools_DataMapIteratorOfDataMapOfShapeShape.h"
#include "TopTools_IndexedMapNodeOfIndexedMapOfOrientedShape.h"
#include "TopTools_DataMapNodeOfDataMapOfShapeSequenceOfShape.h"
#include "TopTools_DataMapIteratorOfDataMapOfShapeSequenceOfShape.h"
#include "TopTools_IndexedDataMapNodeOfIndexedDataMapOfShapeAddress.h"
#include "TopTools_DataMapNodeOfDataMapOfOrientedShapeShape.h"
#include "TopTools_DataMapIteratorOfDataMapOfOrientedShapeShape.h"


namespace OCNaroWrappers
{
//! The  TopTools package provides   utilities for the <br>
//!          topological data structure. <br>
//! <br>
//!          * ShapeMapHasher. Hash a  Shape base on the TShape <br>
//!          and the Location. The Orientation is not used. <br>
//! <br>
//!          * OrientedShapeMapHasher. Hash a Shape base on the <br>
//!          TShape ,the Location and the Orientation. <br>
//! <br>
//!          * Instantiations of TCollection for Shapes : <br>
//!             MapOfShape <br>
//!             IndexedMapOfShape <br>
//!             DataMapOfIntegerShape <br>
//!             DataMapOfShapeInteger <br>
//!             DataMapOfShapeReal <br>
//!             Array1OfShape <br>
//!             HArray1OfShape <br>
//!             SequenceOfShape <br>
//!             HSequenceOfShape <br>
//!             ListOfShape <br>
//!             Array1OfListShape <br>
//!             HArray1OfListShape <br>
//!             DataMapOfIntegerListOfShape <br>
//!             DataMapOfShapeListOfShape <br>
//!             DataMapOfShapeListOfInteger <br>
//!             IndexedDataMapOfShapeShape <br>
//!             IndexedDataMapOfShapeListOfShape <br>
//!             DataMapOfShapeShape <br>
//!             IndexedMapOfOrientedShape <br>
//!             DataMapOfShapeSequenceOfShape <br>
//!             IndexedDataMapOfShapeAddress <br>
//!             DataMapOfOrientedShapeShape <br>
//! <br>
//!          * LocationSet : to write sets of locations. <br>
//! <br>
//!          * ShapeSet : to writes sets of TShapes. <br>
//! <br>
//!          Package Methods : <br>
//! <br>
//!            Dump : To dump the topology of a Shape. <br>
//! <br>
public ref class OCTopTools abstract sealed
{

public:
// Methods

//! Dumps the topological structure  of <Sh>  on the <br>
//!          stream <S>. <br>
static /*instead*/  void Dump(OCNaroWrappers::OCTopoDS_Shape^ Sh, Standard_OStream& S) ;

//! This is to bypass an extraction bug. It will force <br>
//!          the  inclusion    of  Standard_Integer.hxx  itself <br>
//!          including Standard_OStream.hxx  at   the   correct <br>
//!          position. <br>
static /*instead*/  void Dummy(Standard_Integer I) ;


};

}; // OCNaroWrappers

#endif