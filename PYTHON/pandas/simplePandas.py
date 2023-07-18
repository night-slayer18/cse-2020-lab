import pandas as pd
import numpy as np

#simple pandas series
obj = pd.Series([4, 7, -5, 3])
print(obj)

obj1 = pd.Series([4, 7, -5, 3], index=['d', 'b', 'a', 'c'])
print(obj1)

#dixtionary to series
data = {"ohio": 35000, "Texas": 71000, "Oregon": 16000, "Utah": 5000}
obj2 = pd.Series(data)
print(obj2)
print(obj2.dtype)
print(obj2.empty)
print(obj2.ndim)
print(obj2.shape)
print(obj2.size)
print(obj2.values)
print(obj2.head(2))
print(obj2.tail(2))

# pandas dataframe
# creating dataframe from dictionary
data = {"state": ["Ohio", "Ohio", "Ohio", "Nevada", "Nevada", "Nevada"], "year": [2000, 2001, 2002, 2001, 2002, 2003], "pop": [1.5, 1.7, 3.6, 2.4, 2.9, 3.2]}
frame = pd.DataFrame(data)
print(frame)

#creating dataframe from dictionary with index
frame1 = pd.DataFrame(data, index=["one", "two", "three", "four", "five", "six"])
print(frame1)

#creating dataframe from dictionary with index and columns
frame2 = pd.DataFrame(data, index=["one", "two", "three", "four", "five", "six"], columns=["year", "state", "pop", "debt"])
print(frame2)

#dealing with rows and columns
#columns selection
print(frame[["state", "pop"]])

#rows selection
print(frame2.loc["five"])
print(frame.iloc[0])

# #adding new column
frame2["debt"] = 16.5
print(frame2)

#dealing with missing values
print(frame2.notnull())
print(frame2.isnull())

#filling missing values with fillna, replace, interpolate, dropna

dict = {"First Score":[100, 90, np.nan, 95], "Second Score": [30, 45, 56, np.nan], "Third Score":[np.nan, 40, 80, 98]}
df = pd.DataFrame(dict)
print(df)

#fillna
print(df.fillna(0))

#replace
print(df.replace(np.nan, -1))

#interpolate
print(df.interpolate())

#dropna
print(df.dropna())