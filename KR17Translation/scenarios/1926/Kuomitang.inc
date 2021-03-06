###########################
#Country definition for CHI
###########################
province = { id = 1367 naval_base = 3 air_base = 2 } 
province = { id = 1369 naval_base = 4 air_base = 4 anti_air = 1 } 

##################
#Country main data
##################


country = {
    tag = CHI  
    control = GER

        ai = "kaiserreich\1926_CHI.ai"
        flag_ext = _26
	name = CHI26
        ai = "kaiserreich\Republican China.ai"
	
	policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 4
        political_left = 4
        freedom = 3
        free_market = 3
        professional_army = 3
        defense_lobby = 8
        interventionism = 8
    }
        free = { ic = 50 supplies = 20 }
#### cabinet

headofstate = { type = 9 id = 183581 }
headofgovernment = { type = 9 id = 183580 }

#### Resource Reserves
	energy	= 200  metal = 200 rare_materials = 200 oil = 200 supplies = 4000
	money = 50

	manpower = 150

	capital = 	1369



    ownedprovinces =      {
		1369 1373 1377 1367 1365 1374 1383 1368 1370 1379 1380 1382 1378 1311 1354 1375 1356 1359 1360 1349 1355
                1305 1306 1308 1309 1312 1304 1307 1376
	 }
    controlledprovinces = {
		1369 1373 1377 1367 1365 1374 1383 1368 1370 1379 1380 1382 1378 1311 1354 1375 1356 1359 1360 1349 1355
                1305 1306 1308 1309 1312 1304 1307 1376
	  }
    nationalprovinces =   {
		1369 1373 1377 1367 1365 1374 1383 1368 1370 1379 1380 1382 1378 1311 1354 1375 1356 1359 1360 1349 1355
                1305 1306 1308 1309 1312 1304 1307 1376
	}

diplomacy = {
relation = { tag = CHI value = -10 }
relation = { tag = CSX value = 10  }
relation = { tag = CXB value = -75 }
relation = { tag = CYN value = -25 }
relation = { tag = CGX value = -75 }
relation = { tag = GER value = -55 }
relation = { tag = RUS value = 40  }
relation = { tag = PRI value = 30  }
relation = { tag = JAP value = 50  }
}


	
	techapps = {


# Group E 1936 techs
#######################
#Aircrafts
4500 4510 4520 4530 #Interwar Fighter 
4600 4610 4620 4630 4120 #Interwar Bomber
4300 4310 4320 4330 #Multirole fighter

#Armour & Artillery
2860 #Interwar Armoured Car  
2290 2300 2310 2900 2910 2920 #1924FA
7600 7610 2620 2010 2630 #SW Tank 
2800 2450 #1921 Static Anti-Air Artillery 
2810 #1918 AA Bde

#Infantry
1010  1020 1030 1040 1050 1060 1070 1080 #1926 Infantry Division 
1160 1170 1180 1190 1200 1210 1220 1230 1240 #1930 Mountain Division
1910 1920 1930 1940 1950 1960 1970 #Interbellum 1930 Supply 
13060 13070 13080 1310 1320 1330 1340 1350 1350 #1924 Cavalry Division 
1830 1840 #Engineers

#Industrial
5700 #Early Agriculture
5600 #Medicine
5810 5820 #Manufactoring
5800 5080 # Basic Construction Engineering

#Naval
3810 #Troopships

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010
# Land Doctrines WW1 - Entente Line (default)
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660

	}

#########  OOB (...)



	landunit = {
	location = 1369
        id = { type = 29500 id = 1 }
	name = "1. Jun"
		division = {
	        id = { type = 29500 id = 2 }
		name = "1. Jun"
		type = militia
		model = 3
		}
		}

        landunit =  {   
  location = 1360
   name   = "2. Jun"  
   id    = {   type = 29500 id = 3   }  
   Division = {   
    
    id     = {   type = 29500 id = 4   }  
    name    = "2. Jun"  
    type    = infantry  
    model   = 5
    extra = rocket_artillery
    brigade_model = 4
      }  
     } 

       landunit =  {   
  location = 1359
   name   = "3. Jun"  
   id    = {   type = 29500 id = 5   }  
   Division = {   
    
    id     = {   type = 29500 id = 6   }  
    name    = "3. Jun"  
    type    = infantry  
    model   = 5
      }  
     } 

       landunit =  {   
  location = 1349
   name   = "4. Jun"  
   id    = {   type = 29500 id = 7   }  
   Division = {   
    
    id     = {   type = 29500 id = 8   }  
    name    = "4. Jun"  
    type    = infantry  
    model   = 5
      }  
     } 

        landunit =  {   
  location = 1355
   name   = "5. Jun"  
   id    = {   type = 29500 id = 9   }  
   Division = {   
    
    id     = {   type = 29500 id = 10   }  
    name    = "5. Jun"  
    type    = infantry  
    model   = 5
      }  
     } 

       landunit =  {   
  location = 1308
   name   = "6. Jun"  
   id    = {   type = 29500 id = 11   }  
   Division = {   
    
    id     = {   type = 29500 id = 12   }  
    name    = "6. Jun"  
    type    = infantry  
    model   = 5
      }  
     } 

      landunit =  {   
  location = 1309
   name   = "7. Jun"  
   id    = {   type = 29500 id = 13   }  
   Division = {   
    
    id     = {   type = 29500 id = 14   }  
    name    = "7. Jun"  
    type    = infantry  
    model   = 5
      }  
     } 

      landunit =  {   
  location = 1304
   name   = "8. Jun"  
   id    = {   type = 29500 id = 15   }  
   Division = {   
    
    id     = {   type = 29500 id = 16   }  
    name    = "8. Jun"  
    type    = infantry  
    model   = 5
      }  
     } 

      landunit =  {   
  location = 1307
   name   = "9. Jun"  
   id    = {   type = 29500 id = 17   }  
   Division = {   
    
    id     = {   type = 29500 id = 18   }  
    name    = "9. Jun"  
    type    = infantry  
    model   = 5
    extra = rocket_artillery
    brigade_model = 4
      }  
     } 

   landunit =  {   
  location = 1305
   name   = "10. Jun"  
   id    = {   type = 29500 id = 19   }  
   Division = {   
    id     = {   type = 29500 id = 20   }  
    name    = "10. Jun"  
    type    = infantry  
    model   = 5
      }  
     } 

     landunit =  {   
  location = 1382
   name   = "11. Jun"  
   id    = {   type = 29500 id = 21   }  
   Division = {   
    id     = {   type = 29500 id = 22   }  
    name    = "11. Jun"  
    type    = infantry  
    model   = 5
      }  
     } 

    landunit =  {   
  location = 1376
   name   = "12. Jun"  
   id    = {   type = 29500 id = 23   }  
   Division = {   
    id     = {   type = 29500 id = 24   }  
    name    = "12. Jun"  
    type    = infantry  
    model   = 5
      }  
     } 

  landunit =  {   
  location = 1379
   name   = "13. Jun"  
   id    = {   type = 29500 id = 25   }  
   Division = {   
    id     = {   type = 29500 id = 26   }  
    name    = "13. Jun"  
    type    = infantry  
    model   = 5
      }  
     } 

  landunit =  {   
  location = 1369
   name   = "14. Jun"  
   id    = {   type = 29500 id = 27   }  
   Division = {   
    id     = {   type = 29500 id = 28   }  
    name    = "14. Jun"  
    type    = infantry  
    model   = 5
      }  
     } 

  landunit =  {   
  location = 1308
   name   = "15. Jun"  
   id    = {   type = 29500 id = 29   }  
   Division = {   
    id     = {   type = 29500 id = 30   }  
    name    = "15. Jun"  
    type    = infantry  
    model   = 5
      }  
     } 

  landunit =  {   
  location = 1304
   name   = "16. Jun"  
   id    = {   type = 29500 id = 31   }  
   Division = {   
    id     = {   type = 29500 id = 32   }  
    name    = "16. Jun"  
    type    = infantry  
    model   = 5
      }  
     } 

  landunit =  {   
  location = 1309
   name   = "17. Jun"  
   id    = {   type = 29500 id = 33   }  
   Division = {   
    id     = {   type = 29500 id = 34   }  
    name    = "17. Jun"  
    type    = infantry  
    model   = 5
      }  
     } 

  landunit =  {   
  location = 1354
   name   = "18. Jun"  
   id    = {   type = 29500 id = 35   }  
   Division = {   
    id     = {   type = 29500 id = 36   }  
    name    = "18. Jun"  
    type    = infantry  
    model   = 5
    extra = rocket_artillery
    brigade_model = 4
      }  
     } 

	

}  