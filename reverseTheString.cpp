void reverse(int i,int j, string& name){
    if(i>j){
        return ;
    }
    swap(name[i],name[j]);
    i++;
    j--;

    reverse(i,j,name);
}
string reverseString(string str)
{
    reverse(0,str.length()-1,str);
    return str;
	// Write your code here.
}
