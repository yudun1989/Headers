//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class LVBChannelInfo, NSArray;

@interface AVStreamInfo : NSObject
{
    _Bool _enableRecord;
    long long _encodeType;
    long long _avSdkType;
    LVBChannelInfo *_channelInfo;
    NSArray *_rateType;
}

@property(retain, nonatomic) NSArray *rateType; // @synthesize rateType=_rateType;
@property(nonatomic) _Bool enableRecord; // @synthesize enableRecord=_enableRecord;
@property(retain, nonatomic) LVBChannelInfo *channelInfo; // @synthesize channelInfo=_channelInfo;
@property(nonatomic) long long avSdkType; // @synthesize avSdkType=_avSdkType;
@property(nonatomic) long long encodeType; // @synthesize encodeType=_encodeType;
- (void).cxx_destruct;

@end

