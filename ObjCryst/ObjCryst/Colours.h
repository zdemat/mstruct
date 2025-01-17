/*
   Colour definitions from POVRay (http://www.povray.org)
*/
#ifndef __OBJCRYST_COULOURS_H
#define __OBJCRYST_COULOURS_H
struct POVRayColours
{
   const char *mName;
   REAL mRGB[3];
};

const POVRayColours gPOVRayColours[]=
{
   {"Red",           { 1,  0, 0}},
   {"Green",         { 0,  1, 0}},
   {"Blue",          { 0,  0, 1}},
   {"Yellow",        { 1,  1, 0}},
   {"Cyan",          { 0,  1, 1}},
   {"Magenta",       { 1,  0, 1}},
   {"Clear",         { 1,  1, 1}},
   {"White",         { 1,  1, 1}},
   {"Black",         { 0,  0, 0}},
   {"Gray05",        { 0.05,  0.05, 0.05}},
   {"Gray10",        { .10,  .10, .10}},
   {"Gray15",        { 0.15,  0.15, 0.15}},
   {"Gray20",        { 0.20,  0.20, 0.20}},
   {"Gray25",        { 0.25,  0.25, 0.25}},
   {"Gray30",        { 0.30,  0.30, 0.30}},
   {"Gray35",        { 0.35,  0.35, 0.35}},
   {"Gray40",        { 0.40,  0.40, 0.40}},
   {"Gray45",        { 0.45,  0.45, 0.45}},
   {"Gray50",        { 0.50,  0.50, 0.50}},
   {"Gray55",        { 0.55,  0.55, 0.55}},
   {"Gray60",        { 0.60,  0.60, 0.60}},
   {"Gray65",        { 0.65,  0.65, 0.65}},
   {"Gray70",        { 0.70,  0.70, 0.70}},
   {"Gray75",        { 0.75,  0.75, 0.75}},
   {"Gray80",        { 0.80,  0.80, 0.80}},
   {"Gray85",        { 0.85,  0.85, 0.85}},
   {"Gray90",        { 0.90,  0.90, 0.90}},
   {"Gray95",        { 0.95,  0.95, 0.95}},
   {"DimGray",    { 0.329412 , 0.329412 , 0.329412}},
   {"DimGrey",    { 0.329412 , 0.329412 , 0.329412}},
   {"Gray",    { 0.752941 , 0.752941 , 0.752941}},
   {"Grey",    { 0.752941 , 0.752941 , 0.752941}},
   {"LightGray",    { 0.658824 , 0.658824 , 0.658824}},
   {"LightGrey",    { 0.658824 , 0.658824 , 0.658824}},
   {"VLightGray",    { 0.80 , 0.80 , 0.80}},
   {"VLightGrey",    { 0.80 , 0.80 , 0.80}},
   {"Aquamarine",    { 0.439216 , 0.858824 , 0.576471}},
   {"BlueViolet",    { 0.62352 , 0.372549 , 0.623529}},
   {"Brown",    { 0.647059 , 0.164706 , 0.164706}},
   {"CadetBlue",    { 0.372549 , 0.623529 , 0.623529}},
   {"Coral",    { 1.0 , 0.498039 , 0.0}},
   {"CornflowerBlue",    { 0.258824 , 0.258824 , 0.435294}},
   {"DarkGreen",    { 0.184314 , 0.309804 , 0.184314}},
   {"DarkOliveGreen",    { 0.309804 , 0.309804 , 0.184314}},
   {"DarkOrchid",    { 0.6 , 0.196078 , 0.8}},
   {"DarkSlateBlue",    { 0.119608 , 0.137255 , 0.556863}},
   {"DarkSlateGray",    { 0.184314 , 0.309804 , 0.309804}},
   {"DarkSlateGrey",    { 0.184314 , 0.309804 , 0.309804}},
   {"DarkTurquoise",    { 0.439216 , 0.576471 , 0.858824}},
   {"Firebrick",    { 0.556863 , 0.137255 , 0.137255}},
   {"ForestGreen",    { 0.137255 , 0.556863 , 0.137255}},
   {"Gold",    { 0.8 , 0.498039 , 0.196078}},
   {"Goldenrod",    { 0.858824 , 0.858824 , 0.439216}},
   {"GreenYellow",    { 0.576471 , 0.858824 , 0.439216}},
   {"IndianRed",    { 0.309804 , 0.184314 , 0.184314}},
   {"Khaki",    { 0.623529 , 0.623529 , 0.372549}},
   {"LightBlue",    { 0.74902 , 0.847059 , 0.847059}},
   {"LightSteelBlue",    { 0.560784 , 0.560784 , 0.737255}},
   {"LimeGreen",    { 0.196078 , 0.8 , 0.196078}},
   {"Maroon",    { 0.556863 , 0.137255 , 0.419608}},
   {"MediumAquamarine",    { 0.196078 , 0.8 , 0.6}},
   {"MediumBlue",    { 0.196078 , 0.196078 , 0.8}},
   {"MediumForestGreen",    { 0.419608 , 0.556863 , 0.137255}},
   {"MediumGoldenrod",    { 0.917647 , 0.917647 , 0.678431}},
   {"MediumOrchid",    { 0.576471 , 0.439216 , 0.858824}},
   {"MediumSeaGreen",    { 0.258824 , 0.435294 , 0.258824}},
   {"MediumSlateBlue",    { 0.498039 , 1.0}},
   {"MediumSpringGreen",    { 0.498039 , 1.0}},
   {"MediumTurquoise",    { 0.439216 , 0.858824 , 0.858824}},
   {"MediumVioletRed",    { 0.858824 , 0.439216 , 0.576471}},
   {"MidnightBlue",    { 0.184314 , 0.184314 , 0.309804}},
   {"Navy",    { 0.137255 , 0.137255 , 0.556863}},
   {"NavyBlue",    { 0.137255 , 0.137255 , 0.556863}},
   {"Orange",    { 1 , 0.5 , 0.0}},
   {"OrangeRed",    { 1.0 , 0.25}},
   {"Orchid",    { 0.858824 , 0.439216 , 0.858824}},
   {"PaleGreen",    { 0.560784 , 0.737255 , 0.560784}},
   {"Pink",    { 0.737255 , 0.560784 , 0.560784}},
   {"Plum",    { 0.917647 , 0.678431 , 0.917647}},
   {"Salmon",    { 0.435294 , 0.258824 , 0.258824}},
   {"SeaGreen",    { 0.137255 , 0.556863 , 0.419608}},
   {"Sienna",    { 0.556863 , 0.419608 , 0.137255}},
   {"SkyBlue",    { 0.196078 , 0.6 , 0.8}},
   {"SlateBlue",  { 0., 0.498039 , 1.0}},
   {"SpringGreen",  {0.  , 1.0 , 0.498039}},
   {"SteelBlue",    { 0.137255 , 0.419608 , 0.556863}},
   {"Tan",    { 0.858824 , 0.576471 , 0.439216}},
   {"Thistle",    { 0.847059 , 0.74902 , 0.847059}},
   {"Turquoise",    { 0.678431 , 0.917647 , 0.917647}},
   {"Violet",    { 0.309804 , 0.184314 , 0.309804}},
   {"VioletRed",    { 0.8 , 0.196078 , 0.6}},
   {"Wheat",    { 0.847059 , 0.847059 , 0.74902}},
   {"YellowGreen",    { 0.6 , 0.8 , 0.196078}},
   {"SummerSky",    { 0.22 , 0.69 , 0.87}},
   {"RichBlue",    { 0.35 , 0.35 , 0.67}},
   {"Brass", { 0.71 , 0.65 , 0.26}},
   {"Copper",    { 0.72 , 0.45 , 0.20}},
   {"Bronze",    { 0.55 , 0.47 , 0.14}},
   {"Bronze2",    { 0.65 , 0.49 , 0.24}},
   {"Silver",    { 0.90 , 0.91 , 0.98}},
   {"BrightGold",    { 0.85 , 0.85 , 0.10}},
   {"OldGold", { 0.81 , 0.71 , 0.23}},
   {"Feldspar",    { 0.82 , 0.57 , 0.46}},
   {"Quartz",    { 0.85 , 0.85 , 0.95}},
   {"Mica",         { 0,  0, 0}},
   {"NeonPink",    { 1.00 , 0.43 , 0.78}},
   {"DarkPurple",    { 0.53 , 0.12 , 0.47}},
   {"NeonBlue",    { 0.30 , 0.30 , 1.00}},
   {"CoolCopper",    { 0.85 , 0.53 , 0.10}},
   {"MandarinOrange",    { 0.89 , 0.47 , 0.20}},
   {"LightWood",    { 0.91 , 0.76 , 0.65}},
   {"MediumWood",    { 0.65 , 0.50 , 0.39}},
   {"DarkWood",    { 0.52 , 0.37 , 0.26}},
   {"SpicyPink",    { 1.00 , 0.11 , 0.68}},
   {"SemiSweetChoc",    { 0.42 , 0.26 , 0.15}},
   {"BakersChoc",    { 0.36 , 0.20 , 0.09}},
   {"Flesh",    { 0.96 , 0.80 , 0.69}},
   {"NewTan",    { 0.92 , 0.78 , 0.62}},
   {"NewMidnightBlue",    { 0.00 , 0.00 , 0.61}},
   {"VeryDarkBrown",    { 0.35 , 0.16 , 0.14}},
   {"DarkBrown",    { 0.36 , 0.25 , 0.20}},
   {"DarkTan",    { 0.59 , 0.41 , 0.31}},
   {"GreenCopper",    { 0.32 , 0.49 , 0.46}},
   {"DkGreenCopper",    { 0.29 , 0.46 , 0.43}},
   {"DustyRose",    { 0.52 , 0.39 , 0.39}},
   {"HuntersGreen",    { 0.13 , 0.37 , 0.31}},
   {"Scarlet",    { 0.55 , 0.09 , 0.09}},

   {"Med_Purple", { 0.73 , 0.16 , 0.96}},
   {"Light_Purple",    { 0.87 , 0.58 , 0.98}},
   {"Very_Light_Purple",    { 0.94 , 0.81 , 0.99}},
   {"",{0. , 0. , 0.}}
};
#endif

