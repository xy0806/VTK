/*=========================================================================

  Program:   Visualization Toolkit
  Module:    vtkCyberReader.h
  Language:  C++
  Date:      $Date$
  Version:   $Revision$


Copyright (c) 1993-1998 Ken Martin, Will Schroeder, Bill Lorensen.

This software is copyrighted by Ken Martin, Will Schroeder and Bill Lorensen.
The following terms apply to all files associated with the software unless
explicitly disclaimed in individual files. This copyright specifically does
not apply to the related textbook "The Visualization Toolkit" ISBN
013199837-4 published by Prentice Hall which is covered by its own copyright.

The authors hereby grant permission to use, copy, and distribute this
software and its documentation for any purpose, provided that existing
copyright notices are retained in all copies and that this notice is included
verbatim in any distributions. Additionally, the authors grant permission to
modify this software and its documentation for any purpose, provided that
such modifications are not distributed without the explicit consent of the
authors and that existing copyright notices are retained in all copies. Some
of the algorithms implemented by this software are patented, observe all
applicable patent law.

IN NO EVENT SHALL THE AUTHORS OR DISTRIBUTORS BE LIABLE TO ANY PARTY FOR
DIRECT, INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES ARISING OUT
OF THE USE OF THIS SOFTWARE, ITS DOCUMENTATION, OR ANY DERIVATIVES THEREOF,
EVEN IF THE AUTHORS HAVE BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

THE AUTHORS AND DISTRIBUTORS SPECIFICALLY DISCLAIM ANY WARRANTIES, INCLUDING,
BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS FOR A
PARTICULAR PURPOSE, AND NON-INFRINGEMENT.  THIS SOFTWARE IS PROVIDED ON AN
"AS IS" BASIS, AND THE AUTHORS AND DISTRIBUTORS HAVE NO OBLIGATION TO PROVIDE
MAINTENANCE, SUPPORT, UPDATES, ENHANCEMENTS, OR MODIFICATIONS.


=========================================================================*/
// .NAME vtkCyberReader - read Cyberware laser digitizer files
// .SECTION Description
// vtkCyberReader is a source object that reads a Cyberware laser digitizer
// file. (Original source code provided courtesy of Cyberware, Inc.)
// WARNING this does not work under Windows95, 98 or NT.

#ifndef __vtkCyberReader_h
#define __vtkCyberReader_h

#include <stdio.h>
#include "vtkPolyDataSource.h"

class VTK_EXPORT vtkCyberReader : public vtkPolyDataSource 
{
public:
  vtkCyberReader();
  ~vtkCyberReader();
  static vtkCyberReader *New() {return new vtkCyberReader;};
  const char *GetClassName() {return "vtkCyberReader";};
  void PrintSelf(ostream& os, vtkIndent indent);

  // Description:
  // Specify Cyberware file name.
  vtkSetStringMacro(FileName);
  vtkGetStringMacro(FileName);

protected:
  void Execute();
  char *FileName;
};

#endif


