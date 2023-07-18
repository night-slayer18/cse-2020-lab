import pandas as pd
import numpy as np

data = {"name":[ "John", "Anna", "Peter", "Linda"], "location": ["New York", "Paris", "Berlin", "London"], "age": [24, 24, 53, 33]}
df = pd.DataFrame(data)
df = df.set_index("name")
print(df)
df.to_csv("test.csv")
df1= pd.read_csv("test.csv",index_col="name")
print(df1)
print(df1.describe())
print(df1.dtypes)
print("sum:",df1['age'].sum())
print("mean:",df1['age'].mean())
print("median:",df1['age'].median())
print("mode:",df1['age'].mode())
print("min:",df1['age'].min())
print("max:",df1['age'].max())
print("count:",df1['age'].count())
print("std:",df1['age'].std())
print("variance:",df1['age'].var())
print("skew:",df1['age'].skew())
print("kurt:",df1['age'].kurt())

print(df[df['age'] > 30])
print(df[df['age'] > 30]['location'])
print(df.iloc[1:4,[0,1]])