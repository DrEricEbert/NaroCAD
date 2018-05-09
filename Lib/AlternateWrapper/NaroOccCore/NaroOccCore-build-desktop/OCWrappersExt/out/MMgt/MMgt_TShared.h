// File generated by CPPExt (Transient)
//
#ifndef _MMgt_TShared_OCWrappers_HeaderFile
#define _MMgt_TShared_OCWrappers_HeaderFile

// include the wrapped class
#include <MMgt_TShared.hxx>
#include "../Converter.h"

#include "../Standard/Standard_Transient.h"



namespace OCNaroWrappers
{




//! The abstract class TShared is the root class of <br>
//! managed objects. TShared objects are managed <br>
//! by a memory manager based on reference <br>
//! counting. They have handle semantics. In other <br>
//! words, the reference counter is transparently <br>
//! incremented and decremented according to the <br>
//! scope of handles. When all handles, which <br>
//! reference a single object are out of scope, the <br>
//! reference counter becomes null and the object is <br>
//! automatically deleted. The deallocated memory is <br>
//! not given back to the system though. It is <br>
//! reclaimed for new objects of the same size. <br>
//! Warning <br>
//! This memory management scheme does not <br>
//! work for cyclic data structures. In such cases <br>
//! (with back pointers for example), you should <br>
//! interrupt the cycle in a class by using a full C++ <br>
//! pointer instead of a handle. <br>
public ref class OCMMgt_TShared : OCStandard_Transient {

protected:
  // dummy constructor;
  OCMMgt_TShared(OCDummy^) : OCStandard_Transient((OCDummy^)nullptr) {};

public:

// constructor from native
OCMMgt_TShared(Handle(MMgt_TShared)* nativeHandle);

// Methods PUBLIC


virtual /*instead*/  void Delete() override;

~OCMMgt_TShared()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif