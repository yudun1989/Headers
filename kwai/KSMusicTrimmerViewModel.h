//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KSMusicItem, KSMusicResourceManager;
@protocol OS_dispatch_group;

@interface KSMusicTrimmerViewModel : NSObject
{
    CDUnknownBlockType _loadMusicInfoStart;
    CDUnknownBlockType _loadLyricsStart;
    CDUnknownBlockType _loadLyricsCompletion;
    CDUnknownBlockType _loadMusicUrlStart;
    CDUnknownBlockType _loadMusicUrlCompletion;
    CDUnknownBlockType _loadMusicInfoCompletion;
    KSMusicResourceManager *_musicResourceManager;
    NSObject<OS_dispatch_group> *_group;
}

+ (id)viewModelWithMusicItem:(id)arg1;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *group; // @synthesize group=_group;
@property(retain, nonatomic) KSMusicResourceManager *musicResourceManager; // @synthesize musicResourceManager=_musicResourceManager;
@property(copy, nonatomic) CDUnknownBlockType loadMusicInfoCompletion; // @synthesize loadMusicInfoCompletion=_loadMusicInfoCompletion;
@property(copy, nonatomic) CDUnknownBlockType loadMusicUrlCompletion; // @synthesize loadMusicUrlCompletion=_loadMusicUrlCompletion;
@property(copy, nonatomic) CDUnknownBlockType loadMusicUrlStart; // @synthesize loadMusicUrlStart=_loadMusicUrlStart;
@property(copy, nonatomic) CDUnknownBlockType loadLyricsCompletion; // @synthesize loadLyricsCompletion=_loadLyricsCompletion;
@property(copy, nonatomic) CDUnknownBlockType loadLyricsStart; // @synthesize loadLyricsStart=_loadLyricsStart;
@property(copy, nonatomic) CDUnknownBlockType loadMusicInfoStart; // @synthesize loadMusicInfoStart=_loadMusicInfoStart;
- (void).cxx_destruct;
- (void)notifyLoadingFinished;
- (void)startLoadMusicInfo;
- (void)trimMusicWithTrimRange:(CDStruct_e83c9415)arg1 completion:(CDUnknownBlockType)arg2;
- (id)musicLocalPath;
- (id)musicCacheKey;
- (id)musicCDNs;
- (id)musicURLString;
- (void)loadMusicInfo;
@property(readonly, nonatomic) KSMusicItem *music;
- (id)initWithMusicItem:(id)arg1;

@end

