//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ANXBaseLogModel.h"

@class ANXRuntimeConfig, NSString;

@interface ANXDeviceModel : ANXBaseLogModel
{
    ANXRuntimeConfig *_runtimeConfig;
    NSString *_os;
    NSString *_vendor;
    NSString *_model;
    NSString *_osVersion;
    NSString *_language;
    NSString *_resolution;
    NSString *_root;
    NSString *_imei;
    NSString *_imsi;
}

@property(copy, nonatomic) NSString *imsi; // @synthesize imsi=_imsi;
@property(copy, nonatomic) NSString *imei; // @synthesize imei=_imei;
@property(copy, nonatomic) NSString *root; // @synthesize root=_root;
@property(copy, nonatomic) NSString *resolution; // @synthesize resolution=_resolution;
@property(copy, nonatomic) NSString *language; // @synthesize language=_language;
@property(copy, nonatomic) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(copy, nonatomic) NSString *model; // @synthesize model=_model;
@property(copy, nonatomic) NSString *vendor; // @synthesize vendor=_vendor;
@property(copy, nonatomic) NSString *os; // @synthesize os=_os;
@property(retain, nonatomic) ANXRuntimeConfig *runtimeConfig; // @synthesize runtimeConfig=_runtimeConfig;
- (void).cxx_destruct;
- (id)childModelContents;
- (id)init;

@end

