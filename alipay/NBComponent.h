//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NBComponentProtocol-Protocol.h"

@class NBComponentContext, NSDictionary, NSString;
@protocol NBComponentMessageDelegate;

@interface NBComponent : NSObject <NBComponentProtocol>
{
    id <NBComponentMessageDelegate> _nbComponentMessageDelegate;
    NSString *_type;
    NSDictionary *_data;
    NSString *_componentId;
    NBComponentContext *_context;
}

@property(retain, nonatomic) NBComponentContext *context; // @synthesize context=_context;
@property(copy, nonatomic) NSString *componentId; // @synthesize componentId=_componentId;
@property(retain, nonatomic) NSDictionary *data; // @synthesize data=_data;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic) __weak id <NBComponentMessageDelegate> nbComponentMessageDelegate; // @synthesize nbComponentMessageDelegate=_nbComponentMessageDelegate;
- (void).cxx_destruct;
- (id)contentView;
- (void)componentReciveMessage:(id)arg1 data:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)componentDataDidChangeWithData:(id)arg1;
- (void)componentDataWillChangeWithData:(id)arg1;
- (void)componentDidPause;
- (void)componentWillPause;
- (void)componentDidResume;
- (void)componentWillResume;
- (void)componentDidDestory;
- (void)componentWillDestory;
- (void)componentDidAppear;
- (void)componentWillAppear;
- (id)initWithConfig:(id)arg1 messageDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

