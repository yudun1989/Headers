//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface CardQQModel : NSObject
{
    _Bool _isHeaderView;
    _Bool _isQQAddFriendButton;
    _Bool _isQQAddButton;
    unsigned long long _qqUin;
    NSString *_qqName;
    NSString *_qqPhone;
    long long _cardUinType;
}

@property(nonatomic) long long cardUinType; // @synthesize cardUinType=_cardUinType;
@property(copy, nonatomic) NSString *qqPhone; // @synthesize qqPhone=_qqPhone;
@property(copy, nonatomic) NSString *qqName; // @synthesize qqName=_qqName;
@property(nonatomic) unsigned long long qqUin; // @synthesize qqUin=_qqUin;
@property(nonatomic) _Bool isQQAddButton; // @synthesize isQQAddButton=_isQQAddButton;
@property(nonatomic) _Bool isQQAddFriendButton; // @synthesize isQQAddFriendButton=_isQQAddFriendButton;
@property(nonatomic) _Bool isHeaderView; // @synthesize isHeaderView=_isHeaderView;
- (void).cxx_destruct;
- (id)init;

@end

