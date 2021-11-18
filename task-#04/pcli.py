import argparse
import requests

if __name__ == "__main__":
    parser = argparse.ArgumentParser(description="iD Required" ,epilog="Thankyou for using the Program")
    parser.add_argument("id",type=int, help="id")
    parser.add_argument("c",help="Date")
    parser.add_argument("b",help="Month")
    parser.add_argument("a",help="Year")
    args = parser.parse_args()

    s=args.a+"-"+args.b+"-"+args.c
    url="https://api.nasa.gov/mars-photos/api/v1/rovers/curiosity/photos?earth_date=2015-6-3&api_key=E7vuQOLJ522YcttqrCsEY957khsDqYO6KL5IfSxX"
    r=requests.get(url).json()
    img_id=""
    for i in range(0,4,1) :
      if r['photos'][i]['id'] == args.id : 
          if r['photos'][i]['rover']['landing_date'] == s :
              img_id= r['photos'][i]['img_src']

if (img_id=="")  :
  print('Image not found for the entered Id:',id,'and Landing Date:',s)
else :
  print("The URL of the deteted image:",img_id)  
  



    
