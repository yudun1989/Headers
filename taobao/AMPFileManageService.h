//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface AMPFileManageService : NSObject
{
    NSString *_mainDir;
    NSString *_userDir;
    NSString *_voiceDir;
    NSString *_videoDir;
    NSString *_pushVoiceDir;
    NSString *_headDir;
    NSString *_imageDir;
    NSString *_emoticonDir;
    NSString *_dynamicCarDir;
    NSString *_mobileContactDir;
    NSString *_functionalMenuDir;
}

+ (id)shareService;
@property(retain, nonatomic) NSString *functionalMenuDir; // @synthesize functionalMenuDir=_functionalMenuDir;
@property(retain, nonatomic) NSString *mobileContactDir; // @synthesize mobileContactDir=_mobileContactDir;
@property(retain, nonatomic) NSString *dynamicCarDir; // @synthesize dynamicCarDir=_dynamicCarDir;
@property(retain, nonatomic) NSString *emoticonDir; // @synthesize emoticonDir=_emoticonDir;
@property(retain, nonatomic) NSString *imageDir; // @synthesize imageDir=_imageDir;
@property(retain, nonatomic) NSString *headDir; // @synthesize headDir=_headDir;
@property(retain, nonatomic) NSString *pushVoiceDir; // @synthesize pushVoiceDir=_pushVoiceDir;
@property(retain, nonatomic) NSString *videoDir; // @synthesize videoDir=_videoDir;
@property(retain, nonatomic) NSString *voiceDir; // @synthesize voiceDir=_voiceDir;
@property(retain, nonatomic) NSString *userDir; // @synthesize userDir=_userDir;
@property(retain, nonatomic) NSString *mainDir; // @synthesize mainDir=_mainDir;
- (void).cxx_destruct;
- (_Bool)hasSubDir:(id)arg1 subName1:(id)arg2 subName2:(id)arg3;
- (_Bool)hasSubDir:(id)arg1 subName:(id)arg2;
- (id)appendSubDirAndCreat:(id)arg1 subName1:(id)arg2 subName2:(id)arg3;
- (id)appendSubDirAndCreat:(id)arg1 subName:(id)arg2;
- (id)userDirectory;
- (id)mainDirectory;
- (id)functionalMenuDirectory;
- (id)mobileContactDirectory;
- (_Bool)hasHeadDirectoryForUser:(id)arg1 channel:(unsigned long long)arg2 imgUrl:(id)arg3;
- (id)headDirectoryForUser:(id)arg1 channel:(unsigned long long)arg2 imgUrl:(id)arg3;
- (id)headDirectoryForUser:(id)arg1 channel:(unsigned long long)arg2;
- (id)headDirectory;
- (id)emoticonFilePathById:(id)arg1 emoticonId:(id)arg2 bGif:(_Bool)arg3;
- (_Bool)hasEmotionPackDirectory:(id)arg1;
- (id)emotionPackDirectory:(id)arg1;
- (id)emotionDirectory;
- (id)imageDirectoryForMessage:(id)arg1 msgId:(id)arg2;
- (id)imageDirectoryForSession:(id)arg1;
- (id)imageDirectory;
- (id)videoFileNameForMessage:(id)arg1;
- (id)videoPreviewImagePathForMessage:(id)arg1 ofSession:(id)arg2;
- (id)videoFilePathForMessage:(id)arg1 ofSession:(id)arg2;
- (_Bool)hasVideoPreviewImageForMessage:(id)arg1 ofSession:(id)arg2;
- (id)videoDirectoryForSession:(id)arg1;
- (id)pushVoiceFilePath:(id)arg1;
- (id)pushVoiceDirectory;
- (id)videoDirectory;
- (id)voiceFilePathForMessage:(id)arg1 msgId:(id)arg2;
- (_Bool)hasVoiceFileForMessage:(id)arg1 msgId:(id)arg2;
- (id)voiceDirectoryForSession:(id)arg1;
- (id)voiceDirectory;
- (void)reset;
- (void)startService;

@end

