//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSRequestModel.h"

@class NSArray, NSError, NSNumber, NSString;

@interface KSUserDetailModel : KSRequestModel
{
    CDUnknownBlockType _requestDidFinishBlock;
    NSNumber *_userID;
    NSString *_sid;
    NSString *_expTag;
    NSArray *_completions;
    NSError *_error;
}

+ (void)loadOfficialAccountProfileCompletion:(CDUnknownBlockType)arg1;
+ (id)officialAccountModel;
+ (id)cache;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSArray *completions; // @synthesize completions=_completions;
@property(retain, nonatomic) NSString *expTag; // @synthesize expTag=_expTag;
@property(retain, nonatomic) NSString *sid; // @synthesize sid=_sid;
@property(retain, nonatomic) NSNumber *userID; // @synthesize userID=_userID;
@property(copy, nonatomic) CDUnknownBlockType requestDidFinishBlock; // @synthesize requestDidFinishBlock=_requestDidFinishBlock;
- (void).cxx_destruct;
- (void)didFailLoadWithError:(id)arg1;
- (void)didFinishLoad;
- (void)loadUserProfileCompletion:(CDUnknownBlockType)arg1;
- (void)load:(_Bool)arg1;
- (id)userProfile;
- (id)initWithUserID:(id)arg1;
- (id)initWithUserID:(id)arg1 searchSessionID:(id)arg2 expTag:(id)arg3;
- (id)bodyParams;
- (id)apiPath;

@end

