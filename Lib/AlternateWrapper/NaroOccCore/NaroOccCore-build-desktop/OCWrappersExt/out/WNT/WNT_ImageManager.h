// File generated by CPPExt (Transient)
//
#ifndef _WNT_ImageManager_OCWrappers_HeaderFile
#define _WNT_ImageManager_OCWrappers_HeaderFile

// include the wrapped class
#include <WNT_ImageManager.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "WNT_SequenceOfImage.h"
#include "WNT_TypeOfImage.h"


namespace OCNaroWrappers
{

ref class OCWNT_Image;
ref class OCWNT_WDriver;
ref class OCWNT_Window;


//! This class defines image management <br>
public ref class OCWNT_ImageManager : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCWNT_ImageManager(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCWNT_ImageManager(Handle(WNT_ImageManager)* nativeHandle);

// Methods PUBLIC

//! Creates a class instance <br>
OCWNT_ImageManager(WNT_WindowPtr aWindow);

//! Sets image format for output. <br>
 /*instead*/  void SetFormat(OCWNT_TypeOfImage aFormat) ;

//! Adds <anImage> to manager. <br>
 /*instead*/  void Add(OCNaroWrappers::OCWNT_Image^ anImage) ;

//! returns Image stored at <anIndex>. <br>
 /*instead*/  OCWNT_Image^ Image(Standard_Integer anIndex) ;

//! Loads image from file and returns its index in the <br>
//!          sequence. <br>
//!  Warning: Returns 0 if loading was failed. <br>
 /*instead*/  Standard_Integer Load(System::String^ aFileName) ;

//! Stories image to the file according to <myFormat> <br>
//!          class field. Returns True on success, otherwise <br>
//!          returns False. <br>
 /*instead*/  System::Boolean Save(System::String^ aFileName, Standard_Integer aX, Standard_Integer aY, Standard_Integer aWidth, Standard_Integer aHeight) ;

//! Stories contents of the double buffer window pixmap. <br>
//!          See "Save" method. <br>
 /*instead*/  System::Boolean SaveBuffer(System::String^ aFileName, Standard_Integer aX, Standard_Integer aY, Standard_Integer aWidth, Standard_Integer aHeight) ;

//! Displays the image according to the DoubleBuffer state <br>
//!          of the associated window. <br>
 /*instead*/  void Draw(Standard_Integer anIndex, Standard_Integer Xc, Standard_Integer Yc, Standard_Integer aWidth, Standard_Integer aHeight, Standard_Real anAngle) ;

//! Deletes an image at index <anIndex>. <br>
 /*instead*/  void Delete(Standard_Integer anIndex) ;

//! Places an image to the trash <br>
 /*instead*/  void Discard(Standard_Integer anIndex) ;

//! Scales the specified image. <br>
 /*instead*/  System::IntPtr Scale(Standard_Integer anIndex, Standard_Real aScaleX, Standard_Real aScaleY, System::Boolean aReplace) ;

//! Returns number of loaded images. <br>
 /*instead*/  Standard_Integer Size() ;

//! Returns image handle. <br>
 /*instead*/  System::IntPtr ImageHandle(Standard_Integer anIndex) ;

//! Returns image dimensions. <br>
 /*instead*/  void Dim(Standard_Integer anIndex, Standard_Integer& aWidth, Standard_Integer& aHeight) ;

//! Returns image's hash code. <br>
virtual /*instead*/  Standard_Integer HashCode(Standard_Integer anIndex) override;

//! Returns image's index. <br>
 /*instead*/  Standard_Integer Index(Standard_Integer aHashCode) ;

//! Returns hash code of the string. <br>
 /*instead*/  Standard_Integer StringHashCode(System::String^ aString) ;

//! Creates new empty image and returns its index <br>
 /*instead*/  Standard_Integer Open(System::IntPtr aDC, Standard_Integer aWidth, Standard_Integer aHeight, Standard_Integer aHashCode) ;

~OCWNT_ImageManager()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
