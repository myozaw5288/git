int main(int argc, char **argv)
{
char first[255], last[255];
printf("Enter your first name: ");
fgets(first, 255, stdin);
first[strlen(first)-1] = '\0'; /* remove the newline at the end */
<<<<<<< HEAD
printf("Hello %s %s!\n",name);
printf("Hello, %s %s!\n", name);
=======
printf("Now enter your last name: ");
gets(last); /* buffer overflow? what's that? */
printf("Hello %s %s!\n", first, last);
>>>>>>> 40c8b089e009cdfd42b189cf0e978f20b97bacd5
return 0;
}