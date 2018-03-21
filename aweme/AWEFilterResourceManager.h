//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEResourceBaseManager.h"

@class AWEFilterModel, NSArray, NSMutableDictionary;

@interface AWEFilterResourceManager : AWEResourceBaseManager
{
    AWEFilterModel *_frontCameraFilter;
    AWEFilterModel *_rearCameraFilter;
    AWEFilterModel *_normalFilter;
    NSArray *_fetchFilterArray;
    NSArray *_localFilterArray;
    NSMutableDictionary *_filterDownloadTaskMap;
    AWEFilterModel *_filter_1;
    AWEFilterModel *_filter_2;
    AWEFilterModel *_filter_3;
    AWEFilterModel *_filter_4;
}

+ (id)sharedManager;
@property(retain, nonatomic) AWEFilterModel *filter_4; // @synthesize filter_4=_filter_4;
@property(retain, nonatomic) AWEFilterModel *filter_3; // @synthesize filter_3=_filter_3;
@property(retain, nonatomic) AWEFilterModel *filter_2; // @synthesize filter_2=_filter_2;
@property(retain, nonatomic) AWEFilterModel *filter_1; // @synthesize filter_1=_filter_1;
@property(retain, nonatomic) NSMutableDictionary *filterDownloadTaskMap; // @synthesize filterDownloadTaskMap=_filterDownloadTaskMap;
@property(copy, nonatomic) NSArray *localFilterArray; // @synthesize localFilterArray=_localFilterArray;
@property(copy, nonatomic) NSArray *fetchFilterArray; // @synthesize fetchFilterArray=_fetchFilterArray;
@property(retain, nonatomic) AWEFilterModel *normalFilter; // @synthesize normalFilter=_normalFilter;
@property(retain, nonatomic) AWEFilterModel *rearCameraFilter; // @synthesize rearCameraFilter=_rearCameraFilter;
@property(retain, nonatomic) AWEFilterModel *frontCameraFilter; // @synthesize frontCameraFilter=_frontCameraFilter;
- (void).cxx_destruct;
- (id)getPersistFilterArray;
- (void)persistFilterArray:(id)arg1;
- (id)nextFilterOfFilter:(id)arg1 filterArray:(id)arg2;
- (id)prevFilterOfFilter:(id)arg1 filterArray:(id)arg2;
- (_Bool)isDecompressedRecourceExistForFilter:(id)arg1;
- (id)getNeedShowFilterList;
- (void)fetchFilterList;
- (void)decompressResourceForNeedDecompressResources;
- (_Bool)isDownloadingForFilter:(id)arg1;
- (void)downloadResourcesForFetchFilterArray:(id)arg1;

@end

