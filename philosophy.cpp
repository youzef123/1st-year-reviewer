#include <stdio.h>
#include <string.h>
#define p printf
#define s scanf
main(){
	char immanuel_kant[20],sigmund_freud[20],giblert_ryle[20],merleau_ponty[20],name[20];
	int a;
	a = 0;
    p("Enter Your name: ");
    s("%s",&name);
	
	p("\nGuess this philosopher: \nan influential German philosopher in -\nthe Age of Enlightenment: ");
	s("%s",&immanuel_kant);
	if(strcmp(immanuel_kant,"immanuel_kant")==0){
		p("\n\nHappiness is not an ideal of reason, but of imagination. \nOrganizing Self\n");
		p("Kant's views continue to have a major influence on contemporary philosophy,\nespecially the fields of epistemology,ethics, \npolitical theory, and post-modernaesthetics.");
	}
		
	p("\n\n\nGuess this philosopher: \nan Austrian neurologist and the founder of psychoanalysis,\na clinical method for treating psychopathology through \ndialogue between a patient and a psychoanalyst. ");
	s("%s",&sigmund_freud);
	if(strcmp(sigmund_freud,"sigmund_freud")==0){
		p("\n\nThe goal of all life is death.\nThe EGO compromise");
		p("\nKant's views continue to have a major \ninfluence on contemporary philosophy, \nespecially the fields of epistemology, \nethics, political theory, and post-modern aesthetics.");
	}
	
	p("\n\n\nGuess this philosopher: \nHe was a representative of the generation of - \nBritish ordinary language philosophers who shared -\nLudwig Wittgenstein's approachto philosophical problems,- \nand is principally known for his critique of Cartesian dualism,\nfor which he coined the phrase the ghost in the machine.");
	s("%s",&giblert_ryle);
	if(strcmp(giblert_ryle,"giblert_ryle")==0){
		p("\nA person who has a good nose for arguments or jokes may have a bad head for facts.\n");
		p("\n\nSome of his ideas in the philosophy of \nmind have been referred to as\nbehaviourist. \nRyle's best known book is \nThe Concept of Mind (1949), in which\nhe writes that the general trend of this\nbook will undoubtedly, and harmlessly,\nbe stigmatised as 'behaviourist.");
	}
	
	p("\n\n\nGuess this philosopher: A French phenomenological \nphilosopher, strongly influenced by \nEdmund Husserl and Martin Heidegger. ");
    s("%s",&merleau_ponty);
    if(strcmp(merleau_ponty, "merleau_ponty")==0){
	  p("\nThe body is our general medium for having a world.\n");
	  p("\n\nThe constitution of meaning in human\nexperience was his main interest and he\nwrote on perception, art, and politics. At\nthe core of Merleau-Ponty's philosophy\nis a sustained argument for the\nfoundational role perception plays in\nunderstanding the world as well as\nengaging with the world.");
	}
	
if(strcmp(immanuel_kant,"immanuel_kant")==0){
		a++;
	}
if(strcmp(sigmund_freud,"sigmund_freud")==0){
		a++;
	}
if(strcmp(giblert_ryle,"giblert_ryle")==0){
		a++;
	}
if(strcmp(merleau_ponty, "merleau_ponty")==0){
		a++;
	}
	
	p("%s's score is: %d",name,a);
}
