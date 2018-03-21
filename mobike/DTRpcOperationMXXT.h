//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTRpcBaseOperationMXXT.h"

@class DTRpcMethodMXXT, NSArray, NSMutableDictionary;

@interface DTRpcOperationMXXT : DTRpcBaseOperationMXXT
{
    double _startTime;
    DTRpcMethodMXXT *_method;
    NSArray *_params;
    id _resultObject;
    NSMutableDictionary *_userInfo;
}

@property(retain, nonatomic) NSMutableDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) id resultObject; // @synthesize resultObject=_resultObject;
@property(retain, nonatomic) NSArray *params; // @synthesize params=_params;
@property(retain, nonatomic) DTRpcMethodMXXT *method; // @synthesize method=_method;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
- (void).cxx_destruct;
- (void)didFinish;
- (void)didStart;
- (id)buildRequestDataWithMethod:(id)arg1 params:(id)arg2;
- (id)copy;
- (void)start;
- (id)initWithURL:(id)arg1 method:(id)arg2 params:(id)arg3;
- (id)initWithURL:(id)arg1 method:(id)arg2 params:(id)arg3 timeout:(double)arg4;

@end

