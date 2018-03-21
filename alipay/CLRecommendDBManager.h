//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class APCustomStorage;
@protocol CLRecommendDAOProxy;

@interface CLRecommendDBManager : NSObject
{
    id <CLRecommendDAOProxy> _daoProxy;
    APCustomStorage *_storage;
}

+ (id)sharedInstance;
@property(retain, nonatomic) APCustomStorage *storage; // @synthesize storage=_storage;
@property(retain, nonatomic) id <CLRecommendDAOProxy> daoProxy; // @synthesize daoProxy=_daoProxy;
- (void).cxx_destruct;
- (void)deleteAllRecommendItems;
- (void)deleteAllNormalItems;
- (void)deleteRecommendListByIDs:(id)arg1;
- (void)deleteRecommendItemById:(id)arg1;
- (id)readNormalRecommendItems;
- (id)readTopRecommendItems;
- (_Bool)saveRecommendItemList:(id)arg1;
- (_Bool)saveRecommendIntem:(id)arg1;
- (void)initDataBase;

@end

