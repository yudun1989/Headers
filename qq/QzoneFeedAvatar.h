//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QzoneModel.h>

@class NSString;

@interface QzoneFeedAvatar : QzoneModel
{
    long long _itemId;
    long long _avatarType;
    NSString *_avatarUrl;
    NSString *_avatarJumpUrl;
}

@property(copy, nonatomic) NSString *avatarJumpUrl; // @synthesize avatarJumpUrl=_avatarJumpUrl;
@property(copy, nonatomic) NSString *avatarUrl; // @synthesize avatarUrl=_avatarUrl;
@property(nonatomic) long long avatarType; // @synthesize avatarType=_avatarType;
@property(nonatomic) long long itemId; // @synthesize itemId=_itemId;
- (void).cxx_destruct;

@end

