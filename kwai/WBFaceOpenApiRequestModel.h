//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBFaceApiModel.h"

@class NSString;

@interface WBFaceOpenApiRequestModel : WBFaceApiModel
{
    NSString *_app_id;
    NSString *_version;
    NSString *_nonce;
    NSString *_user_id;
    NSString *_sign;
}

@property(copy, nonatomic) NSString *sign; // @synthesize sign=_sign;
@property(copy, nonatomic) NSString *user_id; // @synthesize user_id=_user_id;
@property(copy, nonatomic) NSString *nonce; // @synthesize nonce=_nonce;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *app_id; // @synthesize app_id=_app_id;
- (void).cxx_destruct;

@end

