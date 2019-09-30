![Hacktoberfest](https://hacktoberfest.digitalocean.com/assets/logo-hf19-header-8245176fe235ab5d942c7580778a914110fa06a23c3d55bf40e2d061809d8785.svg "Hacktoberfest")

[![Gitter](https://badges.gitter.im/OpenSourceTalks/community.svg)](https://gitter.im/OpenSourceTalks/community?utm_source=badge&utm_medium=badge&utm_campaign=pr-badge) 

# 🎃 HacktoberFest'19 Icebreaker Project 🎃

This repo aims to give to an introduction as how the Open Source world functions.
Use this project to make your first contribution to an open source project on GitHub. Practice making your first pull request to a public repository before doing the real thing!

Make sure to grab some cool swags during [Hacktoberfest](https://hacktoberfest.digitalocean.com/) by getting involved in the open source community and completing some simple tasks in this project.

This repository is open to all members of the GitHub community. Any member may contribute to this project without being a collaborator.

[https://helios1101.github.io/hacktoberfest/](https://helios1101.github.io/hacktoberfest_19/)

## What is Hacktoberfest?
A month-long celebration from October 1st - 31st presented by [Digital Ocean](https://hacktoberfest.digitalocean.com/) and [DEV Community](https://dev.to/) collaborated with [GitHub](https://github.com/blog/2433-celebrate-open-source-this-october-with-hacktoberfest) to get people involved in [Open Source](https://github.com/open-source). Create your very first pull request to any public repository on GitHub and contribute to the open source developer community.

[https://hacktoberfest.digitalocean.com/](https://hacktoberfest.digitalocean.com/)

## How to contribute to this project
Here are 3 quick and painless ways to contribute to this project:

* Add your name to the `CONTRIBUTORS.md` file
* Add a profile page to the `profiles` directory
* Create a simple "Hello, World" script in a language of your choice

Choose one or all 3, make a pull request for your work and wait for it to be merged!

## Rules
To qualify for the __official limited edition Hacktoberfest shirt__, you must register [here](https://hacktoberfest.digitalocean.com/) and make four Pull Requests (PRs) between October 1-31 (in any time zone). PRs can be made to any public repo on GitHub, not only the ones with issues labeled Hacktoberfest. This year, the __first 50,000__ participants who successfully complete the challenge will earn a T-shirt.

## Steps to follow :scroll:

### 1. Fork it :fork_and_knife:

You can get your own fork/copy of [HacktoberFest_19](https://github.com/helios1101/HacktoberFest_19) by using the <a href="https://github.com/helios1101/HacktoberFest_19/new/master?readme=1#fork-destination-box"><kbd><b>Fork</b></kbd></a> button or clicking [this](https://github.com/helios1101/HacktoberFest_19/new/master?readme=1#fork-destination-box) at top-right of your screen.

 [![Fork Button](https://help.github.com/assets/images/help/repository/fork_button.jpg)](https://github.com/helios1101/HacktoberFest_19/)


### 2. Clone it :busts_in_silhouette:

`NOTE: ommands are to be xeuted on LInux,Ma and Windows (using Powershell)`

You need to clone (download) it to local machine using

```sh
$ git clone https://github.com/Your_Username/HacktoberFest_19.git
```

> This makes a local copy of repository in your machine.

Once you have cloned the `HacktoberFest_19` repository in Github, move to that folder first using change directory command on Linux, Mac and Windows(powershell to be used).

```sh
# This will change directory to a folder Algo_Ds_Notes
$ cd Algo_Ds_Notes
```

Move to this folder for all other commands.

### 3. Set it up :arrow_up:

Run the following commands to see that *your local copy* has a reference to *your forked remote repository* in Github :octocat:

```sh
$ git remote -v
origin  https://github.com/Your_Username/HacktoberFest_19.git (fetch)
origin  https://github.com/Your_Username/HacktoberFest_19.git (push)
```

Now, lets add a reference to the original [HacktoberFest_19](https://github.com/helios1101/HacktoberFest_19/) repository using

```sh
$ git remote add upstream https://github.com/helios1101/HacktoberFest_19.git
```

> This adds a new remote named ***upstream***.

See the changes using

```sh
$ git remote -v
origin    https://github.com/Your_Username/Algo_Ds_Notes.git (fetch)
origin    https://github.com/Your_Username/Algo_Ds_Notes.git (push)
```
`In your ase you will see`
```sh
$ git remote -V
upstream  https://github.com/helios1101/HacktoberFest_19.git (fetch)
upstream  https://github.com/helios1101/HacktoberFest_19.git (push)
```

### 4. Sync it :recycle:

Always keep your local copy of repository updated with the original repository.
Before making any changes and/or in an appropriate interval, run the following commands *carefully* to update your local repository.

```sh
# Fetch all remote repositories and delete any deleted remote branches
$ git fetch --all --prune

# Switch to `master` branch
$ git checkout master

# Reset local `master` branch to match `upstream` repository's `master` branch
$ git reset --hard upstream/master

# Push changes to your forked `HacktoberFest_19` repo
$ git push origin master
```

### 5. Ready Steady Go... :turtle: :rabbit2:

Once you have completed these steps, you are ready to start contributing by checking our `Help Wanted` Issues and creating [pull requests](https://github.com/helios1101/HacktoberFest_19/pulls).

### 6. Create a new branch :bangbang:

Whenever you are going to make contribution. Please create seperate branch using command and keep your `master` branch clean (i.e. synced with remote branch).

```sh
# It will create a new branch with name Branch_Name and switch to branch Folder_Name
$ git checkout -b Folder_Name
```

Create a seperate branch for contibution and try to use same name of branch as of folder.

To switch to desired branch

```sh
# To switch from one folder to other
$ git checkout Folder_Name
```

To add the changes to the branch. Use

```sh
# To add all files to branch Folder_Name
$ git add .
```

Type in a message relevant for the code reveiwer using

```sh
# This message get associated with all files you have changed
$ git commit -m 'relevant message'
```

Now, Push your awesome work to your remote repository using

```sh
# To push your work to your remote repository
$ git push -u origin Folder_Name
```

Finally, go to your repository in browser and click on `compare and pull requests`.
Then add a title and description to your pull request that explains your precious effort.

## Help Contributing Guides :crown:

We love to have `articles` and `codes` in different languages and `betterment` of existing ones.

Please discuss it with us first by creating new issue.

:tada: :confetti_ball: :smiley: _**Happy Contributing**_ :smiley: :confetti_ball: :tada:




