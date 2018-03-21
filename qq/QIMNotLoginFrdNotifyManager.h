//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class LYStorage, NSMutableArray;

@interface QIMNotLoginFrdNotifyManager : NSObject
{
    _Bool _isDataLoaded;
    _Bool _isConfigEnable;
    _Bool _isConfigShouldPop;
    NSMutableArray *_cache;
    LYStorage *_storage;
}

+ (id)notifySource;
+ (void)handleRedirectionToQim;
+ (void)handleConfirmAddFriends:(id)arg1;
+ (id)createNFMsgNotifyList:(id)arg1;
+ (id)getIntructionWordingForModel:(id)arg1;
+ (id)sharedManager;
@property(nonatomic) _Bool isConfigShouldPop; // @synthesize isConfigShouldPop=_isConfigShouldPop;
@property(retain, nonatomic) LYStorage *storage; // @synthesize storage=_storage;
@property(retain, nonatomic) NSMutableArray *cache; // @synthesize cache=_cache;
@property(nonatomic) _Bool isConfigEnable; // @synthesize isConfigEnable=_isConfigEnable;
@property(nonatomic) _Bool isDataLoaded; // @synthesize isDataLoaded=_isDataLoaded;
- (void).cxx_destruct;
- (void)checkToShowPopView;
- (void)onAppDidBecomeActive;
- (void)onTargetVCShow;
- (void)onConfigChanged;
- (void)onAccountChange;
- (void)setAllRead;
- (void)setDataHasPop:(struct NSArray *)arg1;
- (void)setDataRead:(struct NSArray *)arg1;
- (void)saveData:(struct NSArray *)arg1 forUin:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeData:(struct NSArray *)arg1;
- (void)asyncGetNotifyListWithCompletion:(CDUnknownBlockType)arg1;
- (void)onRecvData:(id)arg1;
- (id)getUnpopFrdList;
- (struct NSArray *)getCachedNotifyList;
- (id)keyForUin:(id)arg1;
- (id)init;

@end

