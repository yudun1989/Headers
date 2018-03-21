//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol-Protocol.h"

@class NSString, ShortFrequencyConnectChannelIntervalSetting;

@interface ShortFrequencyConnectSetting : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasNormal;
    _Bool _hasFast;
    _Bool _hasSlow;
    ShortFrequencyConnectChannelIntervalSetting *_normal;
    ShortFrequencyConnectChannelIntervalSetting *_fast;
    ShortFrequencyConnectChannelIntervalSetting *_slow;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) ShortFrequencyConnectChannelIntervalSetting *slow; // @synthesize slow=_slow;
@property(retain, nonatomic) ShortFrequencyConnectChannelIntervalSetting *fast; // @synthesize fast=_fast;
@property(retain, nonatomic) ShortFrequencyConnectChannelIntervalSetting *normal; // @synthesize normal=_normal;
@property(readonly) _Bool hasSlow; // @synthesize hasSlow=_hasSlow;
@property(readonly) _Bool hasFast; // @synthesize hasFast=_hasFast;
@property(readonly) _Bool hasNormal; // @synthesize hasNormal=_hasNormal;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

