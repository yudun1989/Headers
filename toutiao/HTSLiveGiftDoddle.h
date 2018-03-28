//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSArray, NSNumber, NSString;

@interface HTSLiveGiftDoddle : MTLModel <MTLJSONSerializing>
{
    NSNumber *_originWidth;
    NSNumber *_originHeight;
    NSArray *_points;
}

+ (id)pointsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSArray *points; // @synthesize points=_points;
@property(retain, nonatomic) NSNumber *originHeight; // @synthesize originHeight=_originHeight;
@property(retain, nonatomic) NSNumber *originWidth; // @synthesize originWidth=_originWidth;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

