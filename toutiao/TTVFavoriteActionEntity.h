//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTVMoreActionEntity.h"

@class NSNumber, NSString;

@interface TTVFavoriteActionEntity : TTVMoreActionEntity
{
    _Bool _userRepined;
    NSString *_groupId;
    NSString *_itemId;
    NSString *_adId;
    NSNumber *_aggrType;
    NSString *_categoryId;
}

@property(nonatomic) _Bool userRepined; // @synthesize userRepined=_userRepined;
@property(copy, nonatomic) NSString *categoryId; // @synthesize categoryId=_categoryId;
@property(retain, nonatomic) NSNumber *aggrType; // @synthesize aggrType=_aggrType;
@property(copy, nonatomic) NSString *adId; // @synthesize adId=_adId;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(copy, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
- (void).cxx_destruct;

@end

