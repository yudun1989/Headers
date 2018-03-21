//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface QQPathConstants : NSObject
{
    NSString *_homePath;
    NSString *_docPath;
    NSString *_libPath;
    NSString *_tempPath;
    NSString *_fullImagePath;
}

+ (id)instance;
- (id)fullImagePath;
- (id)tempPath;
- (id)libPath;
- (_Bool)addSkipBackupAttributeToFileAtPath:(id)arg1;
- (_Bool)removeBackupAttributeToFileAtPath:(id)arg1;
- (id)docPath;
- (id)homePath;
- (void)dealloc;

@end

