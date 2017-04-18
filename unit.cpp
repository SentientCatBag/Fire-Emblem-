//probably will become a header.
//GBA implementation notes - form FE ultimate hacking tutorial on feshrine.net
//Character name – the index for the character name text. Type it into FEditor Adv.
//-        Character description – same, but for description text.
//-        Character number – used to reference the character. I suggest you don’t edit this.
//-        Class (support viewer only) – only affects the class shown in the support viewer.
//-        Portrait – the portrait used for the character.
//-        Mini-portrait – default uses the portrait’s chibi, everything else is for generic enemies.
//-        Affinity – self-explanatory.
//-        Character number 2? – don’t edit, just to be safe.
//-        Level – doesn’t affect the actual level. It affects autoleveling, I think. You’ll find more about this when using the Chapter Unit Editor or Event Assembler when you edit units.
//-        Base stats – these are added to the class stats to get the FINAL character stats. Stats can be negative but might glitch if they are unless you use FEditor Adv’s autopatch.
//-        Con bonus – same, it’s added to the class bonus. It can be negative as well.
//-        Weapon levels – the weapon levels the unit has. Unless you’re hax like Athos, you can’t have more than 1 S level weapon—try and figure out how to do it like Athos if you want. Also, if the class has a base weapon level, it is used unless the character weapon level is higher.
//-        Growths – self-explanatory, aren’t added to class growths, they are as you see them. For player characters, these are used; for enemy characters, class growths are used. The max a growth can be is 255.
//-        Palette – which palette to use. Generic default colors are for generic enemies.
//-        Custom battle sprite – gives the option to use a custom battle sprite/animation, but NOT use a custom class.
//-        Character abilities – they are all pretty self-explanatory. You can combine values to have multiple skills from one list. For example, to have a character that could use steal and thief key (but not have the class ability to use it), you would do 0x04 + 0x08 = 0x0C.
//-        Supports Data pointer – a pointer to support data… self-explanatory I suppose. 0x00 means no supports.
 #include <string>

class unit{
 std::string name;
 std::string description[];
 int ID;
 unsigned char * portrait;
 unsigned char * mini_portrait;
 int[11] * base_stats; //str, def, con, mag, lck, spd, skl, res, mov, hp 
 int[8] * weapon_levels; //bow, lance, sword, axe, tomes, staves
 int[11] * growths;
 //will decide how to implement supports later.
};
