1. mkdir Coordinates-Location 
                                      cd Coordinates-Location 
2. mkdir North
                                      cd North
                                     i) echo 9° > NDegree.txt
                                     ii) echo 5" > NMinutes.txt
                                     iii) echo "38.1">NSeconds.txt
                                     iv) cat NDegree.txt NMinutes.txt NSeconds.txt >> NorthCoordinate.txt
                                      cd ..
                                     v) cp North/NorthCoordinate.txt . 
                                        mv NorthCoordinate.txt North.txt
                                        rm -r North/NorthCoordinate.txt
3. cd ..
4. mkdir East
                                      cd East
                                     i) echo 76° > EDegree.txt
                                     ii) echo 29" > EMinutes.txt
                                     iii) echo "30.8">ESeconds.txt
                                     iv) cat ENDegree.txt EMinutes.txt ESeconds.txt >> EastCoordinate.txt
                                      cd ..
                                     v) cp East/EastCoordinate.txt . 
                                        mv EastCoordinate.txt East.txt
                                        rm -r East/EastCoordinate.txt
5. cat North.txt East.txt >> Location-Coordinate.txt
Git commands used: 1. git clone https://github.com/flyhigh-tej/amfoss-tasks.git
                   2. git add SOLUTION.md
                   3. git status   
                   4. git config --global user.mail tejasvinn.vimal@gmail.com
                   5. git config --global user.name flyhigh-tej
                   6. git commit -m Adds amFOSS Tasks
                   7. git push origin main
