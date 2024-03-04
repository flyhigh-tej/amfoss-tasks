# Aerglo Mars
A few researchers are working on analyzing the Mars images. After researching a bit they found NASA gathers this data from their Curiosity, Opportunity, and Spirit rovers. Each rover has its own set of photos stored in the database, which can be queried separately. Photos are organized by the sol (Martian rotation or day) on which they were taken, counting up from the rover's landing date. Along with querying by date, results can also be filtered by the camera.  

As a developer, you need to help them create a Python-based CLI app to fetch the image based on two parameters - date and id. You need to use the date parameter for the API query and then the ID for an image captured by the specific rover.

References - 
1) https://api.nasa.gov/ (here you can generate the API keys and learn more about Mars Rover Photos)
2) https://realpython.com/command-line-interfaces-python-argparse/
3) Example query - https://api.nasa.gov/mars-photos/api/v1/rovers/curiosity/photos?earth_date=2015-6-3&api_key=DEMO_KEY

In place of DEMO_KEY put the one which you generated from https://api.nasa.gov/
