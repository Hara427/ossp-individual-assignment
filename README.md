# ossp-individual-assignment
####   Name     Beminet Aderaw
####   Id       1600779
![calculate linux](https://github.com/Beminet-Aderaw/ossp-individual-assignment/blob/main/calculate%20linux%20logo.jpg?raw=true)
# calculate linux installation
#### This document is an individual assignment on the installation and configuration of the Calculate Linux operating system using VMware Workstation. It begins with an introduction to Calculate Linux, a Gentoo-based distribution known for its customization and performance. The document explores the motivation behind using virtualization, its objectives, and the historical development of Calculate Linux. It provides a detailed step-by-step installation guide, including hardware and software requirements. Common issues encountered during installation are documented along with practical solutions. The document also discusses supported file systems like ext4, Btrfs, and XFS. Furthermore, it evaluates the advantages and disadvantages of using Calculate Linux. Conclusions and future recommendations guide further exploration. Finally, the document includes a comprehensive overview of virtualization, its uses, and how it works within modern operating systems.
[you can download calculate linux iso image in this website] (https://mirror.calculate-linux.org/release/20250512/cld-20250512-x86_64.iso)
# system call
#### The setgid() system call in Unix-like operating systems is used to set the group ID of the calling process. This function allows a process to change its real group ID (GID) to a specified value, which affects its access permissions to files and resources. Only a privileged process (typically with root permissions) can set the GID to an arbitrary value. If a non-privileged process attempts to change its GID, it must set it to its effective group ID or saved set-group-ID. Changing the group ID is crucial in implementing security models, such as dropping privileges after starting with elevated rights. The new group ID determines the default group ownership of newly created files and affects permission checks. setgid() returns zero on success and -1 on failure, setting errno to indicate the error. It is defined in <unistd.h> and commonly used in daemons or setuid/setgid programs. Improper use can lead to security vulnerabilities if group privileges are not handled
# references
[1](https://en.wikipedia.org)

[2](https://www.calculate-linux.org)

[3](https://old.calculate-linux.org)

[4](https://distrowatch.com)

[5](https://www.techphylum.com)

[6](https://scalecomputing.com)

[7](https://www.redhat.com)

[8](https://www.quora.com)

[9](https://man7.org)

[10](https://www.cbtnuggets.com)
