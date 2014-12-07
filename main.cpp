//****************************************************************************
//
//
//
//****************************************************************************
 
 
 
 
// ===========================================================================
//                               Include Libraries
// ===========================================================================
#include <stdlib.h>
#include <stdio.h>



// ===========================================================================
//                             Include Project Files
// ===========================================================================
#include "Node.h"
#include "Link_list.h"


// ===========================================================================
//                         Declare Miscellaneous Functions
// ===========================================================================








// ===========================================================================
//                                   The Main
// ===========================================================================
int main(int argc, char* argv[])
{

	Image imGarg;
	imGarg.ppm_read_from_file("gargouille.ppm");
	Node ngarg = Node(imGarg);

	Image imMatt;
	imMatt.ppm_read_from_file("matt.ppm");
	Node nmatt = Node(imMatt);
	//imMatt.ppm_desaturate();
	//imMatt.ppm_write_to_file("matt_BW.ppm");

	ngarg.getObj();
	nmatt.getObj();

	printf("adresse du noeud matt %p\n", (&nmatt));
	//ngarg.setNext(nmatt);

  	Link_list swagList;
  	swagList.append(ngarg);

  	return 0;
}



// ===========================================================================
//                         Define Miscellaneous Functions
// ===========================================================================

