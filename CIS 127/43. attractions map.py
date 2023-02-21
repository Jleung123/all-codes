#Name:  Jeremy Leung
#Email: jeremy.leung59@myhunter.cuny.edu
#Date: November 2nd, 2021
#This program will create a html doc with a map of nyc and a marker at chelsea pier

#Import the folium package for making maps and pandas to read csv files
import folium
import pandas as pd

#get name of file from user input
input_name = input("Enter CSV file name: ")

#get name of output file from user input
out = input("Enter output file: ")

#read the cvs file and set it to the variable file_name
file_name = pd.read_csv(input_name)

#Create a map, centered (40.7420577, -74.0101494), and zoomed out a bit:
attraction_map = folium.Map(location=[40.768731, -73.964915],zoom_start=11,tiles="Cartodb Positron")

#get the latitude and longitude for each marker and the location name
for index,row in file_name.iterrows():
    #print("hello")
    lat = row["LATITUDE"]
    lon = row["LONGITUDE"]
    name = row["NAME"]
    folium.Marker(location = [lon, lat], popup = name).add_to(attraction_map)
    
#Save the map:
attraction_map.save(outfile=out)
