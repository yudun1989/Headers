//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class MessageCommon, NSString, PushMessageExtra;

@interface PushMessage : MTLModel <MTLJSONSerializing>
{
    MessageCommon *_commonMode;
    PushMessageExtra *_pushExtra;
}

+ (id)pushExtraJSONTransformer;
+ (id)commonModeTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) PushMessageExtra *pushExtra; // @synthesize pushExtra=_pushExtra;
@property(retain, nonatomic) MessageCommon *commonMode; // @synthesize commonMode=_commonMode;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

