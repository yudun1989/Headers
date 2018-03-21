//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ANXBaseLogModel.h"

@class ANXRuntimeConfig, NSString;

@interface ANXBussinessModel : ANXBaseLogModel
{
    ANXRuntimeConfig *_runtimeConfig;
    NSString *_innerVersion;
    NSString *_channel;
    NSString *_insideModel;
    NSString *_productID;
    NSString *_productVersion;
    NSString *_bussinessID;
    NSString *_sessionID;
    NSString *_userID;
    NSString *_tid;
    NSString *_utdid;
}

@property(copy, nonatomic) NSString *utdid; // @synthesize utdid=_utdid;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(copy, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(copy, nonatomic) NSString *bussinessID; // @synthesize bussinessID=_bussinessID;
@property(copy, nonatomic) NSString *productVersion; // @synthesize productVersion=_productVersion;
@property(copy, nonatomic) NSString *productID; // @synthesize productID=_productID;
@property(copy, nonatomic) NSString *insideModel; // @synthesize insideModel=_insideModel;
@property(copy, nonatomic) NSString *channel; // @synthesize channel=_channel;
@property(copy, nonatomic) NSString *innerVersion; // @synthesize innerVersion=_innerVersion;
@property(retain, nonatomic) ANXRuntimeConfig *runtimeConfig; // @synthesize runtimeConfig=_runtimeConfig;
- (void).cxx_destruct;
- (id)childModelContents;

@end

