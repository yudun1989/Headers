//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KSSignalDowngradeConfigration, NSDictionary, NSNumber;

@interface KSCDNDowngradeConfigration : NSObject
{
    KSSignalDowngradeConfigration *_signalDowngradeConfigration;
    NSNumber *_enableDelayUpload;
    NSNumber *_disableCheckFilter;
    NSNumber *_disableFeedStat;
    NSDictionary *_springFestivalDowngradeConfigration;
}

+ (id)mj_replacedKeyFromPropertyName;
@property(retain, nonatomic) NSDictionary *springFestivalDowngradeConfigration; // @synthesize springFestivalDowngradeConfigration=_springFestivalDowngradeConfigration;
@property(retain, nonatomic) NSNumber *disableFeedStat; // @synthesize disableFeedStat=_disableFeedStat;
@property(retain, nonatomic) NSNumber *disableCheckFilter; // @synthesize disableCheckFilter=_disableCheckFilter;
@property(retain, nonatomic) NSNumber *enableDelayUpload; // @synthesize enableDelayUpload=_enableDelayUpload;
@property(retain, nonatomic) KSSignalDowngradeConfigration *signalDowngradeConfigration; // @synthesize signalDowngradeConfigration=_signalDowngradeConfigration;
- (void).cxx_destruct;

@end

