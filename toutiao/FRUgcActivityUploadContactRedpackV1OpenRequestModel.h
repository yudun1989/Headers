//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTRequestModel.h"

@class NSString;

@interface FRUgcActivityUploadContactRedpackV1OpenRequestModel : TTRequestModel
{
    NSString *_redpack_id;
    NSString *_token;
}

@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(retain, nonatomic) NSString *redpack_id; // @synthesize redpack_id=_redpack_id;
- (void).cxx_destruct;
- (id)_requestParams;
- (id)init;

@end

