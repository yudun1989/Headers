//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TTVPlayerContext-Protocol.h"
#import "TTVPlayerTracker-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSString, TTVPlayerStateStore;

@interface TTVPlayerTracker : NSObject <TTVPlayerContext, TTVPlayerTracker>
{
    _Bool _isReplaying;
    _Bool _isRetry;
    NSString *_trackLabel;
    NSString *_itemID;
    NSString *_groupID;
    NSString *_videoSubjectID;
    NSString *_categoryID;
    long long _aggrType;
    NSString *_adID;
    NSString *_logExtra;
    NSDictionary *_logPb;
    NSString *_enterFrom;
    NSString *_categoryName;
    NSString *_authorId;
    TTVPlayerStateStore *_playerStateStore;
    NSMutableDictionary *_extras;
}

@property(retain, nonatomic) NSMutableDictionary *extras; // @synthesize extras=_extras;
@property(nonatomic) _Bool isRetry; // @synthesize isRetry=_isRetry;
@property(nonatomic) _Bool isReplaying; // @synthesize isReplaying=_isReplaying;
@property(retain, nonatomic) TTVPlayerStateStore *playerStateStore; // @synthesize playerStateStore=_playerStateStore;
@property(copy, nonatomic) NSString *authorId; // @synthesize authorId=_authorId;
@property(copy, nonatomic) NSString *categoryName; // @synthesize categoryName=_categoryName;
@property(copy, nonatomic) NSString *enterFrom; // @synthesize enterFrom=_enterFrom;
@property(copy, nonatomic) NSDictionary *logPb; // @synthesize logPb=_logPb;
@property(copy, nonatomic) NSString *logExtra; // @synthesize logExtra=_logExtra;
@property(copy, nonatomic) NSString *adID; // @synthesize adID=_adID;
@property(nonatomic) long long aggrType; // @synthesize aggrType=_aggrType;
@property(copy, nonatomic) NSString *categoryID; // @synthesize categoryID=_categoryID;
@property(copy, nonatomic) NSString *videoSubjectID; // @synthesize videoSubjectID=_videoSubjectID;
@property(copy, nonatomic) NSString *groupID; // @synthesize groupID=_groupID;
@property(copy, nonatomic) NSString *itemID; // @synthesize itemID=_itemID;
@property(copy, nonatomic) NSString *trackLabel; // @synthesize trackLabel=_trackLabel;
- (void).cxx_destruct;
- (id)ttv_exitFullscreenAction;
- (id)ttv_fullscreenAction;
- (id)ttv_enterFullscreenType;
- (id)ttv_dataTrackLabel;
- (id)ttv_dictWithEvent:(id)arg1 label:(id)arg2;
- (_Bool)ttv_sendEvenWhenPlayActively;
- (void)actionChangeCallbackWithAction:(id)arg1 state:(id)arg2;
- (void)ttv_kvo;
- (void)sendEndTrack;
- (id)extraFromEvent:(id)arg1;
- (void)addExtra:(id)arg1 forEvent:(id)arg2;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

