//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MQChatFileUtil : NSObject
{
}

+ (id)getFileWithName:(id)arg1;
+ (_Bool)saveFileWithName:(id)arg1 data:(id)arg2;
+ (void)playSoundWithSoundFile:(id)arg1;
+ (double)getAudioDurationWithData:(id)arg1;
+ (float)audioDuration:(id)arg1;
+ (_Bool)deleteFileAtPath:(id)arg1;
+ (_Bool)fileExistsAtPath:(id)arg1 isDirectory:(_Bool)arg2;

@end

