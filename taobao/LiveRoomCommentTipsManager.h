//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LiveRoomCommentBaseManager.h"

@class LiveRoomCommentModelCenter;

@interface LiveRoomCommentTipsManager : LiveRoomCommentBaseManager
{
    _Bool _flag;
    LiveRoomCommentModelCenter *_followModelCenter;
    LiveRoomCommentModelCenter *_speakModelCenter;
    LiveRoomCommentModelCenter *_lowEnterLiveRoomCenter;
    LiveRoomCommentModelCenter *_highEnterLiveRoomCenter;
}

@property(retain, nonatomic) LiveRoomCommentModelCenter *highEnterLiveRoomCenter; // @synthesize highEnterLiveRoomCenter=_highEnterLiveRoomCenter;
@property(retain, nonatomic) LiveRoomCommentModelCenter *lowEnterLiveRoomCenter; // @synthesize lowEnterLiveRoomCenter=_lowEnterLiveRoomCenter;
@property(retain, nonatomic) LiveRoomCommentModelCenter *speakModelCenter; // @synthesize speakModelCenter=_speakModelCenter;
@property(retain, nonatomic) LiveRoomCommentModelCenter *followModelCenter; // @synthesize followModelCenter=_followModelCenter;
@property(nonatomic) _Bool flag; // @synthesize flag=_flag;
- (void).cxx_destruct;
- (void)pushModelsToView:(id)arg1;
- (void)readExceptSpeakModels;
- (void)timerSelector:(id)arg1;
- (void)cacheSystemSpeakMessage:(id)arg1 comment:(id)arg2 userId:(id)arg3;
- (void)cacheSponsorSpeakMessage:(id)arg1 comment:(id)arg2 userId:(id)arg3;
- (void)cacheAnchorSpeakMessage:(id)arg1 comment:(id)arg2 userId:(id)arg3;
- (void)cacheFollowMessage:(id)arg1;
- (void)cacheFlirtElvesMessage:(id)arg1;
- (void)cacheUserLeveUPMessage:(id)arg1 userLevel:(id)arg2 text:(id)arg3 iconUrl:(id)arg4;
- (void)cacheUserEnterMessage:(id)arg1 userLevel:(id)arg2 text:(id)arg3 iconUrl:(id)arg4;
- (void)cacheShopMessage:(id)arg1;
- (void)cacheActivityPointsMessage:(id)arg1;
- (void)stopServerMsg;
- (void)requestServerMsg;
- (void)refreshViewWithModels:(id)arg1;
- (void)buildView;
- (id)shopModelCenter;
- (id)commentTipsView;
- (void)stopManager;
- (void)dealloc;
- (id)init;

@end

