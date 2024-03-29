// BinaryTreeDriver.cpp

// Exercise the BinaryTree class

// tom bailey   26 mar 01

// Modified to implement a menu driven system that manipulates
//   binary trees.
// Rebuilds the tree as a random shape of given size.
// Displays the tree with connecting lines between nodes.

// to be implemented:
//   size, leaves, leftmost, and other recursive methods

// tom bailey   12 nov 01

// cleaned for lab use
// tom bailey   0820  18 oct 2010
// tom bailey   0930  4 apr 2011
// tom bailey   0740  25 feb 2013




#include <iostream>
#include <string>
//#include <vector>
#include "stdafx.h"
#include "BinaryTree.h"
using namespace std;


void 
   getRequest( string & request )
{
   cout << "Enter request: ";
   cin >> request;
}


int
   main()
{
	
   randomizeSeed();

   BinaryTree theTree;

   string request;
   getRequest( request );

   while( request != "quit" )
   {
      if( request == "build" )
      {
         long treeSize;
         cin >> treeSize;
         theTree.build( treeSize );
      }

      else if( request == "display" )
      {
         theTree.display( cout );
      }

      else if( request == "size" )
      {
         cout << "size is " << theTree.size() << endl;
      }

      else if( request == "height" )
      {
         cout << "height is " << theTree.height() << endl;
      }

      else if( request == "leaves" )
      {
         cout << "leaves is " << theTree.leaves() << endl;
      }

      else if( request == "leftmost" )
      {
         cout << "leftmost is " << theTree.leftmost() << endl;
      }

      else if( request == "preorder" )
      {
         vector< short > traversal = theTree.preorder();
         cout << "preorder is ";
         for( unsigned long i=0; i<traversal.size(); ++i )
         {
            cout << traversal.at(i) << "  ";
         }
         cout << endl;
      }

	  else if (request == "postorder")
	  {
		  vector< short > traversal_p = theTree.postorder();
		  cout << "postorder is ";
		  for (unsigned long i = 0; i<traversal_p.size(); ++i)
		  {
			  cout << traversal_p.at(i) << "  ";
		  }
		  cout << endl;
	  }


      else
      {
         cout << "Known requests: build <size>, display, size, " 
            << "height, leaves, postorder" << endl;
         cout << "                leftmost, preorder, quit" << endl;
      }

      getRequest( request );
   }
   
   return 0;
}