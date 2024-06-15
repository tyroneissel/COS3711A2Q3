# COS3711A2Q3
 C++ Music Album Program
 
Question 3
Use Qt’s model/view framework to store and display music album information. The following
information should be stored in your own custom model (that inherits from
QAbstractTableModel):
 composer,
 album name,
 cost (stored as a double, and
 a rating (out of 100, store as an int).
Your sub-classed model should be a well behaved, editable model (and you will need to add all
the necessary functions to your model). The information should be displayed in a standard
QTableView.
The following functionality should be included.
 There should be a header row.
 The user should be able to add data to the model.
 The replacement value should always display the cents (even as .00). 