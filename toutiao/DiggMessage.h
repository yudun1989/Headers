//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class LiveUserModel, MessageCommon, NSNumber, NSString;

@interface DiggMessage : MTLModel <MTLJSONSerializing>
{
    MessageCommon *_commonMode;
    NSNumber *_diggCount;
    NSNumber *_duration;
    NSNumber *_color;
    LiveUserModel *_user;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) LiveUserModel *user; // @synthesize user=_user;
@property(retain, nonatomic) NSNumber *color; // @synthesize color=_color;
@property(retain, nonatomic) NSNumber *duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSNumber *diggCount; // @synthesize diggCount=_diggCount;
@property(retain, nonatomic) MessageCommon *commonMode; // @synthesize commonMode=_commonMode;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

