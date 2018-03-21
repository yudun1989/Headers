//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NileComponentModelProtocol-Protocol.h"

@class NSString;
@protocol NileComponentProtocol, NileStatsModelProtocol;

@interface NileBaseComponentModel : NSObject <NileComponentModelProtocol>
{
    CDUnknownBlockType createComponentBlock;
    NSString *componentId;
    NSString *componentDataId;
    long long childIndex;
    NSString *spm;
    id <NileComponentProtocol> _component;
    id <NileStatsModelProtocol> _statsModel;
}

@property(retain, nonatomic) id <NileStatsModelProtocol> statsModel; // @synthesize statsModel=_statsModel;
@property(nonatomic) __weak id <NileComponentProtocol> component; // @synthesize component=_component;
@property(copy, nonatomic) NSString *spm; // @synthesize spm;
@property(nonatomic) long long childIndex; // @synthesize childIndex;
@property(copy, nonatomic) NSString *componentDataId; // @synthesize componentDataId;
@property(copy, nonatomic) NSString *componentId; // @synthesize componentId;
@property(copy, nonatomic) CDUnknownBlockType createComponentBlock; // @synthesize createComponentBlock;
- (void).cxx_destruct;
- (_Bool)isValid;
- (id)getBindComponentWithSize:(struct CGSize)arg1;
- (void)configWithData:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

