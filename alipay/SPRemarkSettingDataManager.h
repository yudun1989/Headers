//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class APContactInfo;

@interface SPRemarkSettingDataManager : NSObject
{
    APContactInfo *_contactInfo;
}

@property(retain, nonatomic) APContactInfo *contactInfo; // @synthesize contactInfo=_contactInfo;
- (void).cxx_destruct;
- (_Bool)needShowContactPhonesTipWithRemarkPhones:(id)arg1 outContactPhones:(id *)arg2;
- (_Bool)needShowRealnameTipWithOrginContactName:(id)arg1 outRealName:(id *)arg2;
- (id)initWithContactInfo:(id)arg1;

@end

