This is a learning project for people who know some C++, who are willing to
learn how to do test-driven development/design (TDD) properly, and who are
willing to do some research by themselves too.

The most interesting source of information is the git commit messages. Each
message consists of a short first line, you can think of it as the title of
a blog article, followed by an empty line and a lot of text (more than usual
for software projects) formatted with a minimal subset of the markdown markup
language.

The project is simplistic, and I try to maximize the things which you learn
while at the same time requiring you to write as less code as possible - this
approach minimizes the risk on your side of a bad time investment.

However, the project won't babysit you - if you find a term, a tool, a concept,
which you know nothing about, you are supposed to research by yourself, and, in
extreme cases, to also ask. Maybe I can clarify some of the things which appear
obvious to me, but to you, as a beginner, are not that obvious.

If you want to learn from it, you are supposed to read the commits on the
master branch in chronological order, from the oldest to the newest commit.

Do not rush into reading the last version of the code, because the latest state
of it is not the point of this project. The project is simplistic enough,
algorithmically, in order to focus on the art of crafting code.

Before you start, you should document yourself for a few hours or days about
the following concepts and tools:

* test-driven development, test-driven design
* domain-driven design (the project is too simplistic for DDD, but some ideas
  are still pointed out when I see fit)
* agile development, iterative development
* git
* cmake

You should be able to work on the command line. Microsoft operating systems
have one too, you should be able to use it, it's very powerful, once you master
it.

Although I strive to make this (both the code, and the learning process itself)
work on as many platforms as possible, I cannot really test it on any other
platforms but the ones that I use most, and that pretty much restricts me to
Linux. However, if something is not working properly or if you know how to fix
something, please file a bug report or send a pull request.

That being said, you must remember two commands. This one you will be using
only right after you have cloned the repository. It will reset the state of
your local master branch to the first commit:

    git reset --hard `git rev-list --max-parents=0 origin/master`

Now you can read the code (there will be only testing code at first, because
that's how test-DRIVEN development works: first the testing code, then the
production code), but most importantly:

Now you should read the commit message of the `HEAD` commit, by using:

    git log -1

Sometimes, this last message gives you instructions on what you should do,
sometimes it's not. But it will always explain what has been done in this last
commit, why, and perhaps also what it's going to happen next.

If you want to see both the commit message, and the diff (you should get used
to reading diffs, really), you can use the command:

    git show HEAD

The second command you should remember is the one that will jump you from the
current commit, to the next one, "to the next lesson" so to speak:

    git reset --hard `git rev-list --ancestry-path --date-order --reverse master..origin/master|head -n 1`

That being said, have fun!

Oh, one last thing:

Although this project is small, if it gathers enough momentum, I intend to cram
in as many information as possible, to showcase the most variate types of
scenarios, to make the most diverse user interfaces I can think of, like

* GUI (perhaps Qt, perhaps something else)
* web
* OpenGL

Or to make various types of boards.

So, if you appreciate the educational value of this, please share, debate on
reddit or other hackers' groups.

Thanks
