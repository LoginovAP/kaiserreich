


country = {
    tag = JAP  

ai = "kaiserreich\Japan.ai"

	policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 6
        political_left = 3
        freedom = 6
        free_market = 5
        professional_army = 3
        defense_lobby = 6
        interventionism = 6

    }

#### cabinet

headofstate = { type = 9 id = 5001 }
headofgovernment = { type = 9 id = 5218 }
  foreignminister = { type = 9 id = 5212 }
  armamentminister = { type = 9 id = 5216 }
  ministerofsecurity = { type = 9 id = 5217 }
  ministerofintelligence = { type = 9 id = 5130 }
  chiefofstaff = { type = 9 id = 5214 }
  chiefofarmy = { type = 9 id = 5213 }
  chiefofnavy = { type = 9 id = 5215 }        
  chiefofair = { type = 9 id = 5010 }

#### Resource Reserves

	manpower = 735

        SpyInfo  = {  country = "JAP" NumberOfSpies = 5  } 

	# Resource Reserves
	energy	=		1000 
	metal	= 		1000	
	rare_materials =	500	
	oil =			500	
	supplies =		500
	money = 		100

	capital = 1552




    ownedprovinces =      {
     1543 1564 1544 1545 1549 1551 1550 1556 1552 1557 1558 1553 1554 1559 1560 1561 1662 1661 1562 1563 1672 1362 1361 1364 1225 1226 
     1227 1223 1221 1228 1233 1232 1231 1230 1224 1219 1542 1555 1547 1548 1546 1664 1663 1541 
     # Sakhalin 
     1363 1229 1222 

     #Japan in China    
     1240 1236 1235 1216
}



controlledprovinces = {
1543 1564 1544 1545   1549 1551 1550 1556 1552 1557 1558 1553 1554 1559 1560 1561 1662 1661 1562 1563 1672 1362 1361 1364 1225 1226 
               1227 1223 1221 1228 1233 1232 1231 1230 1224 1219 1542 1555 
     1547 1548 1546 1664 1663 1541 
 # Sakhalin 
 1363 1229 1222 
 
 #Japan in China    
 1240 1236 1235 1216

	  }
    nationalprovinces =   {
		1543 1544 1545 1549 1551 1550 1556 1552 1557 1558 1553 1554 1559 1560 1561 1662 1661 1562 1563 1672 1555 1542  
               1683 1664 1564 1663 
     1547 1548 1546 1541
 1228 1233 1232 1231 1230 # South Korea 
 1223 1221 1226 1227 1224 1225 # North Korea 
 1229 1222 
	}

claimedprovinces = {
		1219 
	}

diplomacy = {

relation = {   tag =    BEL	value = 		-50	   }  
relation = {   tag =  	BLR	 value =		-20	   }  
relation = {   tag =  	BUL	value = 		-30	   }  
relation = {   tag =  	GER	 value =		-80	   }  
relation = {   tag =  	LAT	value = 		-40	   }  
relation = {   tag =  	LIT	 value =		-20	   }  
relation = {   tag =  	POL	value = 		-10	   }  
relation = {   tag =  	UKR	 value =		-40	   }  
relation = {   tag =  	AUS	value = 		-50	   }  
relation = {   tag =  	BOS	value = 		-20	   }  
relation = {   tag =  	CRO	 value =		-10	   }  
relation = {   tag =  	CZE	value = 		-10	   }  
relation = {   tag =  	GLD	value = 		-10	   }  
relation = {   tag =  	HUN	 value =		-50	   }  
relation = {   tag =  	HOL	 value =		40	   }  
relation = {   tag =  	ITA	value = 		-20	   }  
relation = {   tag =  	POR	value = 		20	   }  
relation = {   tag =  	SPA	value = 		-10	   }  
relation = {   tag =  	ENG	value = 		-50	   }  
relation = {   tag =  	FRA	value = 		-60	   }  
relation = {   tag =  	RSI	 value =		-20	   }  
relation = {   tag =  	AST	value = 		-50	   }  
relation = {   tag =  	CAN	value = 		80	   }  
relation = {   tag =  	GUY	value = 		40	   }  
relation = {   tag =  	NZL	 value =		-40	   }  
relation = {   tag =  	VIC	value = 		50	   }  
relation = {   tag =  	KAZ	 value =		30	   }  
relation = {   tag =  	KYG	value = 		40	   }  
relation = {   tag =  	PRI	value = 		120	 access = yes   }  
relation = {   tag =  	RUS	 value =		-50	   }  
relation = {   tag =  	AFG	 value =		20	   }  
relation = {   tag =  	OTT	 value =		-30	   }  
relation = {   tag =  	PER	value = 		20	   }  
relation = {   tag =  	CON	value = 		-40	   }  
relation = {   tag =  	IND	value = 		50	   }  
relation = {   tag =  	CHL	value = 		40	   }  
relation = {   tag =  	PRU	value = 		40	   }  
relation = {  tag =   	USA	value = 		30	   }
relation = {   tag =  	CHC	value = 		-50	   }  
relation = {   tag =  	CSX	value = 		-80	   }  
relation = {   tag =  	CXB	value = 		-30	   }  
relation = {   tag =  	MAN	 value =		160	access = yes    }  
relation = {   tag =  	MON	value = 		100	   }  
relation = {   tag =  	SIK	value = 		90	   }  

		relation = { tag = EAF value = 60 guaranteed = { day = 29 month = december year = 1935   } 	   } 
}

dormant_ministers = { 5092 5093 }
	
	techapps = {

# JAP 1936 techs
#######################
#Infantry
1010  1020 1030 1040 1050 1060 1070 1080 1090 #Early Infantry Division 
1160 1170 1180 1190 1200 1210 1220 1230 1240 #1930 Mountain
13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 #1930 Cavalry Division 
1560 1570 1580 1590 #Naval Infantry
1830 1840 1850 1860 #Engineers
1910 1920 1930 1940 1950 1960 1970 1980 #Interbellum 1930 Supply 

#Armour & Artillery
7600 7610 2620 2010 2630 2640 2646 2650 #Tanks
2860 2870 2880 2020 #Basic Armoured Car 
2290 2300 2310 2900 2910 2920 #Great War Heavy Field Artillery
2800 2450 21180 21190 #Early Static Anti-Air Artillery 
2810 2820 2510 #Basic Anti-Air Artillery Brigade

#Naval
3010 3020 3030 3040 3050 3060 #Improved Destroyer 
3110 3120 3130 3140 3150 3160 #Basic Light Cruiser
3210 3220 3230 3240 3250 3260 #Improved Heavy Cruiser
3310 3320 3330 3340 # Battle Cruiser
3410 3420 3430 3440 3450 3456 3460 3470 #Early Battleship
3510 3520 3530 #Great War Air Carrier
12100 12110 12120 12130 #Improved Light carrier
3610 3620 3630 3640 3650 #Short Range Submarine
3720 3730 3736 3740 3750 3760 3900 #Torpedo & ASW 18
3810 3820 #Troopships

#Aircrafts
7290 7300 7310 7320 4400 #CAS 
4500 4510 4520 4530 4540 4550 4010 4020 #Early Fighter
4600 4610 4620 4630 4120 4130 #Early Bomber 
4700 4710 4190 #Basic Naval Bomber
4290 # Transports
4300 4310 4320 4330 4340 #Multirole fighter
4740 4750 4760 4770 4780 #SEAPLANES
4800 4810 4820 #ww1 strategic bomber
4900 4910 4920 #CAG 34

#Industrial
5700 5710 5010 #Modern Agriculture
5810 5820 5050 5830 #manufactoring
5800 5080 5090 #Improved Construction Engineering 
5190 #Basic Oil Refining 
5310 54010 54020 54030 #Computers & cryptografi
5316 5326 5327
5600 5610 5620 #Medicine
5560 #Exp. Rocket

#Land Doctrines
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6680 6540 6910 # Great War Land Doctrines (entente)
6390 6400 6420 #Land Doctrines
14000 14010 #Improved Great War Hospital System

#Naval Doctrines
8010 8020 8030 8040 8050 8060 8070 8080 # Engagement Theories
8100 8110 8120 8150 # Naval Supremacy
8500 8510 8520 8550 8560 8600 8610 # Naval Interdiction
8900 8910 8920 8930 8940 8950 # Engagement Tactics - Fleet-in-Being column
81650 # Subsidiary Carrier Role
81700 81710 # Aerial Supremacy column
81850 81860 # Scouting Focus column
82300 82310 # Amphibious Warfare
82500 # Logistic Support

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 9040 

	}

#########  OOB (13016)
	landunit = {
	id = { type = 13016 id = 500 }
	name = "Manchuria Exp Army HQ"
	location = 1237

		division = {
		id = { type = 13016 id = 501 }
		name = "Manchuria Exp Army HQ"
		strength = 100
		type = hq
		model = 2
		}

		division = {
		id = { type = 13016 id = 537 }
		name = "36. Hoheishidan"
		strength = 100
		type = infantry
		model = 8
		extra = anti_tank
		brigade_model = 2
		}

		division = {
		id = { type = 13016 id = 538 }
		name = "37. Hoheishidan"
		strength = 100
		type = infantry
		model = 8
		extra = artillery
		brigade_model = 6
		}

		}
		


	landunit = {
	id = { type = 13016 id = 511 }
	name = "13. Hendan" 
	location = 1240

		division = {
		id = { type = 13016 id = 512 }
		name = "15. Hoheishidan"
		strength = 100
		type = infantry
		model = 8
		extra = anti_tank
		brigade_model = 2
		}

		division = {
		id = { type = 13016 id = 513 }
		name = "17. Hoheishidan"
		strength = 100
		type = infantry
		model = 8
		extra = armored_car
		brigade_model = 3
		}
		}


	landunit = {
	id = { type = 13016 id = 549 }
	name = "Mongol Army" # Changchiakou, China
	location = 1236

		division = {
		id = { type = 13016 id = 550 }
		name = "26. Hoheishidan"
		strength = 100
		type = infantry
		model = 8
		extra = anti_air
		brigade_model = 2
		}

		division = {
		id = { type = 13016 id = 551 }
		name = "2. Independent Mixed Brigade"
		strength = 50
		type = infantry
		model = 8
		}

		division = {
		id = { type = 13016 id = 552 }
		name = "1 Moukogo Kiheishidan"
		strength = 100
		type = cavalry
		model = 9
		extra = armored_car
		brigade_model = 3
		}

		division = {
		id = { type = 13016 id = 553 }
		name = "2 Moukogo Kiheishidan"
		strength = 100
		type = cavalry
		model = 9
		extra = light_armor_brigade
		brigade_model = 4
		}

		division = {
		id = { type = 13016 id = 554 }
		name = "3 Moukogo Kiheishidan"
		strength = 100
		type = cavalry
		model = 9
		extra = light_armor_brigade
		brigade_model = 4
		}

		division = {
		id = { type = 13016 id = 555 }
		name = "4 Moukogo Kiheishidan"
		strength = 100
		type = cavalry
		model = 9
		extra = light_armor_brigade
		brigade_model = 4
		}

		division = {
		id = { type = 13016 id = 556 }
		name = "5 Moukogo Kiheishidan"
		strength = 100
		type = cavalry
		model = 9
		extra = armored_car
		brigade_model = 3
		}
		}





	landunit = {
	id = { type = 13016 id = 567 }
	name = "3. Hendan" # Botanko, Manchuko
	location = 1235

		division = {
		id = { type = 13016 id = 568 }
		name = "9. Hoheishidan"
		strength = 100
		type = infantry
		model = 8
		extra = artillery
		brigade_model = 6
		}

		division = {
		id = { type = 13016 id = 569 }
		name = "12. Hoheishidan"
		strength = 100
		type = infantry
		model = 8
		extra = artillery
		brigade_model = 6
		}
		}


	landunit = {
	id = { type = 13016 id = 573 }
	name = "4. Hendan" # Songo, Manchuko
	location = 1190

		division = {
		id = { type = 13016 id = 574 }
		name = "1. Hoheishidan"
		strength = 100
		type = infantry
		model = 8
		extra = artillery
		brigade_model = 6
		}

		division = {
		id = { type = 13016 id = 575 }
		name = "2. Border Guards"
		strength = 100
		type = garrison
		model = 4
		extra = anti_air
		brigade_model = 2
		}

		division = {
		id = { type = 13016 id = 576 }
		name = "3. Border Guards"
		strength = 100
		type = garrison
		model = 4
		extra = police
		brigade_model = 1
		}
		}



	landunit = {
	id = { type = 13016 id = 577 }
	name = "5. Hendan" # Toan, Manchuko
	location = 1197

	
		division = {
		id = { type = 13016 id = 581 }
		name = "4. Border Guards"
		strength = 100
		type = garrison
		model = 4
		extra = anti_air
		brigade_model = 2
		}

		division = {
		id = { type = 13016 id = 582 }
		name = "5. Border Guards"
		strength = 100
		type = garrison
		model = 4
		extra = anti_air
		brigade_model = 2
		}

		division = {
		id = { type = 13016 id = 583 }
		name = "3 Manchuko Kiheishidan"
		strength = 50
		type = cavalry
		model = 9
		}
		}


	landunit = {
	id = { type = 13016 id = 584 }
	name = "6. Hendan" 
	location = 1541

		division = {
		id = { type = 13016 id = 585 }
		name = "14. Hoheishidan"
		strength = 100
		type = infantry
		model = 8
		extra = anti_tank
		brigade_model = 2
		}

		division = {
		id = { type = 13016 id = 586 }
		name = "23. Hoheishidan"
		strength = 100
		type = infantry
		model = 8
		extra = police
		brigade_model = 1
		}
		}



	landunit = {
	id = { type = 13016 id = 587 }
	name = "20. Hendan" 
	location = 1200

		division = {
		id = { type = 13016 id = 588 }
		name = "8. Hoheishidan"
		strength = 100
		type = infantry
		model = 8
		extra = artillery
		brigade_model = 6
		}

		division = {
		id = { type = 13016 id = 589 }
		name = "25. Hoheishidan"
		strength = 100
		type = infantry
		model = 8
		extra = artillery
		brigade_model = 6
		}

		division = {
		id = { type = 13016 id = 590 }
		name = "6. Border Guards"
		strength = 100
		type = garrison
		model = 4
		extra = police
		brigade_model = 1
		}
		}



	landunit = {
	id = { type = 13016 id = 597 }
	name = "14. Hendan" # Taiwan
	location = 1363

		division = {
		id = { type = 13016 id = 598 }
		name = "16. Hoheishidan"
		strength = 100
		type = infantry
		model = 8
		extra = engineer
		brigade_model = 3
		}

		division = {
		id = { type = 13016 id = 599 }
		name = "48. Hoheishidan"
		strength = 100
		type = infantry
		model = 8
		extra = artillery
		brigade_model = 6
		}
		}



	landunit = {
	id = { type = 13016 id = 605 }
	name = "15. Hendan" # Tokyo
	location = 1552

		division = {
		id = { type = 13016 id = 606 }
		name = "2. Hoheishidan"
		strength = 100
		type = infantry
		model = 8
		extra = engineer
		brigade_model = 3
		}

		division = {
		id = { type = 13016 id = 607 }
		name = "56. Brigade"
		strength = 50
		type = infantry
		model = 8
		extra = anti_air
		brigade_model = 2
		}
		
		division = {
		id = { type = 13016 id = 612 }
		name = "Imperial Guards"
		strength = 100
		type = infantry
		model = 8
		extra = artillery
		brigade_model = 6
		}
		}





# Imperial General Headquarters

	landunit = {
	id = { type = 13016 id = 614 }
	name = "Imperial General HQ" #Tokyo
	location = 1552

		division = {
		id = { type = 13016 id = 615 }
		name = "Imperial General HQ"
		strength = 100
		type = hq
		model = 2
		}

		division = {
		id = { type = 13016 id = 616 }
		name = "4. Hoheishidan"
		strength = 100
		type = infantry
		model = 8
		}
		}





	landunit = {
	id = { type = 13016 id = 618 }
	name = "North Japan Army"
	location = 1545

		division = {
		id = { type = 13016 id = 622 }
		name = "1. Home Guards"
		strength = 100
		type = garrison
		model = 4
		}

		division = {
		id = { type = 13016 id = 623 }
		name = "2. Home Guards"
		strength = 100
		type = garrison
		model = 4
		}
		}




	landunit = {
	id = { type = 13016 id = 626 }
	name = "Central Japan Army"
	location = 1548

		division = {
		id = { type = 13016 id = 627 }
		name = "53. Hoheishidan"
		strength = 100
		type = infantry
		model = 8
		extra = anti_air
		brigade_model = 2
		}

		
		}


	landunit = {
	id = { type = 13016 id = 632 }
	name = "West Japan Army"
	location = 1558


		division = {
		id = { type = 13016 id = 635 }
		name = "8. Home Guards"
		strength = 100
		type = garrison
		model = 4
		extra = anti_air
		brigade_model = 2
		}

		division = {
		id = { type = 13016 id = 641 }
		name = "14. Home Guards"
		strength = 100
		type = garrison
		model = 4
		extra = anti_air
		brigade_model = 2
		}
		}



	landunit = {
	id = { type = 13016 id = 642 }
	name = "East Japan Army"
	location = 1549

		division = {
		id = { type = 13016 id = 643 }
		name = "52. Hoheishidan"
		strength = 100
		type = infantry
		model = 8
		extra = anti_air
		brigade_model = 2
		}
		}



	landunit = {
	id = { type = 13016 id = 647 }
	name = "Korean Army"
	location = 1223

		division = {
		id = { type = 13016 id = 648 }
		name = "19. Hoheishidan"
		strength = 100
		type = infantry
		model = 8
		extra = anti_air
		brigade_model = 2
		}

		division = {
		id = { type = 13016 id = 649 }
		name = "20. Hoheishidan"
		strength = 100
		type = infantry
		model = 8
		extra = artillery
		brigade_model = 5
		}
		}



	landunit = {
	id = { type = 13016 id = 1200 }
	name = "South Korean Army"
	location = 1228


		division = {
		id = { type = 13016 id = 650 }
		name = "1. Korean Garrison"
		strength = 100
		type = garrison
		model = 4
		}

		division = {
		id = { type = 13016 id = 651 }
		name = "2. Korean Garrison"
		strength = 100
		type = garrison
		model = 4
		}
		}



#Pacific garrisons:
		
		landunit = {
		id = { type = 13016 id = 658 }
		name = "Amami Hendan"
		location = 1562

			division = {
			id = { type = 13016 id = 659 }
			name = "Amami Hendan"
			strength = 100
			model = 4
			type = garrison
			}
			}

		landunit = {
		id = { type = 13016 id = 660 }
		name = "Naha Hendan"
		location = 1193

			division = {
			id = { type = 13016 id = 661 }
			name = "Naha Hendan"
			strength = 100
			type = garrison
			model = 4
			}
			}

		landunit = {
		id = { type = 13016 id = 662 }
		name = "Toyohara Hendan"
		location = 1542

			division = {
			id = { type = 13016 id = 663 }
			name = "Toyohara Hendan"
			strength = 100
			type = garrison
			model = 4
			}
			}

		landunit = {
		id = { type = 13016 id = 664}
		name = "Port Arthur Hendan"
		location = 1219

			division = {
			id = { type = 13016 id = 665 }
			name = "Port Arthur Hendan"
			strength = 100
			type = garrison
			model = 4
			}
			}

		landunit = {
		id = { type = 13016 id = 667 }
		name = "Shana Hendan"
		location = 1543

			division = {
			id = { type = 13016 id = 668 }
			name = "Shana Hendan"
			strength = 100
			type = garrison
			model = 4
			}
			}

		landunit = {
		id = { type = 13016 id = 669 }
		name = "Iwojima Hendan"
		location = 1661

			division = {
			id = { type = 13016 id = 670 }
			name = "Iwojima Hendan"
			strength = 100
			type = garrison
			model = 4
			}
			}

	

		landunit = {
		id = { type = 13016 id = 673 }
		name = "Minami Hendan"
		location = 1672

			division = {
			id = { type = 13016 id = 674 }
			name = "Minami Hendan"
			strength = 100
			type = garrison
			model = 4
			}
			}

		landunit = {
		id = { type = 13016 id = 675 }
		name = "Chichijima Hendan"
		location = 1662

			division = {
			id = { type = 13016 id = 676 }
			name = "Chichijima Hendan"
			strength = 100
			type = garrison
			model = 4
			}
			}



		landunit = {
		id = { type = 13016 id = 681 }
		name = "Taipei Hendan"
		location = 1362

			division = {
			id = { type = 13016 id = 682 }
			name = "Taipei Hendan"
			strength = 100
			type = garrison
			model = 4
			}
			}

		landunit = {
		id = { type = 13016 id = 683 }
		name = "Gaoxiong Hendan"
		location = 1361

			division = {
			id = { type = 13016 id = 684 }
			name = "Gaoxiong Hendan"
			strength = 100
			type = garrison
			model = 4
			}
			}

		landunit = {
		id = { type = 13016 id = 685 }
		name = "Okinawa Hendan"
		location = 1564

		division = {
			id = { type = 13016 id = 686 }
			name = "Okinawa Hendan"
			strength = 100
			type = garrison
			model = 4
			}
			}




	



	airunit = {
		location = 1216
		base = 1216
		id = { type = 13016 id = 1413 }
		name = "1. Nihon Koukuujieitai"

		division = { id = { type = 13016 id = 1412 } name = "1 Keibakugekiki no Hikodan" type = tactical_bomber model = 4 }
	}

	airunit = {
		location = 1236
		base = 1236
		id = { type = 13016 id = 1411 }
		name = "2. Nihon Koukuujieitai"
		division = { id = { type = 13016 id = 1410 } name = "2 Keibakugekiki no Hikodan" type = tactical_bomber model = 4 }
	}

	airunit = {
		location = 1236
		base = 1236
		id = { type = 13016 id = 1409 }
		name = "1. Hikoutai"

		division = { id = { type = 13016 id = 1408} name = "3 Keibakugekiki no Hikodan" type = tactical_bomber model = 4 }
	}
	airunit = {
		location = 1552
		base = 1552
		id = { type = 13016 id = 1406 }
		name = "3. Nihon Koukuujieitai"

		division = { id = { type = 13016 id = 1407 } name = "4 Keibakugekiki no Hikodan" type = tactical_bomber model = 4 }
	}
	airunit = {
		location = 1552
		base = 1552
		id = { type = 13016 id = 1405 }
		name = "2. Hikoutai"

		division = { id = { type = 13016 id = 1404 }	name = "5 Keibakugekiki no Hikodan"	type = tactical_bomber model = 4 }
	}


	airunit = {
		location = 1563
		base = 1563
		id = { type = 13016 id = 1403 }
		name = "4. Nihon Koukuujieitai"

		division = { id = { type = 13016 id = 1402 }	name = "13 Kaigunkugekiki no Hikodan" type = naval_bomber model = 1 }
	}

	airunit = {
		location = 1362
		base = 1362
		id = { type = 13016 id = 1400 }
		name = "5. Nihon Koukuujieitai"

		division = { id = { type = 13016 id = 1401 }	name = "33 Goraikugekiki no Hikodan" type = naval_bomber model = 1 }
	}


airunit = {
            id = { type = 13016 id = 1414 }
            name = "1 Zerosen no Hikodan"
            location = 1552
            base = 1552

            division = { id = { type = 13016 id = 1415 } name = "1 Zerosen no Hikodan" strength = 85 type = interceptor   model = 6  }
          }

airunit = {
            id = { type = 13016 id = 1416 }
            name = "2 Zerosen no Hikodan"
            location = 1219
            base = 1219

            division = { id = { type = 13016 id = 1417 } name = "2 Zerosen no Hikodan" strength = 85 type = interceptor   model = 6  }
          }

airunit = {
            id = { type = 13016 id = 1418 }
            name = "3 Zerosen no Hikodan"
            location = 1202
            base = 1202

            division = { id = { type = 13016 id = 1419 } name = "3 Zerosen no Hikodan" strength = 85 type = interceptor   model = 6  }
          }


airunit = {
            id = { type = 13016 id = 1420 }
            name = "4 Zerosen no Hikodan"
            location = 1191
            base = 1191

            division = { id = { type = 13016 id = 1421 } name = "4 Zerosen no Hikodan" strength = 85 type = interceptor   model = 6  }
          }





#######################
######  Japan Naval Strength, 1936:
######  11 Battleships
######  6 Battlecruisers
######  2 Carriers
######  5 Light Carriers
######  18 Heavy Cruisers
######  20 Destroyer flotillas
######  21 Light Cruisers
######  8 UBoot Flotillas
######  Total: 108 Ships






	navalunit = {
        id = { type = 13016 id = 1001 }
        name = "Nihon Kaigun"
        location = 1219
        base = 1219

        division = { id = { type = 13016 id = 1129 } name = "Tosa" type = battleship model = 6 } # new ship; Tosa-class
        division = { id = { type = 13016 id = 1130 } name = "Kaga" type = battleship model = 6 } # new ship; Tosa-class
        division = { id = { type = 13016 id = 1014 } name = "Mutsu" type = battleship model = 5 }
        division = { id = { type = 13016 id = 1007 } name = "Fuso" type = battleship model = 3 }
        division = { id = { type = 13016 id = 1008 } name = "Yamashiro" type = battleship model = 3 }
    }

    navalunit = {
        id = { type = 13016 id = 1005 }
        name = "1. Kaigun"
        location = 1219
        base = 1219

        division = { id = { type = 13016 id = 1006 } name = "Kirishima" type = battlecruiser model = 3 }
        division = { id = { type = 13016 id = 1002 } name = "Kongo" type = battlecruiser model = 3 }
        division = { id = { type = 13016 id = 1003 } name = "Hiei" type = battlecruiser model = 3 }
        division = { id = { type = 13016 id = 1004 } name = "Haruna" type = battlecruiser model = 3 }
        division = { id = { type = 17343 id = 1138 } name = "Kurama" type = battlecruiser model = 0 extra= naval_torpedoes_s brigade_model= 2 }
        division = { id = { type = 17343 id = 1139 } name = "Ibuki" type = battlecruiser model = 0 extra= naval_torpedoes_s brigade_model= 2 }
        division = { id = { type = 17343 id = 1140 } name = "Wakamiya" type = escort_carrier model = 2 }
        division = { id = { type = 13016 id = 1122 } name = "Notoro" type = escort_carrier model = 0 }
    }

    navalunit = {
        id = { type = 13016 id = 1009 }
        name = "2. Kaigun"
        location = 1552
        base = 1552

        division = { id = { type = 13016 id = 1010 } name = "Ise" type = battleship model = 4 }
        division = { id = { type = 13016 id = 1011 } name = "Hyuga" type = battleship model = 4 }
        division = { id = { type = 13016 id = 1012 } name = "Nagato" type = battleship model = 5 }
        division = { id = { type = 13016 id = 1123 } name = "Kamoi" type = escort_carrier model = 0 }
    }

    navalunit = {
        id = { type = 13016 id = 1013 }
        name = "3. Kaigun"
        location = 1552
        base = 1552

        division = { id = { type = 13016 id = 1137 } name = "Settsu" type = battleship model = 2 }
        division = { id = { type = 13016 id = 1138 } name = "Satsuma" type = battleship model = 1 }
        division = { id = { type = 13016 id = 1139 } name = "Aki" type = battleship model = 1 }
        division = { id = { type = 13016 id = 1131 } name = "Hosho" type = escort_carrier model = 1 }
    }

    navalunit = {
        id = { type = 13016 id = 1015 }
        name = "4. Kaigun"
        location = 1219
        base = 1219

        division = { id = { type = 13016 id = 1016 } name = "Tatsuta" type = light_cruiser model = 2 }
        division = { id = { type = 13016 id = 1017 } name = "Hirado" type = light_cruiser model = 1 }
        division = { id = { type = 13016 id = 1018 } name = "Yahagi" type = light_cruiser model = 1 }
        division = { id = { type = 13016 id = 1019 } name = "Kuma" type = light_cruiser model = 3 }
        division = { id = { type = 13016 id = 1020 } name = "Tama" type = light_cruiser model = 2 }
    }

    navalunit = {
        id = { type = 13016 id = 1021 }
        name = "5. Kaigun"
        location = 1552
        base = 1552

        division = { id = { type = 13016 id = 1022 } name = "Furutaka" type = heavy_cruiser model = 3 }
        division = { id = { type = 13016 id = 1023 } name = "Kitikama" type = light_cruiser model = 3 }
        division = { id = { type = 13016 id = 1024 } name = "Kiso" type = light_cruiser model = 2 }
        division = { id = { type = 13016 id = 1025 } name = "Oi" type = light_cruiser model = 2 }
        division = { id = { type = 13016 id = 1026 } name = "Nagara" type = light_cruiser model = 3 }
            division = { id = { type = 13016 id = 1027 } name = "Izumo" type = heavy_cruiser model = 1 }
            division = { id = { type = 13016 id = 1028 } name = "Tenryu" type = light_cruiser model = 2 }

    }

    navalunit = {
        id = { type = 13016 id = 1029 }
        name = "6. Kaigun"
        location = 1552
        base = 1552

        division = { id = { type = 13016 id = 1030 } name = "Natori" type = light_cruiser model = 3 }
        division = { id = { type = 13016 id = 1031 } name = "Kinu" type = light_cruiser model = 3 }
        division = { id = { type = 13016 id = 1032 } name = "Yura" type = light_cruiser model = 3 }
        division = { id = { type = 13016 id = 1033 } name = "Asama" type = heavy_cruiser model = 1 }
        division = { id = { type = 13016 id = 1124 } name = "Iwate" type = heavy_cruiser model = 1 }
        }

    navalunit = {
        id = { type = 13016 id = 1034 }
        name = "7. Kaigun"
        location = 1553
        base = 1553

        division = { id = { type = 13016 id = 1035 } name = "Yubari" type = light_cruiser model = 3 }
        division = { id = { type = 13016 id = 1036 } name = "Isuzu" type = light_cruiser model = 3 }
        division = { id = { type = 13016 id = 1037 } name = "Sendai" type = light_cruiser model = 3 }
        division = { id = { type = 13016 id = 1038 } name = "Abukuma" type = light_cruiser model = 3 }
        division = { id = { type = 13016 id = 1039 } name = "Jintsu" type = light_cruiser model = 3 }
        }

    navalunit = {
        id = { type = 13016 id = 1040 }
        name = "8. Kaigun"
        location = 1553
        base = 1553

        division = { id = { type = 13016 id = 1041 } name = "Kako" type = heavy_cruiser model = 3 }
        division = { id = { type = 13016 id = 1042 } name = "Aoba" type = heavy_cruiser model = 3 }
        division = { id = { type = 13016 id = 1043 } name = "Kinugasa" type = heavy_cruiser model = 3 }
        division = { id = { type = 13016 id = 1044 } name = "Nachi" type = heavy_cruiser model = 3 }
        division = { id = { type = 13016 id = 1045 } name = "Haguro" type = heavy_cruiser model = 3 }
        division = { id = { type = 13016 id = 1046 } name = "Naka" type = light_cruiser model = 3 }
    }

       navalunit = {
        id = { type = 13016 id = 1047 }
        name = "9. Kaigun"
        location = 1553
        base = 1553

        division = { id = { type = 13016 id = 1048 } name = "Myoko" type = heavy_cruiser model = 3 }
        division = { id = { type = 13016 id = 1049 } name = "Ashigara" type = heavy_cruiser model = 3 }
        division = { id = { type = 13016 id = 1050 } name = "Atago" type = heavy_cruiser model = 4 }
        division = { id = { type = 13016 id = 1051 } name = "Takao" type = heavy_cruiser model = 4 }
        division = { id = { type = 13016 id = 1052 } name = "Chokai" type = heavy_cruiser model = 4 }
    }

    navalunit = {
        id = { type = 13016 id = 1053 }
        name = "10. Kaigun"
        location = 1553
        base = 1553

        division = { id = { type = 13016 id = 1054 } name = "Maya" type = heavy_cruiser model = 4 }
        division = { id = { type = 13016 id = 1055 } name = "Mikuma" type = heavy_cruiser model = 4 }
        division = { id = { type = 13016 id = 1056 } name = "Mogami" type = heavy_cruiser model = 4 }
    }

    navalunit = {
        id = { type = 13016 id = 1057 }
        name = "11. Kaigun"
        location = 1553
        base = 1553

        division = { id = { type = 13016 id = 1126 } name = "Yakumo" type = heavy_cruiser model = 1 }
        division = { id = { type = 13016 id = 1127 } name = "Kako" type = light_cruiser model = 1 }
        division = { id = { type = 13016 id = 1128 } name = "Yodo" type = light_cruiser model = 1 }
    }

    navalunit = {
        id = { type = 13016 id = 1059 }
        name = "12. Kaigun"
        location = 1552
        base = 1552

        division = { id = { type = 13016 id = 1060 } name = "Akagi" type = carrier model = 0 extra = cag brigade_model = 2 }
    }

    navalunit = {
        id = { type = 13016 id = 1061 }
        name = "13. Kaigun"
        location = 1553
        base = 1553

        division = { id = { type = 13016 id = 1062 } name = "Amagi" type = carrier model = 0 extra = cag brigade_model = 2 }
    }

    navalunit = {
        id = { type = 13016 id = 1063 }
        name = "14. Kaigun"
        location = 1552
        base = 1552

        division = { id = { type = 13016 id = 1064 } name = "Ryujo" type = escort_carrier model = 3 }
    }

    navalunit = {
        id = { type = 13016 id = 1065 }
        name = "15. Kaigun"
        location = 1553
        base = 1553

        division = { id = { type = 13016 id = 1066 } name = "1 Kuchikukantai" type = destroyer model = 3 }
        division = { id = { type = 13016 id = 1067 } name = "2 Kuchikukantai" type = destroyer model = 3 }
        division = { id = { type = 13016 id = 1068 } name = "3 Kuchikukantai" type = destroyer model = 3 }
        division = { id = { type = 13016 id = 1069 } name = "4 Kuchikukantai" type = destroyer model = 3 }
        division = { id = { type = 13016 id = 1070 } name = "5 Kuchikukantai" type = destroyer model = 3 }
        division = { id = { type = 13016 id = 1071 } name = "6 Kuchikukantai" type = destroyer model = 3 }
        division = { id = { type = 13016 id = 1072 } name = "1 Yuso Sentai" type = transport model = 1 }
        division = { id = { type = 13016 id = 1073 } name = "2 Yuso Sentai" type = transport model = 1 }
        division = { id = { type = 13016 id = 1074 } name = "3 Yuso Sentai" type = transport model = 1 }
        division = { id = { type = 13016 id = 1075 } name = "4 Yuso Sentai" type = transport model = 1 }
        division = { id = { type = 13016 id = 1076 } name = "5 Yuso Sentai" type = transport model = 1 }
        division = { id = { type = 13016 id = 1077 } name = "6 Yuso Sentai" type = transport model = 1 }
    }

    navalunit = {
        id = { type = 13016 id = 1078 }
        name = "16. Kaigun"
        location = 1552
        base = 1552

        division = { id = { type = 13016 id = 1079 } name = "7 Kuchikukantai" type = destroyer model = 3 }
        division = { id = { type = 13016 id = 1080 } name = "8 Kuchikukantai" type = destroyer model = 3 }
        division = { id = { type = 13016 id = 1081 } name = "9 Kuchikukantai" type = destroyer model = 3 }
        division = { id = { type = 13016 id = 1082 } name = "10 Kuchikukantai" type = destroyer model = 3 }
        division = { id = { type = 13016 id = 1083 } name = "11 Kuchikukantai" type = destroyer model = 1 }
        division = { id = { type = 13016 id = 1084 } name = "12 Kuchikukantai" type = destroyer model = 1 }
        division = { id = { type = 13016 id = 1085 } name = "13 Kuchikukantai" type = destroyer model = 1 }
        division = { id = { type = 13016 id = 1086 } name = "14 Kuchikukantai" type = destroyer model = 1 }
        division = { id = { type = 13016 id = 1087 } name = "7 Yuso Sentai" type = transport model = 1 }
        division = { id = { type = 13016 id = 1088 } name = "8 Yuso Sentai" type = transport model = 1 }
    }

    navalunit = {
        name = "18. Kaigun"
        id = { type = 13016 id = 1089 }
        location = 1219
        base = 1219

        division = { id = { type = 13016 id = 1090 } name = "15 Kuchikukantai" type = destroyer model = 4 }
        division = { id = { type = 13016 id = 1091 } name = "16 Kuchikukantai" type = destroyer model = 4 }
        division = { id = { type = 13016 id = 1092 } name = "17 Kuchikukantai" type = destroyer model = 4 }
        division = { id = { type = 13016 id = 1093 } name = "8 Yuso Sentai" type = transport model = 1 }
        division = { id = { type = 13016 id = 1094 } name = "9 Yuso Sentai" type = transport model = 1 }
        division = { id = { type = 13016 id = 1095 } name = "10 Yuso Sentai" type = transport model = 1 }
        division = { id = { type = 13016 id = 1096 } name = "11 Yuso Sentai" type = transport model = 1 }
    }
    navalunit = {
        name = "19. Kaigun"
        id = { type = 13016 id = 1097 }
        location = 1552
        base = 1552

        division = { id = { type = 13016 id = 1098 } name = "18 Kuchikukantai" type = destroyer model = 4 }
        division = { id = { type = 13016 id = 1099 } name = "19 Kuchikukantai" type = destroyer model = 4 }
        division = { id = { type = 13016 id = 1100 } name = "20 Kuchikukantai" type = destroyer model = 4 }
        division = { id = { type = 13016 id = 1101 } name = "12 Yuso Sentai" type = transport model = 1 }
        division = { id = { type = 13016 id = 1102 } name = "13 Yuso Sentai" type = transport model = 1 }
        division = { id = { type = 13016 id = 1103 } name = "14 Yuso Sentai" type = transport model = 1 }
        division = { id = { type = 13016 id = 1104 } name = "15 Yuso Sentai" type = transport model = 1 }
    }
    navalunit = {
        name = "20. Kaigun"
        id = { type = 13016 id = 1105 }
        location = 1552
        base = 1552
        division = { id = { type = 13016 id = 1106 } name = "16 Yuso Sentai" type = transport model = 1 }
        division = { id = { type = 13016 id = 1107 } name = "17 Yuso Sentai" type = transport model = 1 }
        division = { id = { type = 13016 id = 1108 } name = "18 Yuso Sentai" type = transport model = 1 }
        division = { id = { type = 13016 id = 1109 } name = "19 Yuso Sentai" type = transport model = 1 }
    }

    navalunit = {
        id = { type = 13016 id = 1110 }
        name = "21. Kaigun"
        location = 1552    #Yokosuka - Tokyo province
        base = 1552

        division = {
            id = { type = 13016 id = 1111 }
            name = "1 Sensuikantai"
            type = submarine
            model = 2
        }
        division = {
            id = { type = 13016 id = 1112 }
            name = "2 Sensuikantai"
            type = submarine
            model = 2
        }
        }

    navalunit = {
        id = { type = 13016 id = 1113 }
        name = "22. Kaigun"
        location = 1553 #Sasebo - Fukuoka province
        base = 1553

        division = {
            id = { type = 13016 id = 1114 }
            name = "5 Sensuikantai"
            type = submarine
            model = 4
        }

        division = {
            id = { type = 13016 id = 1115 }
            name = "6 Sensuikantai"
            type = submarine
            model = 4
        }
    }


    navalunit = {
        id = { type = 13016 id = 1116 }
        name = "23. Kaigun"
        location = 1553 #Kure - Hiroshima province
        base = 1553

        division = {
            id = { type = 13016 id = 1117 }
            name = "7 Sensuikantai"
            type = submarine
            model = 4
        }
        division = {
            id = { type = 13016 id = 1118 }
            name = "8 Sensuikantai"
            type = submarine
            model = 4
        }
        division = {
            id = { type = 13016 id = 1119 }
            name = "9 Sensuikantai"
            type = submarine
            model = 4
        }
        division = {
            id = { type = 13016 id = 1120 }
            name = "10 Sensuikantai"
            type = submarine
            model = 5
        }
    }

#### Under division_development

    division_development = {  
        name  = "Soryu" 
        type  = carrier 
        model = 2 
        cost  = 0.1
        id    = {  type = 13016 id = 1132  } 
        date  = {  year = 1936 month = december day = 20  } 
        extra = cag 
        brigade_model = 2 
        new_model = no
    } 
    division_development = {  
        name  = "Kumano"
        type  = heavy_cruiser
        model = 4
        cost  = 0.1
        id    = { type = 13016 id = 1133 }
        date  = { year = 1937 month = october day = 1 }
        new_model = no
    }
    division_development = {  
        name  = "Suzuya"
        type  = heavy_cruiser
        model = 4
        cost  = 0.1
        id    = { type = 13016 id = 1134 }
        date  = { year = 1937 month = october day = 29 }
        new_model = no
    }
    division_development = {  
        name  = "Tone"
        type  = heavy_cruiser
        model = 5
        cost  = 0.1
        id    = { type = 13016 id = 1135 }
        date  = { year = 1938 month = november day = 20 }
        new_model = no
    }
    division_development = {  
        name  = "Chikuma"
        type  = heavy_cruiser
        model = 5
        cost  = 0.1
        id    = { type = 13016 id = 1136 }
        date  = { year = 1939 month = may day = 20 }
        new_model = no
    }
    division_development = {
        name  = "Dai 21 Kuchikusentai" 
        type  = destroyer 
        model = 4 
        cost  = 0.1
        id    = {  type = 13016 id = 1121  } 
        date  = {  year = 1936 month = april day = 1  } 
        new_model = no
    }


	transports = 560
	escorts = 140

}  