![Hacktoberfest](https://github.com/helios1101/HacktoberFest_20/blob/master/Task1/img/hacktoberfest-logo.png "Hacktoberfest")

[![Gitter](https://badges.gitter.im/OpenSourceTalks/community.svg)](https://gitter.im/OpenSourceTalks/community?utm_source=badge&utm_medium=badge&utm_campaign=pr-badge) [![PRs Welcome](https://img.shields.io/badge/PRs-welcome-brightgreen.svg?style=flat-square)](http://makeapullrequest.com)

# 🎃 HacktoberFest'20 Icebreaker Project 🎃

This repository aims to give an introduction as to how the Open Source World functions.
Use this project to make your first contribution to an open-source project on GitHub. Practice making your first pull request to a public repository before doing the real thing!

Make sure to grab some cool swags during [Hacktoberfest](https://hacktoberfest.digitalocean.com/) by getting involved in the open-source community and completing some simple tasks in this project.

This repository is open to all  members of the GitHub community. Any member can contribute to this project without being a collaborator.

Repo Link : [helios1101.github.io/hacktoberfest'19/](https://helios1101.github.io/hacktoberfest_20/)

## What is Hacktoberfest?
A month-long celebration from October 1st to October 31st presented by [Digital Ocean](https://hacktoberfest.digitalocean.com/) and [DEV Community](https://dev.to/) collaborated with [GitHub](https://github.com/blog/2433-celebrate-open-source-this-october-with-hacktoberfest) to get people involved in [Open Source](https://github.com/open-source). Create your very first pull request to any public repository on GitHub and contribute to the open-source developer community.

[https://hacktoberfest.digitalocean.com/](https://hacktoberfest.digitalocean.com/)


## Rules
To qualify for the __official limited edition Hacktoberfest shirt__, you must register [here](https://hacktoberfest.digitalocean.com/) and make four Pull Requests (PRs) between October 1-31 (in any time zone). PRs can be made to any public repo on GitHub, not only the ones with issues labeled Hacktoberfest. This year, the __first 50,000__ participants who complete the challenge will earn a T-shirt.



## Choose from these tasks 

Here are 3 quick and easy ways to contribute to this project:

* Task-1: [Add your name and description](https://github.com/helios1101/HacktoberFest_20/tree/master/Task1)
Add your name to the website with description and make your way to Open Source.

* Task-2: [Making your Own portfolio page](https://github.com/helios1101/HacktoberFest_20/tree/master/Task2) 
Host your very own portfolio page in minutes and share with us to get nearer to swags

* Task-3: [Show Off coding skills](https://github.com/helios1101/HacktoberFest_19/tree/master/Task3)
Help us in making a one-stop place to find necessary codes and articles, which can vary from `Hello World` to `Dynamic Programming` in any language of your choice.  

Choose one or all 3, make a pull request for your work and wait for it to be merged!


## Steps to follow :scroll:

### 0. Star The Repo :star2:

Star the repo by pressing the topmost-right button to start your wonderful journey.


### 1. Fork it :fork_and_knife:

You can get your own fork/copy of [HacktoberFest_19](https://github.com/helios1101/HacktoberFest_19) by using the <a href="https://github.com/helios1101/HacktoberFest_19/new/master?readme=1#fork-destination-box"><kbd><b>Fork</b></kbd></a> button or clicking [this](https://github.com/helios1101/HacktoberFest_19/new/master?readme=1#fork-destination-box) at top-right of your screen.

 [![Fork Button](https://help.github.com/assets/images/help/repository/fork_button.jpg)](https://github.com/helios1101/HacktoberFest_19/)


### 2. Clone it :busts_in_silhouette:

`NOTE: commands are to be executed on Linux, Mac, and Windows(using Powershell)`

You need to clone (download) it to local machine using

```sh
$ git clone https://github.com/Your_Username/HacktoberFest_19.git
```

> This makes a local copy of the repository in your machine.

Once you have cloned the `HacktoberFest_19` repository in Github, move to that folder first using change directory command on Linux, Mac, and Windows(PowerShell to be used).

```sh
# This will change directory to a folder HacktoberFest_19
$ cd Hacktoberfest_19
```

Move to this folder for all other commands.

### 3. Set it up :arrow_up:

Run the following commands to see that *your local copy* has a reference to *your forked remote repository* in Github :octocat:

```sh
$ git remote -v
origin  https://github.com/Your_Username/HacktoberFest_19.git (fetch)
origin  https://github.com/Your_Username/HacktoberFest_19.git (push)
```

Now, let's add a reference to the original [HacktoberFest_19](https://github.com/helios1101/HacktoberFest_19/) repository using

```sh
$ git remote add upstream https://github.com/helios1101/HacktoberFest_19.git
```

> This adds a new remote named ***upstream***.

See the changes using

```sh
$ git remote -v
origin    https://github.com/Your_Username/HacktoberFest_19.git (fetch)
origin    https://github.com/Your_Username/HacktoberFest_19.git (push)
upstream  https://github.com/Remote_Username/HacktoberFest_19.git (fetch)
upstream  https://github.com/Remote_Username/HacktoberFest_19.git (push)
```
`In your case, you will see`
```sh
$ git remote -V
origin    https://github.com/Your_Username/HacktoberFest_19.git (fetch)
origin    https://github.com/Your_Username/HacktoberFest_19.git (push)
upstream  https://github.com/helios1101/HacktoberFest_19.git (fetch)
upstream  https://github.com/helios1101/HacktoberFest_19.git (push)
```

### 4. Sync it :recycle:

Always keep your local copy of the repository updated with the original repository.
Before making any changes and/or in an appropriate interval, run the following commands *carefully* to update your local repository.

```sh
# Fetch all remote repositories and delete any deleted remote branches
$ git fetch --all --prune

# Switch to `master` branch
$ git checkout master

# Reset local `master` branch to match the `upstream` repository's `master` branch
$ git reset --hard upstream/master

# Push changes to your forked `HacktoberFest_19` repo
$ git push origin master
```

### 5. Ready Steady Go... :turtle: :rabbit2:

Once you have completed these steps, you are ready to start contributing by checking our `Help Wanted` Issues and creating [pull requests](https://github.com/helios1101/HacktoberFest_19/pulls).

### 6. Create a new branch :bangbang:

Whenever you are going to contribute. Please create a separate branch using command and keep your `master` branch clean (i.e. synced with remote branch).

```sh
# It will create a new branch with name Branch_Name and switch to branch Folder_Name
$ git checkout -b BranchName
```

Create a separate branch for contribution and try to use the same name of the branch as of folder.

To switch to the desired branch

```sh
# To switch from one folder to other
$ git checkout BranchName
```

To add the changes to the branch. Use

```sh
# To add all files to branch Folder_Name
$ git add .
```

Type in a message relevant for the code reviewer using

```sh
# This message get associated with all files you have changed
$ git commit -m 'relevant message'
```

Now, Push your awesome work to your remote repository using

```sh
# To push your work to your remote repository
$ git push -u origin BranchName
```

Finally, go to your repository in the browser and click on `compare and pull requests`.
Then add a title and description to your pull request that explains your precious effort.


## Help Contributing Guides :crown:

We love to have `articles` and `codes` in different languages and the `betterment` of existing ones.

Please discuss it with us first by creating a new issue.

:tada: :confetti_ball: :smiley: _**Happy Contributing**_ :smiley: :confetti_ball: :tada:

## References :clipboard: :scroll:

- Books :book: :books:
    - Data Structures with C by Schaum Series
    - Data Structures: A Pseudocode Approach with C by Richard F. Gilberg
    - Fundamentals Of Data Structures in C by Horowitz
    - Java: The Complete Reference By Herbert Schildt
    - Object Oriented Programming with C++ by E Balaguruswamy
    - Introduction to Algorithms by Thomas H. Cormen, Charles E. Leiserson, Ronald L. Rivest, and Clifford Stein.
- Websites :computer:
    - [GeeksforGeeks](http://www.geeksforgeeks.org)
    - [hackerearth](https://www.hackerearth.com/notes)
    - [topcoder](https://www.topcoder.com/community/data-science/data-science-tutorials)
    - [tutorialspoint](http://www.tutorialspoint.com)
    - [Wikipedia](https://en.wikipedia.org)
    - [Progate](https://progate.com)

## Code Maintainers:
The project is maintained by :
 - [Harshit Singh](https://github.com/helios1101)
 - [Vishal Gorai](https://github.com/greyhatlinux)

