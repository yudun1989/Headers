//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface QQInternationalPhoneInfo : NSObject
{
    NSString *_internationalPhoneNo;
    NSString *_standardPhoneNo;
    NSString *_standardPhoneNoWithoutSpace;
    NSString *_nation;
    NSString *_prefix;
    NSString *_mobileUin;
    NSString *_originPhoneNum;
    NSString *_ownerNation;
}

@property(retain, nonatomic) NSString *ownerNation; // @synthesize ownerNation=_ownerNation;
@property(readonly, nonatomic) NSString *originPhoneNum; // @synthesize originPhoneNum=_originPhoneNum;
@property(retain, nonatomic) NSString *mobileUin; // @synthesize mobileUin=_mobileUin;
@property(retain, nonatomic) NSString *prefix; // @synthesize prefix=_prefix;
@property(retain, nonatomic) NSString *nation; // @synthesize nation=_nation;
- (void).cxx_destruct;
- (id)realNation;
- (id)standardPhoneNo:(_Bool)arg1 withSpace:(_Bool)arg2;
- (id)internationalPhoneNo;
- (id)initWithPhoneNum:(id)arg1;

@end

