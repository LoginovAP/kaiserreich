


country = {
    tag = POL  
ai = "kaiserreich\Poland.ai"
	policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 5
        political_left = 2
        freedom = 4
        free_market = 5
        professional_army = 3
        defense_lobby = 3
        interventionism = 3
    }


#### cabinet

	headofstate = { type = 9 id = 13179  }
	headofgovernment = { type = 9 id = 13002 }
 	foreignminister = { type = 9 id =  13003  }
 	armamentminister = { type = 9 id = 13004    }
 	ministerofsecurity = { type = 9 id = 13005   }
 	ministerofintelligence = { type = 9 id =   13006  }
 	chiefofstaff = { type = 9 id = 13116 }
 	chiefofarmy = { type = 9 id =  13124  }




#### Resource Reserves
capital = 232

SpyInfo  = {  country = "POL" NumberOfSpies = 2  } 

manpower = 275

	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money = 20


    ownedprovinces =      {
231 227 223 233 234 243 246 228 232 229 250 254 
	 }
    controlledprovinces = {
231 227 223 233 234 243 246 228 232 229 250 254
	  }
    nationalprovinces =   {
230 231 227 223 233 234 243 246 228 232 229 250 254
	}

diplomacy = {
relation = {   tag =    	BEL	value = 		60	   }  
relation = {   tag =  	BLR	 value =		70	   }  
relation = {   tag =  	BUL	value = 		40	   }  
relation = {   tag =  	GER	 value =		120	   }  
relation = {   tag =  	LAT	value = 		80	   }  
relation = {   tag =  	LIT	 value =		80	   }  
relation = {   tag =  	UKR	 value =		40	   }  
relation = {   tag =  	AUS	value = 		60	   }  
relation = {   tag =  	BOS	value = 		20	   }  
relation = {   tag =  	CRO	 value =		20	   }  
relation = {   tag =  	CZE	value = 		50	   }  
relation = {   tag =  	GLD	value = 		80	   }  
relation = {   tag =  	HUN	 value =		100	   }  
relation = {   tag =  	ROM	value = 		-40	   }  
relation = {   tag =  	SPA	value = 		20	   }  
relation = {   tag =  	ENG	value = 		-30	   }  
relation = {   tag =  	FRA	value = 		-20	   }  
relation = {   tag =  	CAN	value = 		-40	   }  
relation = {   tag =  	VIC	value = 		30	   }  
relation = {   tag =  	RUS	 value =		-40	   }  
relation = {   tag =  	OTT	 value =		10	   }  
relation = {   tag =  	CON	value = 		40	   }  
relation = {   tag =	USA	value = 		20	 }
relation = {   tag =  	JAP	value = 		-10	   }  
}


	
	techapps = {
#Infantry
1010  1020 1030 1040 1050 1060 1070 1080 #Infantry Division 
1160  1170 1180 1190 1200 1210 1220  #Mountain Division 
13060 13070 13080 1310 1320 1330 1340 1350 #1930 Cavalry Division  
1910 1920 1930 1940 1950 1960 #Interbellum 1930 Supply 
1830 1840 1850 #Engineers
#Great War Hospital System 
14000 14010 14020

#Armour & Artillery
7600 7610 2620 2010 2630 #Tankette 
2860 2870 2880# Armoured Car
2290 2300 2310 2900  #Field Artillery 
2800 2450 #Early Static Anti-Air Artillery
2810 2820 #Basic Anti-Air Artillery Brigade 

#Aircrafts
4500 4510 4520 4530 4540 4550 4010 #Fighter 
4600 4610 4620 4630 4120  # Bomber 
4300 4310 4320 4330 #Multirole fighter
4800 4810 #ww1 strategic bomber
7290 7300 7310 7320 #CAS

#Industrial
5700 5710 #Modern Agriculture
5310 54010 54020 #Computers & cryptografi
5810 5820 5050 5830 #Manufactoring
5800 5080  #Improved Construction Engineering 
5600 5610 5620 5630 #Medicine

# Land Doctrines WWI - Entente line (default)
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6680 6540 6910
# Land Doctrines WWII - Defensive Focus 
6010 # Firepower

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 
}

dormant_ministers = { 13168 13185 13186 13187 }

#########  OOB (...)


	landunit = {
	id = { type = 18600 id = 7 }
	location = 223
	name = "Armia Lodz"
			division = { id = { type = 18600 id = 8 } name = "2 Dywizja Piechoty"	type = infantry model = 7	}
			division = { id = { type = 18600 id = 9 } name = "10 Dywizja Piechoty"	type = infantry model = 7 extra = anti_air	}
			division = { id = { type = 18600 id = 10 } name = "29 Dywizja Piechoty"	type = infantry	model = 7 }
	}

	landunit = {
	id = { type = 18600 id = 11 }
	location = 243
	name = "Armia Lublin"
			division = { id = { type = 18600 id = 12 } name = "18 Dywizja Piechoty"	type = infantry model = 7	}
			division = { id = { type = 18600 id = 13 } name = "28 Dywizja Piechoty"	type = infantry	model = 7 }
			division = { id = { type = 18600 id = 14 } name = "30 Dywizja Piechoty"	type = infantry model = 7 extra = anti_tank brigade_model = 1 }
	}
	landunit = {
	id = { type = 18600 id = 34 }
	location = 232
	name = "Armia Warszawa"

		division = { 
		id = { type = 18600 id = 1706 } 
		name = "Army HQ" 
		type = hq 
		model = 2 
		strength = 100 
		}

			division = { id = { type = 18600 id = 35 } name = "Mazowiecka B.K." type = cavalry model = 7 extra = engineer brigade_model = 1 }
			division = { id = { type = 18600 id = 36 } name = "1 DP Legion�w im. Pilsudskiego" model = 7	type = infantry }
			division = { id = { type = 18600 id = 37 } name = "5 Dywizja Piechoty"	type = infantry model = 7 }
			division = { id = { type = 18600 id = 38 } name = "11 Karpacka Dywizja Piechoty" type = infantry model = 7 }
			division = { id = { type = 18600 id = 39 } name = "24 Dywizja Piechoty"	type = infantry model = 7 }
	}

	airunit = {
 	id = { type = 18600 id = 59 }
 	name = "III/1 Dyon Brygady Poscigowej"
 	location = 232
	base = 232

		division = {
		id = { type = 18600 id = 60 }
		name = "III/1 Dyon Brygady Poscigowej"
		type = interceptor
		model = 6
		}

		division = {
		id = { type = 18600 id = 61 }
		name = "IV/1 Dyon Brygady Poscigowej"
		type = interceptor
		model = 6
		}

		division = {
		id = { type = 18600 id = 62 }
		name = "1 Dywizjon Bombowc�w Ciezkich"
		type = tactical_bomber
		model = 6
		}
		}

}  