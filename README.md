# reimu
An Autotools-like configure script written in Lua that makes a nob.c file, ready to be compiled, ran, and compile.

# Why Lua
I love Lua, and it is my favorite language, and I find it to be a lot more interesting than bash scripting, and if you want to do bash scripting, then just use GNU autotools. Another reason is that Lua isn't really used that much in stuff and I don't like that. As stated before, I love Lua, and I want more people to use it because it's really easy, and I don't want it to be seen as a "Toy Scripting Language" like Python (ew).

TLDR; I love Lua and I want to make it look good

# Name
The name comes from Reimu Hakurei of Touhou Project. She is an "incident resolver", who fixes big fights that intrude on other people and "people". This configure script is made to resolve different issues in the process of making a nobfile (?). I chose that name because it came to me very early in the day and I didn't want to forget about it, and I am a big fan of Touhou and Reimu herself.

TLDR; Reimu fix incidents. Program fix incidents. Name sticks. I am biased as well.

# Usage
## End users
Just run
```console
$ ./reimu.lua
```

## Devs

So.. How do you use it in your project? For now (as of 7/15/26), you have to go into `reimu.lua` and find the part where the final part of C code gets put into `nob.c`, and write all of it by hand to get piped into `nob.c`. In there, you need to add all the files that you want compiled. That should be all.

I am planning to one day have it somewhat how the C flags are, how they are turned into the final result with lots of string manipulation, but I think I need to turn the first part of the line into a variable, then add each of the files onto the end of the command, then turn that into a variable, then print that out in something like a for loop and `io.write()`.
