//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQModel.h>

@class NSString;

@interface TBStoryMusicModel : QQModel
{
    _Bool _allMute;
    _Bool _videoOriginalSound;
    float _videoDuration;
    float _musicDuration;
    float _musicStart;
    float _musicProgress;
    NSString *_mixVideoPath;
    NSString *_musicPath;
    NSString *_musicTitle;
    long long _selectedMusic;
    long long _selectedMusicId;
    unsigned long long _audioType;
    struct CGPoint _musicOffset;
}

@property(nonatomic) unsigned long long audioType; // @synthesize audioType=_audioType;
@property(nonatomic) long long selectedMusicId; // @synthesize selectedMusicId=_selectedMusicId;
@property(nonatomic) long long selectedMusic; // @synthesize selectedMusic=_selectedMusic;
@property(retain, nonatomic) NSString *musicTitle; // @synthesize musicTitle=_musicTitle;
@property(nonatomic) struct CGPoint musicOffset; // @synthesize musicOffset=_musicOffset;
@property(nonatomic) float musicProgress; // @synthesize musicProgress=_musicProgress;
@property(nonatomic) float musicStart; // @synthesize musicStart=_musicStart;
@property(nonatomic) float musicDuration; // @synthesize musicDuration=_musicDuration;
@property(nonatomic) float videoDuration; // @synthesize videoDuration=_videoDuration;
@property(nonatomic) _Bool videoOriginalSound; // @synthesize videoOriginalSound=_videoOriginalSound;
@property(nonatomic) _Bool allMute; // @synthesize allMute=_allMute;
@property(retain, nonatomic) NSString *musicPath; // @synthesize musicPath=_musicPath;
@property(retain, nonatomic) NSString *mixVideoPath; // @synthesize mixVideoPath=_mixVideoPath;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clone:(id)arg1;
- (void)dealloc;

@end

