//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQModel.h>

@class NSString;

@interface NearbyFriendHeaderMessageModel : QQModel
{
    long long _count;
    NSString *_avatarUrl;
    NSString *_jumpUrl;
    NSString *_uinStr;
}

@property(copy, nonatomic) NSString *uinStr; // @synthesize uinStr=_uinStr;
@property(copy, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(copy, nonatomic) NSString *avatarUrl; // @synthesize avatarUrl=_avatarUrl;
@property(nonatomic) long long count; // @synthesize count=_count;
- (void).cxx_destruct;
- (id)formatTitle;

@end

