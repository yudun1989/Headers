//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class AWEUserModel, NSArray, NSString;

@interface AWESearchUser : MTLModel <MTLJSONSerializing>
{
    AWEUserModel *_userInfo;
    NSArray *_position;
    NSArray *_uniqidPosition;
}

+ (id)uniqidPositionJSONTransformer;
+ (id)positionJSONTransformer;
+ (id)userInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)instanceWithUser:(id)arg1;
@property(retain, nonatomic) NSArray *uniqidPosition; // @synthesize uniqidPosition=_uniqidPosition;
@property(retain, nonatomic) NSArray *position; // @synthesize position=_position;
@property(retain, nonatomic) AWEUserModel *userInfo; // @synthesize userInfo=_userInfo;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

