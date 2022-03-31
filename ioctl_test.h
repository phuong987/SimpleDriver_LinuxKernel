#ifndef IOCTL_TEST_H
#define IOCTL_TEST_H

struct mystruct{
	int number;
	char string[64];
};

#define WR_VALUE _IOW('phuong', 'cute', int32_t *)
#define RD_VALUE _IOR('phuong', 'rich', int32_t *)
#define GREETER  _IOW('phuong', 'kind', struct mystruct *)

#endif
