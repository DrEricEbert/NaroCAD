// File generated by CPPExt (Enum)

#ifndef _BRepBuilderAPI_FaceError_OCWrappers_HeaderFile
#define _BRepBuilderAPI_FaceError_OCWrappers_HeaderFile

namespace OCNaroWrappers
{

//!  Indicates the outcome of the <br>
//! construction of a face, i.e. whether it has been successful or <br>
//! not, as explained below: <br>
//! -      BRepBuilderAPI_FaceDone No error occurred. The face is <br>
//!    correctly built. <br>
//! -      BRepBuilderAPI_NoFace No initialization of the <br>
//!    algorithm; only an empty constructor was used. <br>
//! -      BRepBuilderAPI_NotPlanar <br>
//!    No surface was given and the wire was not planar. <br>
//! -      BRepBuilderAPI_CurveProjectionFailed <br>
//!    Not used so far. <br>
//! -      BRepBuilderAPI_ParametersOutOfRange <br>
//!    The parameters given to limit the surface are out of its    bounds. <br>
public enum class OCBRepBuilderAPI_FaceError
{ 
 BRepBuilderAPI_FaceDone,
BRepBuilderAPI_NoFace,
BRepBuilderAPI_NotPlanar,
BRepBuilderAPI_CurveProjectionFailed,
BRepBuilderAPI_ParametersOutOfRange
};

}; // OCNaroWrappers

#endif