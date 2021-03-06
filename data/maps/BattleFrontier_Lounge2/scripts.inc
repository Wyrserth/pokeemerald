BattleFrontier_Lounge2_MapScripts:: @ 8260642
	.byte 0

BattleFrontier_Lounge2_EventScript_260643:: @ 8260643
	lock
	faceplayer
	goto_if_set FLAG_MET_BATTLE_FRONTIER_MANIAC, BattleFrontier_Lounge2_EventScript_26065F
	setflag FLAG_MET_BATTLE_FRONTIER_MANIAC
	msgbox BattleFrontier_Lounge2_Text_260766, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge2_EventScript_26066D
	end

BattleFrontier_Lounge2_EventScript_26065F:: @ 826065F
	msgbox BattleFrontier_Lounge2_Text_260857, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge2_EventScript_26066D
	end

BattleFrontier_Lounge2_EventScript_26066D:: @ 826066D
	compare VAR_FRONTIER_MANIAC_FACILITY, 0
	call_if_eq BattleFrontier_Lounge2_EventScript_26070A
	compare VAR_FRONTIER_MANIAC_FACILITY, 1
	call_if_eq BattleFrontier_Lounge2_EventScript_26070F
	compare VAR_FRONTIER_MANIAC_FACILITY, 2
	call_if_eq BattleFrontier_Lounge2_EventScript_260714
	compare VAR_FRONTIER_MANIAC_FACILITY, 3
	call_if_eq BattleFrontier_Lounge2_EventScript_260719
	compare VAR_FRONTIER_MANIAC_FACILITY, 4
	call_if_eq BattleFrontier_Lounge2_EventScript_26071E
	compare VAR_FRONTIER_MANIAC_FACILITY, 5
	call_if_eq BattleFrontier_Lounge2_EventScript_260723
	compare VAR_FRONTIER_MANIAC_FACILITY, 6
	call_if_eq BattleFrontier_Lounge2_EventScript_260728
	compare VAR_FRONTIER_MANIAC_FACILITY, 7
	call_if_eq BattleFrontier_Lounge2_EventScript_26072D
	compare VAR_FRONTIER_MANIAC_FACILITY, 8
	call_if_eq BattleFrontier_Lounge2_EventScript_260732
	compare VAR_FRONTIER_MANIAC_FACILITY, 9
	call_if_eq BattleFrontier_Lounge2_EventScript_260737
	compare VAR_FRONTIER_MANIAC_FACILITY, 3
	call_if_le BattleFrontier_Lounge2_EventScript_2606F8
	compare VAR_FRONTIER_MANIAC_FACILITY, 4
	call_if_ge BattleFrontier_Lounge2_EventScript_260701
	special sub_8139F20
	waitmessage
	waitbuttonpress
	release
	end

BattleFrontier_Lounge2_EventScript_2606F8:: @ 82606F8
	msgbox BattleFrontier_Lounge2_Text_260933, MSGBOX_DEFAULT
	return

BattleFrontier_Lounge2_EventScript_260701:: @ 8260701
	msgbox BattleFrontier_Lounge2_Text_2608F2, MSGBOX_DEFAULT
	return

BattleFrontier_Lounge2_EventScript_26070A:: @ 826070A
	bufferstdstring 0, 19
	return

BattleFrontier_Lounge2_EventScript_26070F:: @ 826070F
	bufferstdstring 0, 20
	return

BattleFrontier_Lounge2_EventScript_260714:: @ 8260714
	bufferstdstring 0, 21
	return

BattleFrontier_Lounge2_EventScript_260719:: @ 8260719
	bufferstdstring 0, 22
	return

BattleFrontier_Lounge2_EventScript_26071E:: @ 826071E
	bufferstdstring 0, 24
	return

BattleFrontier_Lounge2_EventScript_260723:: @ 8260723
	bufferstdstring 0, 25
	return

BattleFrontier_Lounge2_EventScript_260728:: @ 8260728
	bufferstdstring 0, 26
	return

BattleFrontier_Lounge2_EventScript_26072D:: @ 826072D
	bufferstdstring 0, 27
	return

BattleFrontier_Lounge2_EventScript_260732:: @ 8260732
	bufferstdstring 0, 28
	return

BattleFrontier_Lounge2_EventScript_260737:: @ 8260737
	bufferstdstring 0, 29
	return

BattleFrontier_Lounge2_EventScript_26073C:: @ 826073C
	lock
	msgbox BattleFrontier_Lounge2_Text_261C9C, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Lounge2_EventScript_260747:: @ 8260747
	lock
	msgbox BattleFrontier_Lounge2_Text_261CDC, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Lounge2_EventScript_260752:: @ 8260752
	lock
	msgbox BattleFrontier_Lounge2_Text_261D1D, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Lounge2_EventScript_26075D:: @ 826075D
	msgbox BattleFrontier_Lounge2_Text_261D5C, MSGBOX_NPC
	end

BattleFrontier_Lounge2_Text_260766:: @ 8260766
	.string "Howdy! When it comes to news about\n"
	.string "the Battle Frontier, I'm no. 1.\p"
	.string "You can think of me as\n"
	.string "the Frontier Maniac.\p"
	.string "Just checking, but you are a Trainer,\n"
	.string "isn't that right?\p"
	.string "I'll happily share the hottest news\n"
	.string "I gathered about the Battle Frontier.$"

BattleFrontier_Lounge2_Text_260857:: @ 8260857
	.string "Howdy! Did you swing by to grill me\n"
	.string "about the latest word? Oh, all right!$"

BattleFrontier_Lounge2_Text_2608A1:: @ 82608A1
	.string "Well? Well? Well?\p"
	.string "I'm sure my information's been\n"
	.string "seriously useful to you, right?$"

BattleFrontier_Lounge2_Text_2608F2:: @ 82608F2
	.string "Let's see now…\p"
	.string "It sounds like the {STR_VAR_1}\n"
	.string "is the hottest place going.$"

BattleFrontier_Lounge2_Text_260933:: @ 8260933
	.string "Let's see now…\p"
	.string "It sounds like Battle Tower\n"
	.string "{STR_VAR_1} is the hottest.$"

BattleFrontier_Lounge2_Text_260971:: @ 8260971
	.string "Bet you didn't know this!\p"
	.string "One of those top Trainers that Scott\n"
	.string "calls the Frontier Brains is there.\p"
	.string "It's this mysterious Trainer called\n"
	.string "the Salon Maiden that runs the place.$"

BattleFrontier_Lounge2_Text_260A1E:: @ 8260A1E
	.string "Have you battled the Salon Maiden?\p"
	.string "When she's measuring up her opponent,\n"
	.string "she apparently uses these Pokémon:\p"
	.string "A Psychic-type PSI Pokémon,\n"
	.string "a Fire-type Volcano Pokémon,\l"
	.string "and a Normal-type Sleeping Pokémon.$"

BattleFrontier_Lounge2_Text_260AE7:: @ 8260AE7
	.string "Have you battled the Salon Maiden\n"
	.string "when she's serious?\p"
	.string "When she's battling flat out,\n"
	.string "she apparently uses these Pokémon:\p"
	.string "A Dragon & Psychic Eon Pokémon,\n"
	.string "an Electric-type Thunder Pokémon,\l"
	.string "and a Normal-type Sleeping Pokémon.$"

BattleFrontier_Lounge2_Text_260BC4:: @ 8260BC4
	.string "Bet you didn't know this!\p"
	.string "One of those top Trainers that Scott\n"
	.string "calls the Frontier Brains is there.\p"
	.string "It's this flamboyant Trainer called\n"
	.string "the Dome Ace that runs the place.$"

BattleFrontier_Lounge2_Text_260C6D:: @ 8260C6D
	.string "Have you battled the Dome Ace?\p"
	.string "When he's treating the opponent\n"
	.string "lightly, he uses these three Pokémon:\p"
	.string "A Dragon & Flying Dragon Pokémon,\n"
	.string "a Water & Ground Mud Fish Pokémon,\l"
	.string "and a Fire & Flying Flame Pokémon.$"

BattleFrontier_Lounge2_Text_260D3A:: @ 8260D3A
	.string "Have you battled the Dome Ace\n"
	.string "when he's serious?\p"
	.string "When he's demonstrating his strategy,\n"
	.string "he uses these three Pokémon:\p"
	.string "A Dragon & Flying Eon Pokémon,\n"
	.string "a Water & Ground Mud Fish Pokémon,\l"
	.string "and a Steel- & Psychic-type Iron Leg\l"
	.string "Pokémon.$"

BattleFrontier_Lounge2_Text_260E1E:: @ 8260E1E
	.string "Bet you didn't know this!\p"
	.string "One of those top Trainers that Scott\n"
	.string "calls the Frontier Brains is there.\p"
	.string "It's this freaky Trainer called\n"
	.string "the Factory Head that runs the place.$"

BattleFrontier_Lounge2_Text_260EC7:: @ 8260EC7
	.string "Have you battled the Factory Head\n"
	.string "already?\p"
	.string "Let me think… When he goes to battle,\n"
	.string "he just gets three rental Pokémon.\p"
	.string "He battles under pretty much the same\n"
	.string "conditions as you.$"

BattleFrontier_Lounge2_Text_260F74:: @ 8260F74
	.string "Have you battled the Factory Head\n"
	.string "when he's serious?\p"
	.string "When he goes seriously to battle,\n"
	.string "he still gets three rental Pokémon.\p"
	.string "He battles under virtually the same\n"
	.string "conditions as you.$"

BattleFrontier_Lounge2_Text_261026:: @ 8261026
	.string "Bet you didn't know this!\p"
	.string "One of those top Trainers that Scott\n"
	.string "calls the Frontier Brains is there.\p"
	.string "It's this scary Trainer called\n"
	.string "the Pike Queen that runs the place.$"

BattleFrontier_Lounge2_Text_2610CC:: @ 82610CC
	.string "Have you battled the Pike Queen\n"
	.string "before?\p"
	.string "When she's in a good mood, they say\n"
	.string "she uses these three Pokémon:\p"
	.string "A Poison-type Fang Snake Pokémon,\n"
	.string "a Bug & Rock Mold Pokémon,\l"
	.string "and a Water-type Tender Pokémon.$"

BattleFrontier_Lounge2_Text_261194:: @ 8261194
	.string "Have you battled the Pike Queen\n"
	.string "when she's serious?\p"
	.string "When she's seriously annoyed, they say\n"
	.string "she uses these three Pokémon:\p"
	.string "A Poison-type Fang Snake Pokémon,\n"
	.string "a Steel & Ground Iron Snake Pokémon,\l"
	.string "and a Water- & Flying-type Atrocious\l"
	.string "Pokémon.$"

BattleFrontier_Lounge2_Text_261282:: @ 8261282
	.string "Bet you didn't know this!\p"
	.string "One of those top Trainers that Scott\n"
	.string "calls the Frontier Brains is there.\p"
	.string "It's this cute Trainer called\n"
	.string "the Arena Tycoon that runs the place.$"

BattleFrontier_Lounge2_Text_261329:: @ 8261329
	.string "Have you battled the Arena Tycoon\n"
	.string "before?\p"
	.string "When she's assessing the foe's ability,\n"
	.string "she supposedly uses these Pokémon:\p"
	.string "A Bug & Fighting Single Horn Pokémon,\n"
	.string "a Dark-type Moonlight Pokémon,\l"
	.string "and a Bug & Ghost Shed Pokémon.$"

BattleFrontier_Lounge2_Text_261403:: @ 8261403
	.string "Have you battled the Arena Tycoon\n"
	.string "when she's serious?\p"
	.string "When she battles for keeps,\n"
	.string "she supposedly uses these Pokémon:\p"
	.string "A Dark-type Moonlight Pokémon,\n"
	.string "a Ghost & Poison Shadow Pokémon\l"
	.string "and a Grass- & Fighting-type\l"
	.string "Mushroom Pokémon.$"

BattleFrontier_Lounge2_Text_2614E6:: @ 82614E6
	.string "Bet you didn't know this!\p"
	.string "One of those top Trainers that Scott\n"
	.string "calls the Frontier Brains is there.\p"
	.string "It's this sinister Trainer called\n"
	.string "the Palace Maven that runs the place.$"

BattleFrontier_Lounge2_Text_261591:: @ 8261591
	.string "Have you battled the Palace Maven\n"
	.string "before?\p"
	.string "When he's testing the opponent's\n"
	.string "spirit, he's said to use these Pokémon:\p"
	.string "A Poison & Flying-type Bat Pokémon,\n"
	.string "a Normal-type Lazy Pokémon, and a\l"
	.string "Water- & Ice-type Transport Pokémon.$"

BattleFrontier_Lounge2_Text_26166F:: @ 826166F
	.string "Have you battled the Palace Maven\n"
	.string "when he's serious?\p"
	.string "When he throws his entire might into\n"
	.string "battle, he's said to use these Pokémon:\p"
	.string "A Fire-type Legendary Pokémon,\n"
	.string "a Normal-type Lazy Pokémon,\l"
	.string "and a Water-type Aurora Pokémon.$"

BattleFrontier_Lounge2_Text_26174D:: @ 826174D
	.string "Bet you didn't know this!\p"
	.string "One of those top Trainers that Scott\n"
	.string "calls the Frontier Brains is there.\p"
	.string "It's this fiery-hot Trainer called\n"
	.string "the Pyramid King that runs the place.$"

BattleFrontier_Lounge2_Text_2617F9:: @ 82617F9
	.string "Have you battled the Pyramid King\n"
	.string "before?\p"
	.string "When he's checking the foe's power,\n"
	.string "he apparently uses these Pokémon:\p"
	.string "A Rock-type Rock Peak Pokémon,\n"
	.string "an Ice-type Iceberg Pokémon,\l"
	.string "and a Steel-type Iron Pokémon.$"

BattleFrontier_Lounge2_Text_2618C4:: @ 82618C4
	.string "Have you battled the Pyramid King\n"
	.string "when he's serious?\p"
	.string "When he's pumped with hot power,\n"
	.string "he apparently uses these Pokémon:\p"
	.string "An Ice & Flying Freeze Pokémon, an\n"
	.string "Electric & Flying Electric Pokémon,\l"
	.string "and a Fire- & Flying-type Flame\l"
	.string "Pokémon.$"

BattleFrontier_Lounge2_Text_2619AC:: @ 82619AC
	.string "Sure, there are several places where\n"
	.string "you can enter Double Battles.\p"
	.string "But the Double Battle Rooms of\n"
	.string "the Battle Tower are, like, basic!\p"
	.string "They're where you should learn about\n"
	.string "how Double Battles are played here\l"
	.string "in the Battle Frontier.$"

BattleFrontier_Lounge2_Text_261A91:: @ 8261A91
	.string "Watch yourself in the battles here.\p"
	.string "I hear there are Trainers that have\n"
	.string "strategies they developed just for\l"
	.string "Double Battles.$"

BattleFrontier_Lounge2_Text_261B0C:: @ 8261B0C
	.string "Once you're confident and comfortable\n"
	.string "with Double Battles here, you should\l"
	.string "think about challenging other places\l"
	.string "offering Double Battles.$"

BattleFrontier_Lounge2_Text_261B95:: @ 8261B95
	.string "All sorts of Trainers gather in\n"
	.string "the Battle Salon.\p"
	.string "Just think--you may run into your\n"
	.string "friends or followers!\l"
	.string "You should look carefully!$"

BattleFrontier_Lounge2_Text_261C1A:: @ 8261C1A
	.string "If you're with a friend, head for the\n"
	.string "Link Multi Battle Room.\p"
	.string "If you play with a strong friend,\n"
	.string "you can expect to see tough foes!$"

BattleFrontier_Lounge2_Text_261C9C:: @ 8261C9C
	.string "What amazing news-gathering power!\n"
	.string "My mentor's like none other!$"

BattleFrontier_Lounge2_Text_261CDC:: @ 8261CDC
	.string "What amazing powers of observation!\n"
	.string "My mentor's like none other!$"

BattleFrontier_Lounge2_Text_261D1D:: @ 8261D1D
	.string "What amazing power of persuasion!\n"
	.string "My mentor's like none other!$"

BattleFrontier_Lounge2_Text_261D5C:: @ 8261D5C
	.string "…What is this place?\n"
	.string "It's scaring me…$"

