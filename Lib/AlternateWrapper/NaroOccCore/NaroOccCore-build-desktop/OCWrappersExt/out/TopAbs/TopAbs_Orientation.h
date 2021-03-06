// File generated by CPPExt (Enum)

#ifndef _TopAbs_Orientation_OCWrappers_HeaderFile
#define _TopAbs_Orientation_OCWrappers_HeaderFile

namespace OCNaroWrappers
{

//! Identifies the orientation of a topological shape. <br>
//! Orientation can represent a relation between two <br>
//! entities, or it can apply to a shape in its own right. <br>
//! When used to describe a relation between two <br>
//! shapes, orientation allows you to use the underlying <br>
//! entity in either direction. For example on a curve <br>
//! which is oriented FORWARD (say from left to right) <br>
//! you can have both a FORWARD and a REVERSED <br>
//! edge. The FORWARD edge will be oriented from <br>
//! left to right, and the REVERSED edge from right to <br>
//! left. In this way, you share the underlying entity. In <br>
//! other words, two faces of a cube can share an <br>
//! edge, and can also be used to build compound shapes. <br>
//! For each case in which an element is used as the <br>
//! boundary of a geometric domain of a higher <br>
//! dimension, this element defines two local regions of <br>
//! which one is arbitrarily considered as the default <br>
//! region. A change in orientation implies a switch of <br>
//! default region. This allows you to apply changes of <br>
//! orientation to the shape as a whole. <br>
public enum class OCTopAbs_Orientation
{ 
 TopAbs_FORWARD,
TopAbs_REVERSED,
TopAbs_INTERNAL,
TopAbs_EXTERNAL
};

}; // OCNaroWrappers

#endif
