#Name:  Jeremy Leung
#Email: jeremy.leung59@myhunter.cuny.edu
#Date: November 2nd, 2021
#This program will create a html doc with a map of nyc with all the wifi hotspot

#Import the folium package for making maps and pandas to read csv files
import folium
import pandas as pd

#get name of file from user input
input_name = input("Please enter the name of the input file: ")

#get name of output file from user input
out = input("Please enter the name of the output file: ")

#get name of borough from user input
borough = input("Please enter the name of the borough: ")

#read the cvs file and set it to the variable file_name
file_name = pd.read_csv(input_name)

boro = file_name.groupby('City').get_group(borough)

#Create a map, centered (40.768731, -73.964915), and zoomed out a bit:
HotSpotMap = folium.Map(location=[40.768731, -73.964915],zoom_start=12,tiles="Stamen Watercolor")

#get the latitude and longitude for each marker and the location name
for index,row in boro.iterrows():
    #print("hello")
    lat = row["Latitude"]
    lon = row["Longitude"]
    name = row["Location"]
    folium.Marker(location = [lat, lon], popup = name).add_to(HotSpotMap)
    
#Save the map:
HotSpotMap.save(outfile=out)
