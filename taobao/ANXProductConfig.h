//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface ANXProductConfig : NSObject
{
    NSString *_innerVersion;
    NSString *_channel;
    NSString *_productVersion;
}

@property(copy, nonatomic) NSString *productVersion; // @synthesize productVersion=_productVersion;
@property(copy, nonatomic) NSString *channel; // @synthesize channel=_channel;
@property(copy, nonatomic) NSString *innerVersion; // @synthesize innerVersion=_innerVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *sdkType;
@property(readonly, copy, nonatomic) NSString *insideProductId;
@property(readonly, copy, nonatomic) NSString *insideModel;
@property(readonly, copy, nonatomic) NSString *serverTimeKey;
@property(readonly, copy, nonatomic) NSString *productDomain;

@end

