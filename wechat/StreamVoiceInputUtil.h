//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

@interface StreamVoiceInputUtil : MMObject
{
}

+ (_Bool)ifStreamVoiceInputMMVoipVadOn;
+ (id)genSessionId;
+ (id)genVoiceId:(id)arg1;
+ (id)genAudioBufferFromInputId:(unsigned int)arg1 offset:(unsigned int)arg2 length:(unsigned int)arg3;
+ (id)tempAudioFilePath:(unsigned int)arg1;
+ (id)tempAudioFileFolderPath;

@end

