/*******************************************************************
                        Working with Vector

********************************************************************/

#include<iostream>
#include<vector>

using namespace std;

// display function which works with all type of datatype
// creating using templates
template < class T > 
        void
display (vector < T > &v)
{
  cout << endl << "Diplaying Dynamic typed vector :: ";
  int i;
  for (i = 0; i < v.size (); ++i)
    cout << v[i] << " ";
  cout << endl;
}

void
display1 (vector < int >&v)
{
  cout << endl << "Vector Elements are : ";
  for (int i = 0; i < v.size (); ++i)
    cout << v[i] << " ";	// way One 
  // cout<<v.at(i)<<" "; // Way Two using at function 
}

// using vector Iterator
void
display2 (vector < int >&v)
{
  cout << endl << "Vector Elements are : ";
  // Vector Iterator
  vector < int >::iterator i;
  for (i = v.begin (); i != v.end (); ++i)
    cout << *i << " ";

  cout << endl << "last Element of the vector : " << *(--v.cend ());
}

void
displayFloat (vector < float >&v)
{
  cout << endl << "Float values : ";
  for (int i = 0; i < v.size (); i++)
    cout << v.at (i) << " ";

  cout << endl;
}

void
reverse (vector < int >&v)
{

  cout << endl << "Revese order of vector : ";
  int i;
  for (i = v.size () - 1; i >= 0; --i)
    cout << v.at (i) << ' ';

  cout << endl;
}


vector < int >
createVector (int size)
{
  vector < int >v;
  return v;
}

int
main ()
{
    // Ways to create vector 
    vector < int >vec;		// ZERO length vector
    vector < int >vec1 (4);	// 4-Element integer vector
    vector < char >vec2 (12);	// 12-character length vector
    vector < char >vec3 (vec2);	// 12-character length vector from vec2
    vector < int >vec4 (6, 3);	// 6-element vector of 3res
    
    // vec2.push_back ('2');
    // vec3.push_back ('s');
    
    // display (vec4);
    
    // vec4[3] = 2;
    // display (vec4);
    
    for (int i = 1; i <= 5; i++)
        vec.push_back(i);
    
    display(vec);

    vector<int> newV(vec.begin(), vec.end()); // A way to copy a vector ..
    
    display(newV);

    int myList[] = {12,34,563,12};
    vector<int> newVec(myList, myList + sizeof(myList) / sizeof(int));
    
    display(newVec);
    // cout<<newVec;
    // cout<<endl<<(mylist + sizeof(mylist) ) / sizeof(int);

  // int element;

  // for(int i = 0; i < 5; ++i){
  //     cout<<"Enter an element to add to this vector : ";
  //     cin>>element;
  //     vec.push_back(element);
  // }

  // display1(vec);

  // // vec.pop_back();
  // vector<int> :: iterator iter = vec.begin();
  // vec.insert(iter,566);

  // vec.insert(iter+3, 696);

  // // Number's of time insert the value
  // vec.insert(iter+4, 3, 100); // This will insert the 100 3 time at 4th position


  // display2(vec);


  // reverse(vec);

  // vector<int> v = createVector(10);
  // cout<<endl;

  // creating vector of float
  // vector<float> vf;
  // float val;
  // for(int j = 0 ; j < 2; j++ ){
  //     // cin>>val;
  //     cout<<"Enter the value : ";
  //     cin>>val;
  //     vf.push_back(val);
  // }

  // displayFloat(vf);




  return 0;
}

