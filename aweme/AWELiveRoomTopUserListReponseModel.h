//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class NSArray, NSNumber;

@interface AWELiveRoomTopUserListReponseModel : AWEBaseApiModel
{
    NSNumber *_roomCoin;
    NSArray *_roomTopUserList;
}

+ (id)roomTopUserListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSArray *roomTopUserList; // @synthesize roomTopUserList=_roomTopUserList;
@property(retain, nonatomic) NSNumber *roomCoin; // @synthesize roomCoin=_roomCoin;
- (void).cxx_destruct;

@end

