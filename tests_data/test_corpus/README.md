# Corpus Testing Examples

These examples provide testing of cle/corpus (currently defined for ELF) are worked on at [smeagle-examples](https://github.com/buildsi/smeagle-examples)
for the following two tools (and fork of cle):

 - [cle](https://github.com/vsoch/cle)
 - [spliced](https://github.com/buildsi/spliced)
 
For each test case (subdirectory here) we have facts.json that have been generated (and manually validated)
and for the test we generate them again and test against this ground truth.


## Organization

Each subfolder here is a type of structure or design that can be used to generate
facts. The binaries are built with g++ 12.1 (from a container) and provided here
for a ground truth. To manually build on your local machine with whatever compiler is available,
there are Makefile in each test subdirectory.
