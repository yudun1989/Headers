//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AliDetailModel, AliDetailServiceInfoModel, NSMutableDictionary, NSMutableSet;

@interface AliDetailTmallServiceManager : NSObject
{
    AliDetailModel *_tbDetailModel;
    NSMutableDictionary *_selectMap;
    NSMutableDictionary *_selectMultiMap;
    NSMutableSet *_multiSet;
    AliDetailServiceInfoModel *_serviceInfo;
    NSMutableDictionary *_currentServiceMap;
}

@property(retain, nonatomic) NSMutableDictionary *currentServiceMap; // @synthesize currentServiceMap=_currentServiceMap;
@property(retain, nonatomic) AliDetailServiceInfoModel *serviceInfo; // @synthesize serviceInfo=_serviceInfo;
@property(retain, nonatomic) NSMutableSet *multiSet; // @synthesize multiSet=_multiSet;
@property(retain, nonatomic) NSMutableDictionary *selectMultiMap; // @synthesize selectMultiMap=_selectMultiMap;
@property(retain, nonatomic) NSMutableDictionary *selectMap; // @synthesize selectMap=_selectMap;
@property(nonatomic) __weak AliDetailModel *tbDetailModel; // @synthesize tbDetailModel=_tbDetailModel;
- (void).cxx_destruct;
- (id)selectServices;
- (id)getSelectServerIds;
- (double)serviceUnSelected:(id)arg1;
- (double)serviceUnSelected:(id)arg1 UniqId:(id)arg2;
- (double)serviceSelected:(id)arg1;
- (double)caculateServicePrice;
- (double)serviceSelected:(id)arg1 UniqId:(id)arg2;
- (_Bool)isServiceMultiSelected:(id)arg1;
- (_Bool)isServiceSelected:(id)arg1;
- (_Bool)isServiceSelected:(id)arg1 UniqId:(id)arg2;
- (void)clearSelect;
- (_Bool)isAutoSelectForServiceId:(id)arg1 uniqueId:(id)arg2;
- (void)buildCurrentSelect:(id)arg1;
- (void)buildCurrentSelectMap:(id)arg1;
- (id)selectSku:(id)arg1;
- (void)initSelect;
- (id)initWithDetailResult:(id)arg1;
- (void)resetTBDetailModel:(id)arg1;

@end

