## Main Goal
  #### classify files in .cpp and .h  files
  <!-- 2. classify files in .txt and .md files -->

## Analyze the given problem
  #### Whether if the two files are identical in terms of its texts and functionalities as a single program

    - white spaces and comments('//', '/**/') can be ignored
      while special characters should be kept and read

    - When .cpp or .h files go through the classification program,
      analization in above helps files keep their features

    - Even though there is a tiny difference, for example,
      difference derived from one typo, two files cannot be identical

   #### Sub Problems
    - How to read files
      * how to read two different named files
      * identically named files cannot be tested with this program,
        since it is not possible identically named files exist in one folder
      * use fstream

    - How to store a stream of characters
      * Possible way: using string, vector token, array
      * Keep and read special characters
      * character validation to store string in a variable
      * Ignore white spaces(remove white spaces) and comments('//', '/**/')

    - How to ignore comments
      * ignore a section start with /* and end with */
      * ignore a section start with // and end with a line change

    - How to compare each characters 
      * based on stored string
      * based on its index number
      * stop when difference found
      * stop when no difference found

    - How to print difference between two files (based on comparison)
      * when both are not identical, print "Not identical"
      * when both are identical, print "Identical"

## Plan & Documentation
  1. prioritization (need ETC)
    1. read .cpp or .h file
    2. 
  2. Test Plan for every each steps
  3. Algorithms or Libraries
    1. iostream, fstream

## Implementation
  #### do
    1. control structure
      1. Functional vs. OOP
      2. STL vs. UDL
    2. Data Structure
      1. Array, Struct, Dynamic, Static, ... etc

  #### while (Refactoring)

 