//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, TBMyTaobaoDealInfoModel, TBMyTaobaoModel, TBMyTaobaoSpecialInfoModel;

@interface TBMyTaobaoRequestModel : NSObject
{
    _Bool _isLoadingMyTaobaoData;
    TBMyTaobaoModel *_myTaobaoModel;
    TBMyTaobaoDealInfoModel *_dealInfoModel;
    NSArray *_logisticsInfoModels;
    NSDictionary *_dictionay;
    TBMyTaobaoSpecialInfoModel *_specialModel;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool isLoadingMyTaobaoData; // @synthesize isLoadingMyTaobaoData=_isLoadingMyTaobaoData;
@property(readonly, nonatomic) TBMyTaobaoSpecialInfoModel *specialModel; // @synthesize specialModel=_specialModel;
@property(readonly, nonatomic) NSDictionary *dictionay; // @synthesize dictionay=_dictionay;
@property(readonly, nonatomic) NSArray *logisticsInfoModels; // @synthesize logisticsInfoModels=_logisticsInfoModels;
@property(readonly, nonatomic) TBMyTaobaoDealInfoModel *dealInfoModel; // @synthesize dealInfoModel=_dealInfoModel;
@property(readonly, nonatomic) TBMyTaobaoModel *myTaobaoModel; // @synthesize myTaobaoModel=_myTaobaoModel;
- (void).cxx_destruct;
- (_Bool)timeIsExpiredWithKey:(id)arg1 Default:(long long)arg2 Model:(id)arg3;
- (_Bool)isPushToServer;
- (_Bool)logisticsInfoModuleSwitch;
- (_Bool)fetchDealInfoSourceSwitch;
- (void)judgeFestivalAndSetMyTaobaoModel;
- (void)fetchLogisticsInfos:(CDUnknownBlockType)arg1;
- (void)fetchDealInfoFromSource:(CDUnknownBlockType)arg1;
- (void)setLogisticsInfoWithDictionary:(id)arg1;
- (void)setDealInfoWithDictionary:(id)arg1;
- (void)setDealInfoModel:(id)arg1;
- (void)setMyTaobaoModel:(id)arg1;
- (void)setSpecialModel:(id)arg1;
- (void)muteAvatarAnimation;
- (void)loadMyTaobaoModel:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)requestIncrementDataWithCompletion:(CDUnknownBlockType)arg1 Model:(id)arg2 type:(long long)arg3;
- (void)cacheSuiteNeedDealInfoFromACDS:(_Bool)arg1 forceRefresh:(_Bool)arg2 complete:(CDUnknownBlockType)arg3;
- (void)requestWholeDataNeedDealFromACDS:(_Bool)arg1 callback:(CDUnknownBlockType)arg2;
- (void)noCachedSuiteNeedDealFromACDS:(_Bool)arg1 complete:(CDUnknownBlockType)arg2;
- (id)myTaobaoModelFromLocalData;
- (void)loadMyTaobaoModelLocalDataWithCompletion:(CDUnknownBlockType)arg1;

@end

