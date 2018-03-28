//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSDictionary, NSString;

@interface TTFollowNotify : NSObject <NSCopying, NSCoding>
{
    NSString *_ID;
    long long _actionType;
    long long _itemType;
    NSDictionary *_userInfo;
}

@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) long long itemType; // @synthesize itemType=_itemType;
@property(nonatomic) long long actionType; // @synthesize actionType=_actionType;
@property(copy, nonatomic) NSString *ID; // @synthesize ID=_ID;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithID:(id)arg1 actionType:(long long)arg2 itemType:(long long)arg3 userInfo:(id)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

