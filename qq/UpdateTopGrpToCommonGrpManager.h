//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/TopCommonGrpManager.h>

@class NSArray;

@interface UpdateTopGrpToCommonGrpManager : TopCommonGrpManager
{
    _Bool _hasLoadFromCache;
    _Bool _firstUpdateTopGrp;
    _Bool _isSubmitting;
    int _currentIndex;
    int _requestTime;
    NSArray *_submitGrpCodeArr;
}

+ (id)getInstance;
@property(nonatomic) int requestTime; // @synthesize requestTime=_requestTime;
@property(nonatomic) _Bool isSubmitting; // @synthesize isSubmitting=_isSubmitting;
@property(nonatomic) int currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) NSArray *submitGrpCodeArr; // @synthesize submitGrpCodeArr=_submitGrpCodeArr;
@property(nonatomic) _Bool firstUpdateTopGrp; // @synthesize firstUpdateTopGrp=_firstUpdateTopGrp;
@property(nonatomic) _Bool hasLoadFromCache; // @synthesize hasLoadFromCache=_hasLoadFromCache;
- (_Bool)needToContinueSubmit:(int)arg1;
- (id)filePath;
- (void)clearUpdateFailedTopGrp;
- (void)addTopGrpToCommonGrpCache;
- (void)updateTopGrpList:(id)arg1 isAdd:(_Bool)arg2 CompleteBlock:(CDUnknownBlockType)arg3;
- (void)onSubmitTopGrpToCommonGrp:(id)arg1;
- (void)onStartSubmitTopGrp:(id)arg1;
- (void)onChangeAccount;
- (void)dealloc;
- (void)loadCommonGroupFromCache;

@end

