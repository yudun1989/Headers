//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MOBILECSABaseRpcRequest.h"

@class NSDictionary, NSString;

@interface MOBILECSADataCollectRequest : MOBILECSABaseRpcRequest
{
    NSString *_sceneCode;
    NSDictionary *_clickData;
}

+ (Class)clickDataElementClass;
@property(retain, nonatomic) NSDictionary *clickData; // @synthesize clickData=_clickData;
@property(retain, nonatomic) NSString *sceneCode; // @synthesize sceneCode=_sceneCode;
- (void).cxx_destruct;

@end

