/**
{file:
{name: Logger.h}
{description: Logger interface to log to file. }
{copyright:
(c) 2017 Vidyo, Inc.,
433 Hackensack Avenue,
Hackensack, NJ  07601.
All rights reserved.
The information contained herein is proprietary to Vidyo, Inc.
and shall not be reproduced, copied (in whole or in part), adapted,
modified, disseminated, transmitted, transcribed, stored in a retrieval
system, or translated into any language in any form by any means
without the express written consent of Vidyo, Inc.}
}
*/

@interface Logger : NSObject
{
@private
    
    NSString        *appLogPrefix;
    NSString        *libLogPrefix;
    NSFileHandle    *fileHandle;
    NSRecursiveLock *logFileLock;
}

- (void)Close;
- (void)Log:(NSString*)str;
- (void)LogClientLib:(const char*)str;

@end

