//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MtopExtRequest.h"

@interface TBCRequestUtility : MtopExtRequest
{
    _Bool _mutableResult;
}

+ (id)instanceWithMethod:(id)arg1 version:(id)arg2;
+ (id)instanceWithMethod:(id)arg1;
@property(nonatomic) _Bool mutableResult; // @synthesize mutableResult=_mutableResult;
- (void)synRequestForModel:(Class)arg1 complete:(CDUnknownBlockType)arg2;
- (void)synRequestWithComplete:(CDUnknownBlockType)arg1;
- (void)asynRequestForModel:(Class)arg1 complete:(CDUnknownBlockType)arg2;
- (void)asynRequestWithComplete:(CDUnknownBlockType)arg1;
- (id)init;

@end

