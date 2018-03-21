//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQModel.h>

#import <QQMainProject/NSCopying-Protocol.h>

@class NSDate, NSString;

@interface QQARAwardModel : QQModel <NSCopying>
{
    _Bool _notPlayModel;
    _Bool _hadGetAward;
    _Bool _allowRetryAward;
    NSString *_businessName;
    NSString *_businessLogo;
    NSString *_businessBanner;
    NSString *_businessWishing;
    unsigned long long _awardDistance;
    NSDate *_lastRequestAwardTime;
}

@property(copy, nonatomic) NSDate *lastRequestAwardTime; // @synthesize lastRequestAwardTime=_lastRequestAwardTime;
@property(nonatomic) _Bool allowRetryAward; // @synthesize allowRetryAward=_allowRetryAward;
@property(nonatomic) _Bool hadGetAward; // @synthesize hadGetAward=_hadGetAward;
@property(nonatomic) _Bool notPlayModel; // @synthesize notPlayModel=_notPlayModel;
@property(nonatomic) unsigned long long awardDistance; // @synthesize awardDistance=_awardDistance;
@property(copy, nonatomic) NSString *businessWishing; // @synthesize businessWishing=_businessWishing;
@property(copy, nonatomic) NSString *businessBanner; // @synthesize businessBanner=_businessBanner;
@property(copy, nonatomic) NSString *businessLogo; // @synthesize businessLogo=_businessLogo;
@property(copy, nonatomic) NSString *businessName; // @synthesize businessName=_businessName;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

