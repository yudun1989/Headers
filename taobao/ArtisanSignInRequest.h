//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBMTOPBaseRequest.h"

@class NSString;

@interface ArtisanSignInRequest : TBMTOPBaseRequest
{
    NSString *_appName;
    NSString *_bizId;
    long long _bizType;
    NSString *_metaInfo;
    NSString *_activityId;
}

@property(retain, nonatomic) NSString *activityId; // @synthesize activityId=_activityId;
@property(retain, nonatomic) NSString *metaInfo; // @synthesize metaInfo=_metaInfo;
@property(nonatomic) long long bizType; // @synthesize bizType=_bizType;
@property(retain, nonatomic) NSString *bizId; // @synthesize bizId=_bizId;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
- (void).cxx_destruct;
- (id)init;

@end

