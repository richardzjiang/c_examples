/* trim: remove trailing blanks, tabs, newlines */
int trim(char s[])
{
	int n;

	for (n = strlen(s)-1; n >= 0; n --)	/* strlen returns the length of the string */
		if (s[n] != ' ' && s[n] != '\t' && s[n] != '\n')
			break;
	s[n+1] = '\0';
	return n;
}
