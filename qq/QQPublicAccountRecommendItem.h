//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface QQPublicAccountRecommendItem : NSObject
{
    NSString *_paNick;
    NSString *_paUin;
    double _creatTime;
    unsigned long long _accountType;
}

@property(nonatomic) unsigned long long accountType; // @synthesize accountType=_accountType;
@property(nonatomic) double creatTime; // @synthesize creatTime=_creatTime;
@property(copy, nonatomic) NSString *paUin; // @synthesize paUin=_paUin;
@property(copy, nonatomic) NSString *paNick; // @synthesize paNick=_paNick;
- (void).cxx_destruct;
- (id)initWithUin:(id)arg1 nick:(id)arg2 createTime:(double)arg3;

@end

