//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQModel.h>

@class NSString;

@interface NSFAnimationModel : QQModel
{
    _Bool _isSenderMySelf;
    _Bool _isGroup;
    _Bool _isAudience;
    long long _packageID;
    NSString *_packageURL;
    long long _flowerCount;
    long long _flowerScore;
    NSString *_tips;
    NSString *_senderUin;
    NSString *_receiverUin;
    NSString *_animationKey;
    unsigned long long _msgTime;
    NSString *_sendFlowerURL;
    NSString *_sendFlowerMaskName;
    NSString *_accpetFlowerURL;
    NSString *_accpetFlowerMaskName;
    NSString *_gSid;
}

@property(copy, nonatomic) NSString *gSid; // @synthesize gSid=_gSid;
@property(copy, nonatomic) NSString *accpetFlowerMaskName; // @synthesize accpetFlowerMaskName=_accpetFlowerMaskName;
@property(copy, nonatomic) NSString *accpetFlowerURL; // @synthesize accpetFlowerURL=_accpetFlowerURL;
@property(copy, nonatomic) NSString *sendFlowerMaskName; // @synthesize sendFlowerMaskName=_sendFlowerMaskName;
@property(copy, nonatomic) NSString *sendFlowerURL; // @synthesize sendFlowerURL=_sendFlowerURL;
@property(nonatomic) _Bool isAudience; // @synthesize isAudience=_isAudience;
@property(nonatomic) unsigned long long msgTime; // @synthesize msgTime=_msgTime;
@property(copy, nonatomic) NSString *animationKey; // @synthesize animationKey=_animationKey;
@property(nonatomic) _Bool isGroup; // @synthesize isGroup=_isGroup;
@property(nonatomic) _Bool isSenderMySelf; // @synthesize isSenderMySelf=_isSenderMySelf;
@property(copy, nonatomic) NSString *receiverUin; // @synthesize receiverUin=_receiverUin;
@property(copy, nonatomic) NSString *senderUin; // @synthesize senderUin=_senderUin;
@property(copy, nonatomic) NSString *tips; // @synthesize tips=_tips;
@property(nonatomic) long long flowerScore; // @synthesize flowerScore=_flowerScore;
@property(nonatomic) long long flowerCount; // @synthesize flowerCount=_flowerCount;
@property(copy, nonatomic) NSString *packageURL; // @synthesize packageURL=_packageURL;
@property(nonatomic) long long packageID; // @synthesize packageID=_packageID;
- (void).cxx_destruct;
- (id)description;

@end

