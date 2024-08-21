/**
* @file
* @brief funciones sobre string
* @author Nicolle Montaño
* @copyright MIT license
*/

#include <string>

using std::string;
using std::cout;
using std::endl;

#ifndef STRINGS_H
#define STRINGS_H

namespace strings{
	/**
	* @brief verifica si pattern esta contenido en str
	* @param str Cadena de caracteres
	* @param pettern Patron a buscar dentro de str
	* @return true si pattern esta contenido en str
	*/

	/*bool contains(const string & str,
				  const string & pattern){
		size_t j;
		for (size_t i=0;i<str.length();i ++){
			for( j = 0;j<pattern.length();j++){
				if(str[i] == pattern[j]){
					i++;
					
				}else{
				break;
			}}
			if(j== pattern.length()){
				return true;
			}
		}
		return false;
	}*/
		bool contains(const string & str,  const string & pattern,size_t str_pos,size_t pat_pos,int depth=0){
			for (int i=0;i<depth;i++){
				cout<<"   ";
			}
			cout<<"contains( "
				<<str_pos<<" ;" 
				<<pat_pos<<")"
				<<endl;
		
			//if str_pos is at the end of str
			//if pat_pos is at the end of pattern
		
		if(pat_pos>=str.length() && pat_pos<pattern.length()){
			return false;
		}
		// pat_pos is at the end of pattern
		if(pat_pos>=pattern.length()){
			return true;
		}
		//General case
		if (str[str_pos]==pattern[pat_pos]){
			//Characters match, advance on both strings!
			return contains(
							str,
							pattern,
							str_pos+1,
							pat_pos+1,
							depth+1);
		}else{
			//Characters nost match!
			return contains(
							str,
							pattern,
							str_pos+1,
							0,
							depth);
		}
		}
		
}
#endif
