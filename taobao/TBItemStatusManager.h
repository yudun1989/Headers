//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface TBItemStatusManager : NSObject
{
    NSMutableDictionary *_mapTBItemId2FavStatu;
}

@property(retain, nonatomic) NSMutableDictionary *mapTBItemId2FavStatu; // @synthesize mapTBItemId2FavStatu=_mapTBItemId2FavStatu;
- (void).cxx_destruct;
- (void)delFavWithTBItemIds:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)addFavWithTBItemId:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)queryFavStatusWithTBItemIds:(id)arg1 callBack:(CDUnknownBlockType)arg2;

@end

