PassMark ImageUSB V1.3
Copyright (C) 2010-2016 PassMark Software
All Rights Reserved
http://www.passmark.com 


Overview
========
ImageUSB is a free utility which lets you write an image concurrently to
multiple USB Flash Drives. Capable of creating exact bit-level copies of
USB Flash Drive (UFDs), ImageUSB is an extremely effective tool for the mass
duplication of UFDs. Unlike other USB duplication tools, ImageUSB can
preserve all unused and slack space during the cloning process, including
the Master Boot Record (MBR). ImageUSB can perform flawless mass duplications
of all UFD images, including bootable UFDs. 

The tool can also be used for computer forensics purposes. With the disk image
file created by ImageUSB being compatible with the OSForensics software.

Note: imageUSB is currently only able to handle images (.bin) files that were
created by imageUSB.  

Running this software to write an image file will destroy any data on any
removable drive volume specified.

To install imageUSB
===================
Unzip the file .ZIP file, imageusb.zip.
Copy the files to the Program Files directory (or any other folder).


To uninstall imageUSB
=====================
Delete the files.


Requirements
============
- Operating System: XP SP3, Vista, Windows 7, 8, 10
- RAM: 256 Meg 
- Disk space: 3MB free hard disk space, plus any additional space required to store image file.

Usage
=====
1) Before starting: If you need to keep the current content of your USB drive,
   back it up before you start. This process will overwrite the USB drive selected,
   so remove any other removable drives on the system to reduce the likelihood of mistakes.
2) This program requires Adminstration Privileges..
3) Follow the instructions on screen or in the Help documentation provided.
   Be very careful to select the correct drive letter!!!
   We don't want any more EMails about people accidentally overwriting their wedding photos.
   
Version History
===============
Here is a summary of all changes that have been made in each version of 
imageUSB.

Release 1.3.1006
WIN32 release 13 Mar 2018
-Fixed word wrapping issue in log after resizing window.
-Should now run on WindowsXP SP3 again. Support for Windows XP may be dropped in the future.

Release 1.3.1005
WIN32 release 12 Mar 2018
-Main Window is resizable vertically.
-Fixed possible write failure bug when trying to reimage a drive that may have not have a mount point assigned (i.e. drive letter) to its volumes. imageUSB would fail to properly lock/unmount volume. As seen in MemTest86 on some Windows 10 machines.

Release 1.3.1004
WIN32 release 19 Oct 2017
-Added FAT32 as a format option.
-Fixed a bug with partition extension not operating correctly on NTFS partitions after imaging.

Release 1.3.1003
WIN32 release 31 Jul 2017
-Fixed a bug causing imageUSB crash on encountering excessively long or badly formatted drive serial numbers.
-Application taskbar will show current progress.
-Added Drag and Drop. Allow user to drag file from Windows Explorer when imaging method is "Write Image".
-Changed logtime from seconds elapsed to timestamp.
-Added option to turn on Beep on Completion.

Release 1.3.1002
WIN32 release 16 Sep 2016
-Fixed a bug causing imageUSB to incorrectly fail a verification by reading more bytes than available on the destination image/drive.
-Fixed a bug on Windows XP where the GUI log would display an unknown character at the end of each line.

Release 1.3.1001
WIN32 release 26 Apr 2016
-Fixed a bug causing imageUSB to incorrectly write the header block back to the disk when image is not of even 1 MB chunks.

Release 1.3.1000
WIN32 release 19 Apr 2016
- ImageUSB now supports Physical Disks instead of only volumes assigned drive letters by Windows.
  This should allow disks previous not selectable to be imagable. (unformatted drives, Linux drives, etc..)
- Various GUI changes:
   ListView changed to TreeView control. This changed is to allow showing of partition information for each drive.
   New flashing complete dialog to indicate imaging completion and success or failure.
   Running count of number of drives selected for imaging is now displayed.

Release 1.2.1006
WIN32 release 7 Oct 2015
- Addressed issue where extending partition on some NTFS drive would fail if the USB drive (preimaged) was already partitioned as max sized.

Release 1.2.1005
WIN32 release 9 Sep 2015
- Addressed issue where some drives have the same volume GUID and would cause imageUSB unable to determine disk number for the UFD.

Release 1.2.1004
WIN32 release 29 Jul 2015
- Addressed issue during image creation where imageUSB will error out before finishing the image for certain drive.

Release 1.2.1003
WIN32 release 30 Mar 2015
-Format will add an MBR at sector 0 and partition entry table will point to the partition that was formatted.
-Updated Format progress bar to stop and reset when completed.

Release 1.2.1002
WIN32 release 24 Mar 2015
-Updated and added various Text/Strings to be more relevant to the action being performed. 
-Added speed in status. Speed is typically govern by the slowest IO (e.g. write). Speed displayed is the
 average for the entire process.
-Increased visible GUI log size

Release 1.2.1001
WIN32 release 23 Mar 2015
-Fixed crash when creating Image with Post Image Verification enabled.

Release 1.2.1000
WIN32 release 20 Mar 2015
-Fixed issue when Zeroing GPT formatted drives. Will not correctly zero MBR and Primary GPT and Secondary GPT.
-New Zero behavior. Zeroing will wipe entire drive (write 0x00 to the whole drive).
-Added option to extend partition when writing image. Only supported for single partition images with NTFS filesystem.
-Reformat option will Zero the drive (boot sector only) and reclaim any disk space and format the volume with NTFS filesystem. Requires Vista or later.

Release 1.1.1015
WIN32 release 26 Jun 2014
-Fixed issue when Zeroing GPT formatted drives. Will not correctly zero MBR and Primary GPT and Secondary GPT.

Release 1.1.1014
WIN32 release 16 Dec 2013
-Option to Zero the Master Boot Record. This will allow Windows to see the full size of the drive after reinserting. Windows should
 automatically prompt to format unrecognized drive.
-New warning message if you try to write an image located on any of the drives selected as destination drives.

Release 1.1.1013
WIN32 release 16 Oct 2013
-Verify Bug Fix
-In DebugMode, when verifying option is checked and when image is a valid imageUSB .bin file, the checksum will be calculated on 
 the actual image as well. Drive checksum comparison will still be against checksum stored in header.

Release 1.1.1012
WIN32 release 16 Oct 2013
- Write verification is now supported for images not created with imageUSB. A checksum will be calculated for the image and then compared to the image written on the UFD.
- Enabled UFD list while imageUSB is writing/creating images. Should allow you to scroll the list to see progress of all UFD when more than 4 drives are used.
- Source code clean up

Release 1.1.1011
WIN32 release 18 March 2013
- Added ability to select '.img' files.

Release 1.1.1010
WIN32 release 22 October 2012
-Fixed a program crash when reading fake USB drives. It seems that some USB flash drives are tricking the Windows API to incorrectly recognizing the end of the drive.

Release 1.1.1009
WIN32 release 9 July 2012
-Allows writing images larger than destination drives. End of the image will be truncated and not be written to the drive.

Release 1.1.1008
WIN32 release 19 January 2012
-Added a delay on retry for failed write attempts. Will wait 1 sec before retry.
-Address an issue where writing image would sometimes fail with Error 5: Access is Denied.

Release 1.1.1007
WIN32 release 16 November 2011
-Fixed some erroneous debug logging messages.
-Tweaked verification settings, should report which offset verification failed at.
-For Writing to flash drive, upon write failure, imageUSB will retry up to 3 times to rewrite to the failed location.

Release 1.1.1006
WIN32 release 6 October 2011
-Improved debug logging. 

Release 1.1.1005
WIN32 release 6 July 2011
- Added the ability to write .ISO to USB drives. The drive must be bigger than the iso and the drive size will
  be truncated to the size of the iso. To recover lost storage, use Window's Disk Management tool.

Release 1.1.1004
WIN32 release 25 January 2011
- Fixed an issue that would occur if more than one drives are being processed at once (happened sporadically).
- Added "-d" command line option that will log additional debug info
- Fixed typos

Release 1.1.1003 
WIN32 release 22 December 2010
- Notification/prompt when imaging finishes.
- Option for post image verification for both creating from and writing from usb drives.
  Previously, writing to drives always was verified. Verification may double the imaging
  time.
- Each image created with imageUSB will have an accompanying log file written with checksum
  values calculated during the creation process.
- MD5 & SHA1 checksum calculation implemented
- Now with more warning prompts! To prevent accidently destroying data.
- Simultaneous image creation is now supported. See the help documentation for naming
  convention used.
- Running imageUSB with -l command line will save a log (The same one as seen at the bottom of the GUI).

Release 1.1.1002 
WIN32 release 15 December 2010
- Fixed issue with overall progress bar not updating for subsequent writes after aborting.
- Cosmetic / UI changes/fixes
- Signed Executable

Release 1.1.1001 
WIN32 release 8 December 2010
- Concurrent image writing to UFD.
- Asthetics Changes.

Release 1.1.1000 
WIN32 release  1 December 2010
- GUI version.

Release 1.0.1001
WIN32 release 23 July 2010
- The USB Flash Drive data is now verified.

Release 1.0.1000 
WIN32 release 17 June 2010
- First version.


Support
=======
For technical support, questions, suggestions, please check the help file for 
our email address or visit our web page at http://www.passmark.com


Enjoy..
The PassMark Development team
